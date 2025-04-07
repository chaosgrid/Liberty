#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66254d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66254ee _public_66254ee

PROC_DECLARE(0x66254d0, internal_66254d0, public_66254d0);
extern "C" NAKED register_t __cdecl internal_66254d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        test al, 1
        mov byte ptr ds : [esi], 0
        mov dword ptr ds : [esi+0x30], 0
        je public_66254ee
        push esi
        call public_66281d0
        add esp, 4
        public_66254ee : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66254d0)
    }
}

#undef public_66254ee
