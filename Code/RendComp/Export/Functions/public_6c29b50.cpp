#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22660);

#define public_6c29b7d _public_6c29b7d
#define public_6c29b80 _public_6c29b80

PROC_DECLARE(0x6c29b50, internal_6c29b50, public_6c29b50);
extern "C" NAKED register_t __cdecl internal_6c29b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        cmp eax, 0xFFFFFFFF
        sete cl
        mov dword ptr ss : [esp+8], 0
        dec ecx
        and ecx, eax
        lea eax, ss:[esp+8]
        push eax
        call public_6c22660
        test eax, eax
        je public_6c29b7d
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6c29b80
        public_6c29b7d : nop
        or eax, 0xFFFFFFFF
        public_6c29b80 : nop
        ret 8
        UNREACHABLE_TRAP(0x6c29b50)
    }
}

#undef public_6c29b7d
#undef public_6c29b80
