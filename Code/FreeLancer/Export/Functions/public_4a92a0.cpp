#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a92a0);

#define public_4a9313 _public_4a9313
#define public_4a9338 _public_4a9338
#define public_4a933e _public_4a933e
#define public_4a935e _public_4a935e
#define public_4a9362 _public_4a9362
#define public_4a9375 _public_4a9375

PROC_DECLARE(0x4a92a0, internal_4a92a0, public_4a92a0);
extern "C" NAKED register_t __cdecl internal_4a92a0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 4
        push eax
        mov dword ptr ss : [esp+0xC], 0x3F800000
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        jl public_4a9313
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_4a9313
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 3
        push eax
        mov dword ptr ss : [esp+0xC], 0x3F400000
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        jl public_4a9313
        mov eax, dword ptr ss : [esp+8]
        and eax, 0xFFF00000
        cmp eax, 0x1100000
        jae public_4a9313
        mov dword ptr ss : [esp], 0x3F000000
        public_4a9313 : nop
        mov dword ptr ss : [esp+8], 0x3F800000
        call dword ptr ds : [public_5c63f8]
        cmp eax, 0x3E8
        jg public_4a935e
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_4a9338
        fld dword ptr ds : [public_5d2c9c]
        jmp public_4a933e
        public_4a9338 : nop
        fld dword ptr ds : [public_5c8930]
        public_4a933e : nop
        cmp eax, 0x320
        jge public_4a9362
        cmp eax, 0x2BC
        fstp st(0)
        fld dword ptr ds : [public_5d2c9c]
        jge public_4a9362
        fstp st(0)
        fld dword ptr ds : [public_5c94f8]
        jmp public_4a9362
        public_4a935e : nop
        fld dword ptr ss : [esp+8]
        public_4a9362 : nop
        fld dword ptr ss : [esp]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4a9375
        fstp st(0)
        fld dword ptr ss : [esp]
        public_4a9375 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4a92a0)
    }
}

#undef public_4a9313
#undef public_4a9338
#undef public_4a933e
#undef public_4a935e
#undef public_4a9362
#undef public_4a9375
