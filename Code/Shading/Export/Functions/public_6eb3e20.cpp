#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3e20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3e80);

PROC_DECLARE(0x6eb3e20, internal_6eb3e20, public_6eb3e20);
extern "C" NAKED register_t __cdecl internal_6eb3e20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], offset public_6ed13b4
        push 0
        mov dword ptr ds : [esi], offset public_6ed1360
        mov dword ptr ds : [esi+4], offset public_6ed1338
        call public_6eb3e80
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb3e20)
    }
}
