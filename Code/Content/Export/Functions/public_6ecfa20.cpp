#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa20);

PROC_DECLARE(0x6ecfa20, internal_6ecfa20, public_6ecfa20);
extern "C" NAKED register_t __cdecl internal_6ecfa20()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x6ecfa20)
    }
}
