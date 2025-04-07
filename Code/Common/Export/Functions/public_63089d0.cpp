#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7750);
CLANG_FORWARD_PROC_SYMBOL(public_6307f90);
CLANG_FORWARD_PROC_SYMBOL(public_6308200);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6308a33 _public_6308a33
#define public_6308a6a _public_6308a6a
#define public_6308a80 _public_6308a80
#define public_6308aa0 _public_6308aa0
#define public_6308ad2 _public_6308ad2
#define public_6308b20 _public_6308b20
#define public_6308b4c _public_6308b4c
#define public_6308b90 _public_6308b90
#define public_6308bc8 _public_6308bc8
#define public_6308bde _public_6308bde
#define public_6308bf7 _public_6308bf7
#define public_6308c2a _public_6308c2a
#define public_6308ca8 _public_6308ca8
#define public_6308cb5 _public_6308cb5

PROC_DECLARE(0x63089d0, internal_63089d0, public_63089d0);
extern "C" NAKED register_t __cdecl internal_63089d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ds : [public_6399110]
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        push edi
        jne public_6308b4c
        fld qword ptr ds : [public_63fcec0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_6308a80
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308a33
        fild dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp+0x10]
        faddp 
        jmp public_6308a6a
        public_6308a33 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x14]
        call public_62b7750
        mov edi, eax
        call ebx
        mov edx, dword ptr ds : [edi]
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x137
/*FIXUP push offset public_63a30f8 @0x6308a54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308a59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push edx
        call dword ptr ds : [eax]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        public_6308a6a : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_6308a80 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_6308aa0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        jmp public_6308ad2
        lea esp, ss:[esp]
        public_6308aa0 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_62b7750
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a3120 @0x6308ab7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x6308abe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_639b47c @0x6308ac3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        xor ecx, ecx
        public_6308ad2 : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        call dword ptr ds : [public_6399104]
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [esi+0x20], 1
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        mov byte ptr ds : [esi+0x21], 0
        jne public_6308b4c
        fld qword ptr ds : [public_63fcec0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_6308b20
        call public_6308200
        fstp qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv qword ptr ds : [public_63fcec0]
        fstp qword ptr ds : [public_63fcec8]
        public_6308b20 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6307f90
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 4
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6399104]
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [esi+0x20], 1
        mov byte ptr ds : [esi+0x21], 0
        public_6308b4c : nop
        fld qword ptr ds : [public_63fcec0]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jp public_6308bde
        lea ecx, ss:[esp+0x20]
        push ecx
        call dword ptr ds : [public_63990fc]
        test eax, eax
        je public_6308b90
        fild dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], 0
        fmul qword ptr ds : [public_63a31c0]
        fild qword ptr ss : [esp+0x18]
        faddp 
        jmp public_6308bc8
        public_6308b90 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_62b7750
        mov edi, eax
        call ebx
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        mov eax, dword ptr ds : [edi]
        push 0x137
/*FIXUP push offset public_63a30f8 @0x6308bb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_63a3170 @0x6308bb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3170
        push eax
        call dword ptr ds : [ecx]
        fld qword ptr ds : [public_639c430]
        add esp, 0x14
        public_6308bc8 : nop
        fst qword ptr ds : [public_63fcec0]
        fld qword ptr ds : [public_6399410]
        fdiv st, st(1)
        fstp qword ptr ds : [public_63fcec8]
        fstp st(0)
        public_6308bde : nop
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_6308bf7
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        jmp public_6308c2a
        public_6308bf7 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x14]
        call public_62b7750
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a3120 @0x6308c0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x6308c16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
/*FIXUP push offset public_639b47c @0x6308c1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        xor ecx, ecx
        public_6308c2a : nop
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ecx
        call dword ptr ds : [public_6399104]
        mov edi, eax
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        mov dword ptr ds : [esi+0x1C], edi
        mov byte ptr ds : [esi+0x21], 1
        je public_6308ca8
        mov ebx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+0x14]
        sub edx, ebx
        sbb eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x20], edx
        fild qword ptr ss : [esp+0x20]
        mov ebx, edi
        sub ebx, eax
        fmul qword ptr ds : [public_63fcec8]
        fst qword ptr ds : [esi]
        fmul qword ptr ds : [public_63a31c8]
        call public_6391dae
        mov ecx, ebx
        neg ecx
        sub ecx, eax
        mov eax, ecx
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 0x32
        jle public_6308cb5
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], 0
        fild qword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_639c9f0]
        fstp qword ptr ds : [esi]
        jmp public_6308cb5
        public_6308ca8 : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        public_6308cb5 : nop
        mov edx, dword ptr ds : [esi+0x10]
        fld qword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x18], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [esi+0x20], 1
        mov byte ptr ds : [esi+0x21], 0
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63089d0)
    }
}

#undef public_6308a33
#undef public_6308a6a
#undef public_6308a80
#undef public_6308aa0
#undef public_6308ad2
#undef public_6308b20
#undef public_6308b4c
#undef public_6308b90
#undef public_6308bc8
#undef public_6308bde
#undef public_6308bf7
#undef public_6308c2a
#undef public_6308ca8
#undef public_6308cb5
