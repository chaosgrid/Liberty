#include "Common-PCH.h"


#define public_6308437 _public_6308437
#define public_6308466 _public_6308466
#define public_630847c _public_630847c
#define public_63084b0 _public_63084b0

PROC_DECLARE(0x63083f0, internal_63083f0, public_63083f0);
extern "C" NAKED register_t __cdecl internal_63083f0()
{
    __asm
    {
        fld qword ptr ds : [public_63fcec0]
        sub esp, 0x10
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_630847c
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308437
        fild dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp+8]
        faddp 
        jmp public_6308466
        public_6308437 : nop
        push esi
        mov esi, 0x100001
        call dword ptr ds : [public_6399110]
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x630844f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308454*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push esi
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        pop esi
        public_6308466 : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_630847c : nop
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_63084b0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+4], edx
        fild qword ptr ss : [esp]
        fmul qword ptr ds : [public_63fcec8]
        add esp, 0x10
        ret 
        lea esp, ss:[esp]
/*FIXUP public_63084b0 : nop
        push offset public_63a3120 @0x63084b0*/
  FIXUP public_63084b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x63084b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x63084c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        fild qword ptr ss : [esp+0x14]
        add esp, 0x14
        fmul qword ptr ds : [public_63fcec8]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63083f0)
    }
}

#undef public_6308437
#undef public_6308466
#undef public_630847c
#undef public_63084b0
