#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6d00);
CLANG_FORWARD_PROC_SYMBOL(public_6f47a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ea6d25 _public_6ea6d25

PROC_DECLARE(0x6ea6d00, internal_6ea6d00, public_6ea6d00);
extern "C" NAKED register_t __cdecl internal_6ea6d00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x10], esi
        add ecx, 0xC
        push ecx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ea6d25
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        push esi
        mov ecx, eax
        call public_6f47a30
        public_6ea6d25 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ea6d00)
    }
}

#undef public_6ea6d25
