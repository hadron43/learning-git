# Contributing Guidelines

Thanks for taking out time to contribute! Follow the step by step guide to generate a pull request.

## Steps to get the code on your local machine

1. Click on `fork` button at the top. This will make a personal copy of this project on your github account.
2. In the cloned repository, click on `Code` button, and copy the HTTPS link.
3. In your terminal (for Linux and MacOS) or Git bash (for Windows), write the following command at a suitable location:
```
git clone <copied_link>
```
4. Now go ahead, and modify the code in your favourite text editor.

## Steps to add your name card in the website

1. Copy the code given below, and paste it above `Note1` in `index.html` file.
```
<div class="col-4">
    <div class="card">
        <div class="card-header">
            <img class="w-80 m-auto rounded-circle" src="./images/profiles/<filename>" alt="<Your Name>">
        </div>
        <div class="card-body">
            <h5 class="card-title"><Your Name></h5>
            <p class="card-subtitle"><Your Title></p>
        </div>
    </div>
</div>
```
2. Now go ahead and add your image in `images/profiles/` folder. The image should be of 1:1 aspect ratio. You can use any online tool to crop your image and bring it to 1:1 ratio. It is important so that it fits the layout well.
3. In your terminal, write:
```
git add .
git commit -m "Added contributor <Your Name>"
git push
```
4. Now open the cloned repository on your github account, and there you'll see an option to create a pull request. If you can't see it, open `Pull Requests` tab on my repository, and manually create a pull request.

