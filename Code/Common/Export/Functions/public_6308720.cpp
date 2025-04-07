#include "Common-PCH.h"


#define public_6308780 _public_6308780
#define public_63087a9 _public_63087a9
#define public_63087bf _public_63087bf
#define public_63087d8 _public_63087d8
#define public_63087fe _public_63087fe
#define public_6308815 _public_6308815
#define public_6308860 _public_6308860
#define public_6308889 _public_6308889
#define public_630889f _public_630889f
#define public_63088b8 _public_63088b8
#define public_63088dd _public_63088dd

PROC_DECLARE(0x6308720, internal_6308720, public_6308720);
extern "C" NAKED register_t __cdecl internal_6308720()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ds : [public_6399110]
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        push edi
        jne public_6308815
        fld qword ptr ds : [public_63fcec0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_63087bf
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308780
        fild dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp+0x14]
        faddp 
        jmp public_63087a9
        lea ecx, ds:[ecx]
        public_6308780 : nop
        mov edi, 0x100001
        call ebp
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x6308793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308798*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push edi
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        public_63087a9 : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_63087bf : nop
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_63087d8
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        jmp public_63087fe
        public_63087d8 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a3120 @0x63087de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x63087e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x63087ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        xor ecx, ecx
        public_63087fe : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        call dword ptr ds : [public_6399104]
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [esi+0x20], 1
        mov byte ptr ds : [esi+0x21], 0
        public_6308815 : nop
        fld qword ptr ds : [public_63fcec0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_630889f
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308860
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp+0xC]
        faddp 
        jmp public_6308889
        lea esp, ss:[esp]
        public_6308860 : nop
        mov edi, 0x100001
        call ebp
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x6308873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308878*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push edi
        call dword ptr ds : [ecx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        public_6308889 : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_630889f : nop
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_63088b8
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_63088dd
/*FIXUP public_63088b8 : nop
        push offset public_63a3120 @0x63088b8*/
  FIXUP public_63088b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x63088bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x63088c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        xor ecx, ecx
        public_63088dd : nop
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ecx
        call dword ptr ds : [public_6399104]
        pop edi
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [esi+0x21], 1
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6308720)
    }
}

#undef public_6308780
#undef public_63087a9
#undef public_63087bf
#undef public_63087d8
#undef public_63087fe
#undef public_6308815
#undef public_6308860
#undef public_6308889
#undef public_630889f
#undef public_63088b8
#undef public_63088dd
