#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce9550);

#define public_6ce9574 _public_6ce9574
#define public_6ce9576 _public_6ce9576
#define public_6ce9602 _public_6ce9602
#define public_6ce9619 _public_6ce9619
#define public_6ce9630 _public_6ce9630
#define public_6ce9643 _public_6ce9643
#define public_6ce9679 _public_6ce9679

PROC_DECLARE(0x6ce9550, internal_6ce9550, public_6ce9550);
extern "C" NAKED register_t __cdecl internal_6ce9550()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push esi
        push edi
        je public_6ce9574
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6ce9574
        mov edi, eax
        jmp public_6ce9576
        public_6ce9574 : nop
        xor edi, edi
        public_6ce9576 : nop
        mov esi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [esi+0x18]
        fld dword ptr ds : [edx+4]
        lea eax, ss:[esp+0x1C]
        fld st(0)
        push eax
        fmul st, st(1)
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6d655d4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6d655d0]
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_6d64274]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+0x24]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6ce9602
        fstp st(0)
        fld dword ptr ds : [public_6d65188]
        public_6ce9602 : nop
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_6ce9619
        fstp st(0)
        mov dword ptr ss : [esp+0x2C], 3
        jmp public_6ce9643
        public_6ce9619 : nop
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6ce9630
        fstp st(0)
        mov dword ptr ss : [esp+0x2C], 2
        jmp public_6ce9643
        public_6ce9630 : nop
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ce9679
        mov dword ptr ss : [esp+0x2C], 1
        public_6ce9643 : nop
        fild dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, edi
        fmul dword ptr ds : [public_6d655cc]
        fmul dword ptr ds : [edx+0xC]
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [public_6d6419c]
        fld dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx]
        push ecx
        push ecx
        mov ecx, ebx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x1B0]
        public_6ce9679 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x6ce9550)
    }
}

#undef public_6ce9574
#undef public_6ce9576
#undef public_6ce9602
#undef public_6ce9619
#undef public_6ce9630
#undef public_6ce9643
#undef public_6ce9679
