<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hacktoberfest Webpage</title>
    <style>
        *{
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            
        }

        body{
            font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif
        }
        .main__wrapper{
            width: 100%;
            min-height: 100vh;
            background: rgba(48, 109, 201, 0.767);
            padding: 2rem 4rem;
        }
        h1{
            color: rgb(187, 178, 194);
            background:rgba(0, 0, 0, 0.829);
            padding:1rem;
            text-align: center;
        }
        h3{
            margin-top: 2.5rem;
            color: rgba(238, 241, 19, 0.986);
        }
        span{
            color: rgba(228, 48, 48, 0.795);
     
        }
         .org{
            color: rgb(41, 236, 24);

        }
        .about__wrapper{
            margin-top: 3.5rem;
            line-height: 2rem;
            color: rgb(13, 14, 13);
            opacity: 0.7;
        }
        .skills__wrapper{  
            text-align: center;
            display: flex;
            align-items: center;
            justify-content: center;
            margin-top: 3.5rem;
            flex-wrap: wrap;
        }
        .skills__wrapper ul{
            width: 100%;
            text-align: center;
            list-style-type: none;
            display: flex;
            flex-wrap: wrap;
            justify-content: center;
        }
        li{
            width: 25%;
            color: whitesmoke;
            margin-top: 2rem;
            background: rgba(238, 227, 227, 0.2);
           margin-right: 2rem;
           padding: 0.5rem;
        }
        @media only screen and (min-width: 720px ) {
            li{
                max-width: 15%
            }
        }
    </style>
</head>
<body>
    <div class="main__wrapper">
        <h1>Hie My name is Lopa :)</h1>
        <h3>And this is my first time participating in <span> Hacktoberfest! </span> I am a beginner.</h3>
        <div class="about__wrapper">
            <p>Hacktoberfest is a month-long celebration of open-source software by DigitalOcean 
                that encourages participation in giving back to the open-source community. 
                Developers get involved by completing pull requests, participating in events, 
                and donating to open source projects.</p>
        </div>
        <div class="skills__wrapper">
            <h3 style="margin-bottom: 1rem; color: rgb(5, 50, 110); width: 100%;">My skillset:</h3>

            <ul>
                <li>Javascript</li>
                <li>PHP</li>
                <li>C++</li>
                <li>HTML</li>
            </ul>
        </div>
    </div>

</body>
</html>