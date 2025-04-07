#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c89dd _public_62c89dd
#define public_62c89df _public_62c89df
#define public_62c89f8 _public_62c89f8

PROC_DECLARE(0x62c89c0, internal_62c89c0, public_62c89c0);
extern "C" NAKED register_t __cdecl internal_62c89c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        push esi
        lea esi, ds:[ecx+0x30]
        je public_62c89f8
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c89f8
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c89dd
        lea ecx, ds:[eax-8]
        jmp public_62c89df
        public_62c89dd : nop
        xor ecx, ecx
        public_62c89df : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [esp+8]
        jne public_62c89f8
        cmp dword ptr ds : [esi], 0
        je public_62c89f8
        push 0
        mov ecx, esi
        call public_6341610
        public_62c89f8 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c89c0)
    }
}

#undef public_62c89dd
#undef public_62c89df
#undef public_62c89f8
