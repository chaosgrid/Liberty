#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_492410);

#define public_49262f _public_49262f
#define public_492648 _public_492648
#define public_4926ba _public_4926ba
#define public_4926bc _public_4926bc

PROC_DECLARE(0x492410, internal_492410, public_492410);
extern "C" NAKED register_t __cdecl internal_492410()
{
    __asm
    {
        sub esp, 0x30
        fild dword ptr ds : [public_616840]
        push esi
        mov esi, ecx
        fst dword ptr ss : [esp+8]
        fsub dword ptr ds : [esi+0x424]
        fild dword ptr ds : [public_616844]
        fst dword ptr ss : [esp+4]
        fsub dword ptr ds : [esi+0x428]
        fstp dword ptr ss : [esp+0xC]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4926ba
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4926ba
        fcomp dword ptr ds : [esi+0x430]
        fnstsw ax
        test ah, 5
        jp public_4926bc
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x434]
        fnstsw ax
        test ah, 5
        jp public_4926bc
        mov eax, dword ptr ds : [esi+0x7D0]
        cmp eax, 1
        je public_492648
        test eax, eax
        je public_492648
        cmp eax, 2
        jne public_4926bc
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [esi+0xC80]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        lea edx, ss:[esp+0x18]
        lea eax, ds:[esi+0xC80]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        fdivr qword ptr ds : [public_5d3dc8]
        lea eax, ds:[esi+0x418]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], edx
        fmul st, st(2)
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_5c75e0]
        fdivr st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [public_5c75e0]
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [esi+0x41C]
        fmul dword ptr ds : [public_5c75e0]
        fdivr dword ptr ds : [public_5c7500]
        fmul dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [public_5c75e0]
        fld dword ptr ds : [esi+0x3F8]
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], edx
        fstp st(0)
        fxch 
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x20]
        fsubr dword ptr ss : [esp+0x28]
        fxch 
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x470]
        fchs 
        fstp dword ptr ss : [esp+0x20]
        mov ecx, eax
        fsub dword ptr ds : [esi+0x46C]
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], edx
        fsub dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x14]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fdiv dword ptr ds : [esi+0x41C]
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x38]
        fadd st(0), st
        fsub dword ptr ds : [public_5c75dc]
        fmul dword ptr ds : [esi+0x4A8]
        fstp dword ptr ds : [eax]
        fadd st(0), st
        fsub dword ptr ds : [public_5c75dc]
        public_49262f : nop
        fmul dword ptr ds : [esi+0x4AC]
        mov dword ptr ds : [eax+4], 0
        pop esi
        fstp dword ptr ds : [eax+8]
        mov al, 1
        add esp, 0x30
        ret 4
        public_492648 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi+0xC80]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x30]
        lea eax, ds:[esi+0xC80]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x30]
        fdivr qword ptr ds : [public_5d3dc8]
        mov eax, dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fld dword ptr ds : [esi+0x41C]
        fmul dword ptr ds : [public_5c75e0]
        fdivr st, st(1)
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ds : [esi+0x418]
        fmul dword ptr ds : [public_5c75e0]
        fdivr st, st(1)
        fmul dword ptr ds : [esi+0x4A8]
        fstp dword ptr ds : [eax]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        jmp public_49262f
        public_4926ba : nop
        fstp st(0)
        public_4926bc : nop
        xor al, al
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x492410)
    }
}

#undef public_49262f
#undef public_492648
#undef public_4926ba
#undef public_4926bc
