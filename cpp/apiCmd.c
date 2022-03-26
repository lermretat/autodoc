/**
  ******************************************************************************
  * @file    apiCmd.c
  * @author  Edgardo de Avila 
  * @version V1.0
  * @date    26-03-2022
  * @brief   Funciones de utilidad para el manejo de comandos recibidos desde 
  *			 el servicio web
  *
  *
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT </center></h2>
  *
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define MAX_NRO_CMD 24 /*!< Numero maximo de comandos que se pueden encolar */
/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private const -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/

/* Public functions ----------------------------------------------------------*/
/**
  * @brief  Transmorma un comando en string
  * @param  dest: apuntador donde se almacenara en forma de string
  * @param  len: longitud buffer de destino
  * @param  comando: comando a transformar
  * @retval la longitud del string
  *         
  */
int cmd2str(char* dest, size_t len, cmd_t* comando)
{

}


/**
  * @brief  Extrae una respuesta asociada al comando
  * @param  respuesta: donde se almacenara la respuesta
  * @param  len: longitud buffer de destino
  * @param  comando: comando asociado
  * @retval 1 en caso de que tenga respuesta asoaciada, 0 en caso contrario
  *         
  */
int extraerRta(char* respuesta, size_t len, cmd_t* comando)
{

}



/* Private functions ---------------------------------------------------------*/
