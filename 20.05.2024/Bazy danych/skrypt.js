console.log("zestosteron fest test")

function oblicz() {
    
    let paliwo = parseFloat(document.getElementById("paliwo").value);
    let dystans = parseFloat(document.getElementById("dystans").value);
    let cena = parseFloat(document.getElementById("cena").value);

    let wynikCalc = document.getElementById("wynikCalc");

    let content = `Paliwo: ${paliwo} [litry] \n dystans: ${dystans} [km] \n cena: ${cena} [zł]\n`;

    let wynik = (paliwo * dystans * cena) / 100;

    wynikCalc.innerHTML = content + "Wynik: " + wynik;
}