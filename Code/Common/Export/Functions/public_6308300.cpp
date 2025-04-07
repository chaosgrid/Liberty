#include "Common-PCH.h"


#define public_6308347 _public_6308347
#define public_6308376 _public_6308376
#define public_630838c _public_630838c
#define public_63083a7 _public_63083a7

PROC_DECLARE(0x6308300, internal_6308300, public_6308300);
extern "C" NAKED register_t __cdecl internal_6308300()
{
    __asm
    {
        fld qword ptr ds : [public_63fcec0]
        sub esp, 8
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_630838c
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308347
        fild dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+4], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp]
        faddp 
        jmp public_6308376
        public_6308347 : nop
        push esi
        mov esi, 0x100001
        call dword ptr ds : [public_6399110]
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x630835f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308364*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push esi
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        pop esi
        public_6308376 : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_630838c : nop
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_63083a7
        mov eax, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        add esp, 8
        ret 
        public_63083a7 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a3120 @0x63083ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x63083b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x63083be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        xor edx, edx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6308300)
    }
}

#undef public_6308347
#undef public_6308376
#undef public_630838c
#undef public_63083a7
