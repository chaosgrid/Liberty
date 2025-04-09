#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536170);

#define public_52b2d3 _public_52b2d3

PROC_DECLARE(0x52b2c0, internal_52b2c0, public_52b2c0);
extern "C" NAKED register_t __cdecl internal_52b2c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_52b2d3
        push eax
        call public_536170
        add esp, 4
        public_52b2d3 : nop
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [public_5c6850]
        UNREACHABLE_TRAP(0x52b2c0)
    }
}

#undef public_52b2d3
