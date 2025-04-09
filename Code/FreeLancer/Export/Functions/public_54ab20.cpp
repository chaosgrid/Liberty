#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_554e80);

PROC_DECLARE(0x54ab20, internal_54ab20, public_54ab20);
extern "C" NAKED register_t __cdecl internal_54ab20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_554e80
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x34]
        call dword ptr ds : [public_5c6b40]
        pop esi
        jmp public_51fbc0
        UNREACHABLE_TRAP(0x54ab20)
    }
}
