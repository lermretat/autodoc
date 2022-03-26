/**
 * Esta funcion registra los datos del usuario en una BD
 * @param {String} nombre El nombre del usuario     
 * @param {Number} edad La edad del usuario
 * @param {Boolean} estudiante Si es estudiante
 * @param {Array} datos Datos adicionales
 * @returns {Boolean}
 */
const registrarUsuario = (nombre, edad, estudiante, datos) => {
    console.log('... Registramos los datos del usuario');
    return true;
}

export {registrarUsuario}