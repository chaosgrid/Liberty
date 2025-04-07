#include "ReadFile-PCH.h"


#define public_6b72ead _public_6b72ead
#define public_6b72eb5 _public_6b72eb5
#define public_6b72ec7 _public_6b72ec7
#define public_6b72ecd _public_6b72ecd
#define public_6b72ed3 _public_6b72ed3
#define public_6b72ee2 _public_6b72ee2

PROC_DECLARE(0x6b72e90, internal_6b72e90, public_6b72e90);
extern "C" NAKED register_t __cdecl internal_6b72e90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        test edx, edx
        jne public_6b72eb5
        mov ecx, dword ptr ds : [esi+0x238]
        test ecx, ecx
        je public_6b72ead
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_6b72ed3
        public_6b72ead : nop
        mov eax, dword ptr ds : [esi+0x23C]
        jmp public_6b72ed3
        public_6b72eb5 : nop
        mov eax, dword ptr ds : [esi+0x230]
        test eax, eax
        je public_6b72ec7
        mov ecx, dword ptr ds : [eax+0x238]
        jmp public_6b72ecd
        public_6b72ec7 : nop
        mov ecx, dword ptr ds : [esi+0x238]
        public_6b72ecd : nop
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x20]
        public_6b72ed3 : nop
        test eax, eax
        je public_6b72ee2
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        pop esi
        ret 0xC
        public_6b72ee2 : nop
        mov dword ptr ds : [esi+0x1C], 5
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b72e90)
    }
}

#undef public_6b72ead
#undef public_6b72eb5
#undef public_6b72ec7
#undef public_6b72ecd
#undef public_6b72ed3
#undef public_6b72ee2
