#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63478f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_63479c8 _public_63479c8
#define public_63479d4 _public_63479d4
#define public_6347b3e _public_6347b3e
#define public_6347bc9 _public_6347bc9

PROC_DECLARE(0x63478f0, internal_63478f0, public_63478f0);
extern "C" NAKED register_t __cdecl internal_63478f0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0xB4]
        fsub dword ptr ds : [esi+0x190]
        fld dword ptr ds : [esi+0xB8]
        fsub dword ptr ds : [esi+0x194]
        fld dword ptr ds : [esi+0xBC]
        fsub dword ptr ds : [esi+0x198]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_63a547c]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_63479d4
        fld dword ptr ds : [esi+0x17C]
        fmul dword ptr ds : [esi+0xF0]
        fld dword ptr ds : [esi+0x178]
        fmul dword ptr ds : [esi+0xEC]
        faddp 
        fld dword ptr ds : [esi+0x174]
        fmul dword ptr ds : [esi+0xE8]
        faddp 
        fld dword ptr ds : [esi+0xE4]
        fmul dword ptr ds : [esi+0x170]
        faddp 
        fld st(0)
        fmul st, st(1)
        fsubr dword ptr ds : [public_63a53d0]
        fadd st(0), st
        fmul dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_63a5478]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_63479d4
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [esi+0x160]
        fadd dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x164]
        fcomp dword ptr ds : [eax+0x88]
        fnstsw ax
        test ah, 0x41
        jne public_63479c8
        mov eax, 3
        pop esi
        add esp, 8
        ret 8
        public_63479c8 : nop
        mov eax, 2
        pop esi
        add esp, 8
        ret 8
        public_63479d4 : nop
        mov ecx, dword ptr ds : [esi+0xE4]
        mov dword ptr ds : [esi+0x170], ecx
        mov edx, dword ptr ds : [esi+0xE8]
        mov dword ptr ds : [esi+0x174], edx
        mov eax, dword ptr ds : [esi+0xEC]
        mov dword ptr ds : [esi+0x178], eax
        mov ecx, dword ptr ds : [esi+0xF0]
        mov dword ptr ds : [esi+0x17C], ecx
        fld dword ptr ds : [esi+0xB8]
        fld dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [esi+0xBC]
        fstp dword ptr ds : [esi+0x190]
        mov eax, edx
        fstp dword ptr ds : [esi+0x194]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x198], eax
        fadd dword ptr ss : [esp+0x10]
        fld st(0)
        fld st(0)
        call public_6391dae
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fst dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        fxch 
        mov dword ptr ds : [esi+0x160], ecx
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x164], edx
        fstp st(0)
        fld dword ptr ds : [esi+0xB4]
        fsub dword ptr ds : [esi+0x1A0]
        fld dword ptr ds : [esi+0xB8]
        fsub dword ptr ds : [esi+0x1A4]
        fld dword ptr ds : [esi+0xBC]
        fsub dword ptr ds : [esi+0x1A8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_63a5474]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_6347b3e
        fld dword ptr ds : [esi+0x18C]
        fmul dword ptr ds : [esi+0xE0]
        fld dword ptr ds : [esi+0x188]
        fmul dword ptr ds : [esi+0xDC]
        faddp 
        fld dword ptr ds : [esi+0x184]
        fmul dword ptr ds : [esi+0xD8]
        faddp 
        fld dword ptr ds : [esi+0x180]
        fmul dword ptr ds : [esi+0xD4]
        faddp 
        fld st(0)
        fmul st, st(1)
        fsubr dword ptr ds : [public_63a53d0]
        fadd st(0), st
        fmul dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_63a5470]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_6347b3e
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x168]
        fadd dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x16C]
        fcomp dword ptr ds : [public_63a546c]
        fnstsw ax
        test ah, 0x41
        jne public_6347bc9
        mov eax, 3
        pop esi
        add esp, 8
        ret 8
        public_6347b3e : nop
        mov eax, dword ptr ds : [esi+0xD4]
        mov dword ptr ds : [esi+0x180], eax
        mov ecx, dword ptr ds : [esi+0xD8]
        mov dword ptr ds : [esi+0x184], ecx
        mov edx, dword ptr ds : [esi+0xDC]
        mov dword ptr ds : [esi+0x188], edx
        mov eax, dword ptr ds : [esi+0xE0]
        mov dword ptr ds : [esi+0x18C], eax
        fld dword ptr ds : [esi+0xB8]
        fld dword ptr ds : [esi+0xB4]
        mov ecx, dword ptr ds : [esi+0xBC]
        fstp dword ptr ds : [esi+0x1A0]
        mov edx, ecx
        fstp dword ptr ds : [esi+0x1A4]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [esi+0x1A8], edx
        fld st(0)
        call public_6391dae
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fxch 
        mov dword ptr ds : [esi+0x168], eax
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x16C], ecx
        fstp st(0)
        public_6347bc9 : nop
        mov eax, 1
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x63478f0)
    }
}

#undef public_63479c8
#undef public_63479d4
#undef public_6347b3e
#undef public_6347bc9
