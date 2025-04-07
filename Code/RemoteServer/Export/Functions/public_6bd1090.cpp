#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1090, internal_6bd1090, public_6bd1090);
extern "C" NAKED register_t __cdecl internal_6bd1090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c137bc]
        ret 
        UNREACHABLE_TRAP(0x6bd1090)
    }
}
