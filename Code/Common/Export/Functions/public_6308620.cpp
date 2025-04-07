#include "Common-PCH.h"


#define public_6308670 _public_6308670
#define public_630869f _public_630869f
#define public_63086b5 _public_63086b5
#define public_63086d0 _public_63086d0
#define public_63086f6 _public_63086f6

PROC_DECLARE(0x6308620, internal_6308620, public_6308620);
extern "C" NAKED register_t __cdecl internal_6308620()
{
    __asm
    {
        fld qword ptr ds : [public_63fcec0]
        sub esp, 0x10
        fcomp qword ptr ds : [public_639c430]
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 0x44
        jp public_63086b5
        lea eax, ss:[esp+4]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308670
        fild dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp+0xC]
        faddp 
        jmp public_630869f
        lea ebx, ds:[ebx]
        public_6308670 : nop
        push edi
        mov edi, 0x100001
        call dword ptr ds : [public_6399110]
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x6308688*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x630868d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push edi
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        pop edi
        public_630869f : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_63086b5 : nop
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_63086d0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_63086f6
        mov edi, edi
        public_63086d0 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a3120 @0x63086d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x63086dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x63086e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        xor ecx, ecx
        public_63086f6 : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        call dword ptr ds : [public_6399104]
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [esi+0x20], 1
        mov byte ptr ds : [esi+0x21], 0
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6308620)
    }
}

#undef public_6308670
#undef public_630869f
#undef public_63086b5
#undef public_63086d0
#undef public_63086f6
