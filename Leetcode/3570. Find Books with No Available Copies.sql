select LB.book_id, LB.title, LB.author, LB.genre, LB.publication_year, LB.total_copies as current_borrowers
from library_books LB
where LB.total_copies = (
                            select count(BR.book_id)
                            from borrowing_records BR
                            where BR.book_id = LB.book_id and BR.return_date is null
                        )
order by LB.total_copies desc, LB.title