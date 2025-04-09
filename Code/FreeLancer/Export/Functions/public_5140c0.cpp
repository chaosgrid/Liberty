#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5140c0);

#define public_5140e7 _public_5140e7
#define public_5140e9 _public_5140e9
#define public_5140ff _public_5140ff
#define public_514107 _public_514107

PROC_DECLARE(0x5140c0, internal_5140c0, public_5140c0);
extern "C" NAKED register_t __cdecl internal_5140c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_5140e7
        add eax, 0xC
        test eax, eax
        je public_5140e7
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5140e7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_5140e9
        public_5140e7 : nop
        xor eax, eax
        public_5140e9 : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        jne public_5140ff
        ret 
        public_5140ff : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_514107
        ret 
        public_514107 : nop
        mov eax, dword ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x5140c0)
    }
}

#undef public_5140e7
#undef public_5140e9
#undef public_5140ff
#undef public_514107
