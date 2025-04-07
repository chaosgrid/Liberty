#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf4d20, internal_6bf4d20, public_6bf4d20);
extern "C" NAKED register_t __cdecl internal_6bf4d20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e07c]
        mov dword ptr ds : [public_6c13d68], eax
        ret 
        UNREACHABLE_TRAP(0x6bf4d20)
    }
}
