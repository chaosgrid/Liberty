#include "Common-PCH.h"


#define public_63082b7 _public_63082b7
#define public_63082e6 _public_63082e6
#define public_63082fc _public_63082fc

PROC_DECLARE(0x6308270, internal_6308270, public_6308270);
extern "C" NAKED register_t __cdecl internal_6308270()
{
    __asm
    {
        fld qword ptr ds : [public_63fcec0]
        sub esp, 8
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_63082fc
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_63082b7
        fild dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+4], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp]
        faddp 
        jmp public_63082e6
        public_63082b7 : nop
        push esi
        mov esi, 0x100001
        call dword ptr ds : [public_6399110]
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x63082cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x63082d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push esi
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        pop esi
        public_63082e6 : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_63082fc : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6308270)
    }
}

#undef public_63082b7
#undef public_63082e6
#undef public_63082fc
