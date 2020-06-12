import java.util.Scanner;

class Movie {
	private int movieId;
	private String director;
	private int rating;
	private int budget;
	public Movie(int movieId, String director, int rating, int budget) {
		super();
		this.movieId = movieId;
		this.director = director;
		this.rating = rating;
		this.budget = budget;
	}
	public int getMovieId() {
		return movieId;
	}
	public void setMovieId(int movieId) {
		this.movieId = movieId;
	}
	public String getDirector() {
		return director;
	}
	public void setDirector(String director) {
		this.director = director;
	}
	public int getRating() {
		return rating;
	}
	public void setRating(int rating) {
		this.rating = rating;
	}
	public int getBudget() {
		return budget;
	}
	public void setBudget(int budget) {
		this.budget = budget;
	}
}
public class Solution7 {

	public static void main(String[] args) {
		Movie[] movies=new Movie[4];
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<movies.length;i++)
		{
			int movieId=sc.nextInt();sc.nextLine();
			String director=sc.nextLine();
			int rating=sc.nextInt();
			int budget=sc.nextInt();sc.nextLine();
			movies[i]=new Movie(movieId,director,rating,budget);
		}
		String director=sc.nextLine();
		int rating=sc.nextInt();
		int budget=sc.nextInt();
		int avgBudget=findAvgBudgetByDirector(movies,director);
		if(avgBudget>0)
		{
			System.out.println(avgBudget);
		}
		else
		{
			System.out.println("Sorry-The given director has not yet directed any movies");
		}
		Movie newMovie=getMovieByRatingBudget(movies,rating,budget);
		if(newMovie!=null)
		{
			System.out.println(newMovie.getMovieId());
		}
		else
		{
			System.out.println("Sorry-No movie is available with the specified rating and budget requirement");
		}
	}
		public static int findAvgBudgetByDirector(Movie[] movies,String director)
		{
			int movieCount=0;
			int budget=0;
			for(int i=0;i<movies.length;i++)
			{
				if(movies[i].getDirector().equalsIgnoreCase(director))
				{
					budget+=movies[i].getBudget();
					movieCount++;
				}	
			}
			if(movieCount>0)
				return budget/movieCount;
			else
				return 0;
		}
		public static Movie getMovieByRatingBudget(Movie[] movies,int rating,int budget)
		{
			Movie newMovie=null;
			for(int i=0;i<movies.length;i++)
			{
				if(movies[i].getRating()==rating && movies[i].getBudget()==budget && ((budget%rating)==0))
				{
					newMovie=movies[i];
					break;
				}
			}
			return newMovie;
	}
}
