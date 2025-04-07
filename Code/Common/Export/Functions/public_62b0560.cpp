#include "Common-PCH.h"


#define public_62b0578 _public_62b0578
#define public_62b059a _public_62b059a
#define public_62b059c _public_62b059c
#define public_62b05c7 _public_62b05c7
#define public_62b0605 _public_62b0605
#define public_62b061d _public_62b061d
#define public_62b0661 _public_62b0661

PROC_DECLARE(0x62b0560, internal_62b0560, public_62b0560);
extern "C" NAKED register_t __cdecl internal_62b0560()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x20], 0x20
        jne public_62b0578
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [esi+0x28]
        fstp dword ptr ds : [esi+0x28]
        public_62b0578 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62b0661
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b0661
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62b059a
        lea ecx, ds:[eax-8]
        jmp public_62b059c
        public_62b059a : nop
        xor ecx, ecx
        public_62b059c : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        mov ecx, eax
        mov al, byte ptr ds : [esi+0x44]
        test al, al
        je public_62b05c7
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ds:[esi+0x48]
        push edx
        lea edx, ds:[esi+0x2C]
        push edx
        call dword ptr ds : [eax+0x7C]
        mov byte ptr ds : [esi+0x45], 1
        pop esi
        add esp, 0x18
        ret 8
        public_62b05c7 : nop
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_639e564]
        fnstsw ax
        test ah, 5
        jp public_62b0605
        fld dword ptr ds : [public_639e564]
        fsub dword ptr ds : [esi+0x28]
        fld dword ptr ds : [public_639e564]
        fdivr st, st(1)
        fld dword ptr ds : [public_639e56c]
        fmul st, st(1)
        fmul st, st(1)
        fld dword ptr ds : [public_639e560]
        fmul st, st(3)
        faddp 
        fadd dword ptr ds : [esi+0x6C]
        fstp st(2)
        fstp st(0)
        jmp public_62b061d
        public_62b0605 : nop
        fld dword ptr ds : [public_639e568]
        fadd dword ptr ds : [public_639e564]
        fsub dword ptr ds : [esi+0x28]
        fdiv dword ptr ds : [public_639e568]
        fmul dword ptr ds : [esi+0x6C]
        public_62b061d : nop
        fld st(0)
        mov eax, dword ptr ds : [ecx]
        fmul dword ptr ds : [esi+0x38]
        push 0
        fld st(1)
        add esi, 0x48
        fmul dword ptr ds : [esi-0xC]
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [esi-8]
        fstp dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi-0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi-0x18]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi-0x14]
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [eax+0x7C]
        public_62b0661 : nop
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x62b0560)
    }
}

#undef public_62b0578
#undef public_62b059a
#undef public_62b059c
#undef public_62b05c7
#undef public_62b0605
#undef public_62b061d
#undef public_62b0661
