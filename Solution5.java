import java.util.*;
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

public class Solution5{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		Document[] document=new Document[4];
		for(int i=0;i<document.length;i++)
		{
			int id=scan.nextInt();scan.nextLine();
			String title=scan.nextLine();
			String folderName=scan.nextLine();
			int pages=scan.nextInt();
			document[i]=new Document(id,title,folderName,pages);
		}
		Document output=combineDocs(document);
		System.out.println(output.getId());
		System.out.println(output.getTitle());
		System.out.println(output.getFolderName());
		System.out.println(output.getPages());

	}
	public static Document  combineDocs(Document[] document)
	{
		int id=0;
		String title="";
		String folderName="";
		int pages=0;
		for(int i=0;i<document.length;i++)
		{
			if(id<document[i].getId())
				id=document[i].getId();
			if(i==document.length-1)
			{
				title+=document[i].getTitle();
				folderName+=document[i].getFolderName();
			}
			else
			{
				title+=document[i].getTitle()+"#";
				folderName+=document[i].getFolderName()+"@";
			}
			pages+=document[i].getPages();
		}
		id++;
		Document temp=new Document(id,title,folderName,pages);
		return temp;
		
		
	}

}

