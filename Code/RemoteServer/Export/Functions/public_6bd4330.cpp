#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4330);

PROC_DECLARE(0x6bd4330, internal_6bd4330, public_6bd4330);
extern "C" NAKED register_t __cdecl internal_6bd4330()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x64]
        ret 
        UNREACHABLE_TRAP(0x6bd4330)
    }
}
