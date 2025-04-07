#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c24aa0);

#define public_6c214fb _public_6c214fb
#define public_6c214fe _public_6c214fe

PROC_DECLARE(0x6c214d0, internal_6c214d0, public_6c214d0);
extern "C" NAKED register_t __cdecl internal_6c214d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c214fb
        test ecx, ecx
        je public_6c214fb
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ss : [esp+0xC], 0
        call public_6c24aa0
        test eax, eax
        jl public_6c214fb
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6c214fe
        public_6c214fb : nop
        or eax, 0xFFFFFFFF
        public_6c214fe : nop
        ret 8
        UNREACHABLE_TRAP(0x6c214d0)
    }
}

#undef public_6c214fb
#undef public_6c214fe
