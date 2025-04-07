#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f07160);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f07160, internal_6f07160, public_6f07160);
extern "C" NAKED register_t __cdecl internal_6f07160()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        mov dword ptr ds : [esi], offset public_6fb8330
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fb43f8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f07160)
    }
}
