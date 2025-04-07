#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b320);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d140);

PROC_DECLARE(0x6f4b320, internal_6f4b320, public_6f4b320);
/* CHUNK of public_6f502a0 */
extern "C" NAKED register_t __cdecl internal_6f4b320()
{
    __asm
    {
        push 3
        call public_6f4aff0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        sub ecx, 0x30
        push ecx
        call public_6f4d140
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4b320)
    }
}
