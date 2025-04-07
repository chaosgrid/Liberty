#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c7893 _public_62c7893
#define public_62c7895 _public_62c7895
#define public_62c78ae _public_62c78ae

PROC_DECLARE(0x62c7870, internal_62c7870, public_62c7870);
extern "C" NAKED register_t __cdecl internal_62c7870()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2A0]
        test eax, eax
        push esi
        lea esi, ds:[ecx+0x2A0]
        je public_62c78ae
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c78ae
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c7893
        lea ecx, ds:[eax-8]
        jmp public_62c7895
        public_62c7893 : nop
        xor ecx, ecx
        public_62c7895 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [esp+8]
        jne public_62c78ae
        cmp dword ptr ds : [esi], 0
        je public_62c78ae
        push 0
        mov ecx, esi
        call public_6341610
        public_62c78ae : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c7870)
    }
}

#undef public_62c7893
#undef public_62c7895
#undef public_62c78ae
