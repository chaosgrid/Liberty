#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9f10, internal_6bf9f10, public_6bf9f10);
extern "C" NAKED register_t __cdecl internal_6bf9f10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2ac]
        mov dword ptr ds : [public_6c13f28], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9f10)
    }
}
