#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4320);

PROC_DECLARE(0x6bd4320, internal_6bd4320, public_6bd4320);
extern "C" NAKED register_t __cdecl internal_6bd4320()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x60]
        ret 
        UNREACHABLE_TRAP(0x6bd4320)
    }
}
