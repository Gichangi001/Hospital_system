body {
	margin: 0;
	font-family: Arial, sans-serif;
	font-size: 16px;
	line-height: 1.5;
}

header {
	background-color: #008000	;
	color: #fff;
	padding: 20px;
	display: flex;
	justify-content: space-between;
	align-items: center;
	textalign : center;
}

nav ul {
	list-style: none;
	margin: 0;
	padding: 0;
	display: flex;
}

nav li {
	margin: 0 10px;
}

nav a {
	color: #fff;
	text-decoration: none;
}

nav a:hover {
	color: #ccc;
}

main {
	padding: 20px;
}

section {
	margin-bottom: 20px;
}

section h2 {
	font-size: 24px;
	color: #002147;
}

section p {
	font-size: 16px;
	color: #666;
}

footer {
	background-color: #002147;
	color: #fff;
	padding: 20px;
	text-align: center;
}
/* Gallery Styles */

.gallery {
    display: grid;
    grid-template-columns: repeat(4, 1fr);
    grid-gap: 20px;
  }
  
  .gallery img {
    width: 100%;
    height: auto;
    border-radius: 10px;
    box-shadow: 0 0 10px #002147;
  }
  @media screen and (max-width: 768px) {
    .gallery {
      grid-template-columns: repeat(2, 1fr);
    }
  }

