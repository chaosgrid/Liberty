#include "Common-PCH.h"


#define public_6308575 _public_6308575
#define public_63085a4 _public_63085a4
#define public_63085ba _public_63085ba
#define public_63085d3 _public_63085d3
#define public_63085f9 _public_63085f9
#define public_6308610 _public_6308610

PROC_DECLARE(0x6308520, internal_6308520, public_6308520);
extern "C" NAKED register_t __cdecl internal_6308520()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        jne public_6308610
        fld qword ptr ds : [public_63fcec0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_63085ba
        lea eax, ss:[esp+4]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308575
        fild dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp+0xC]
        faddp 
        jmp public_63085a4
        public_6308575 : nop
        push edi
        mov edi, 0x100001
        call dword ptr ds : [public_6399110]
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x137
/*FIXUP push offset public_63a30f8 @0x630858d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308592*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push edi
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        pop edi
        public_63085a4 : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_63085ba : nop
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_63085d3
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_63085f9
        public_63085d3 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a3120 @0x63085d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x63085e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x63085ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        xor ecx, ecx
        public_63085f9 : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        call dword ptr ds : [public_6399104]
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [esi+0x20], 1
        mov byte ptr ds : [esi+0x21], 0
        public_6308610 : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6308520)
    }
}

#undef public_6308575
#undef public_63085a4
#undef public_63085ba
#undef public_63085d3
#undef public_63085f9
#undef public_6308610
