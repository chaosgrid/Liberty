#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1210, internal_6bd1210, public_6bd1210);
extern "C" NAKED register_t __cdecl internal_6bd1210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b128]
        mov dword ptr ds : [public_6c138ec], eax
        ret 
        UNREACHABLE_TRAP(0x6bd1210)
    }
}
