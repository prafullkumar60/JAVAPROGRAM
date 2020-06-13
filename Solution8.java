import java.util.Scanner;
class Document {
	private int id;
	private String title;
	private String folderName;
	private int pages;
	public Document(int id, String title, String folderName, int pages) {
		super();
		this.id = id;
		this.title = title;
		this.folderName = folderName;
		this.pages = pages;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	public String getFolderName() {
		return folderName;
	}
	public void setFolderName(String folderName) {
		this.folderName = folderName;
	}
	public int getPages() {
		return pages;
	}
	public void setPages(int pages) {
		this.pages = pages;
	}
}

public class Solution8 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Document[] document=new Document[4];
		for(int i=0;i<document.length;i++)
		{
			int id=sc.nextInt();sc.nextLine();
			String title=sc.nextLine();
			String folderName=sc.nextLine();
			int pages=sc.nextInt();
			document[i]=new Document(id,title,folderName,pages);
		}
		Document[] output=docsWithOddPages(document);
		for(int i=0;i<output.length;i++)
		{
			System.out.println(output[i].getId()+" "+output[i].getTitle()+" "+output[i].getFolderName()+" "+output[i].getPages());
		}

	}
	public static Document[] docsWithOddPages(Document[] document)
	{
		int count=0;
		for(int i=0;i<document.length;i++)
		{
			if(document[i].getPages()%2!=0)
				count++;
		}
		Document[] temp=new Document[count];
		int k=0;
		for(int i=0;i<document.length;i++)
		{
			if(document[i].getPages()%2!=0)
			{
				temp[k++]=document[i];
			}	
		}
		return temp;
	}
}


