void *readThread(void *arg)
{
    int valread;
    int new_socket = *(int*)arg;
    char* buffer = (char*)arg;
    while(!(buffer[0] == 'q' & buffer[1] == 'q'))
    {
        valread = read( new_socket, buffer, 1024);
            if(buffer[0] == 'q' & buffer[1] == 'q')
            { 
                send(new_socket , buffer , strlen(buffer) , 0 );
                break;
            }
            std::cout << "\t";
        fputs(buffer,stdout);
        for(int i = 0; i<1024; i++)
            buffer[i] = 0;
    }
}

void *writeThread(void *arg)
{
    int valread;
    int new_socket = *(int*)arg;
    char* hello = (char*)arg;
    while(!(hello[0] == 'q' & hello[1] == 'q'))
    {
        fgets(hello,sizeof(hello), stdin);
        send(new_socket , hello , strlen(hello) , 0 );
            if(hello[0] == 'q' & hello[1] == 'q') break;
        for(int i = 0; i<1024; i++)
            hello[i] = 0;
    }
}