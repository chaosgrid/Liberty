#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6370d70);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380d90);

#define public_6370db0 _public_6370db0
#define public_6370dc4 _public_6370dc4
#define public_6370dd1 _public_6370dd1
#define public_6370dd6 _public_6370dd6
#define public_6370e12 _public_6370e12
#define public_6370e2f _public_6370e2f
#define public_6370e5a _public_6370e5a
#define public_6370e5e _public_6370e5e
#define public_6370e80 _public_6370e80
#define public_6370edc _public_6370edc
#define public_6370eea _public_6370eea
#define public_6370f49 _public_6370f49
#define public_6370f51 _public_6370f51
#define public_6370f66 _public_6370f66
#define public_6370fd7 _public_6370fd7
#define public_637103d _public_637103d
#define public_637105e _public_637105e
#define public_637107a _public_637107a
#define public_6371083 _public_6371083
#define public_6371098 _public_6371098
#define public_63710b4 _public_63710b4
#define public_63710d2 _public_63710d2
#define public_637113f _public_637113f
#define public_637118a _public_637118a
#define public_6371192 _public_6371192
#define public_63711a2 _public_63711a2
#define public_63711af _public_63711af
#define public_63711ca _public_63711ca
#define public_63711d7 _public_63711d7
#define public_63711f9 _public_63711f9

PROC_DECLARE(0x6370d70, internal_6370d70, public_6370d70);
extern "C" NAKED register_t __cdecl internal_6370d70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov edi, 1
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x20], ebx
        jl public_6370db0
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63ef944 @0x6370da1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef944
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6370db0 : nop
        cmp dword ptr ds : [public_658b1d4], ebx
        jne public_6370dc4
        mov dword ptr ds : [public_658ba90], ebx
        mov dword ptr ds : [public_658bae0], ebx
        public_6370dc4 : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp esi, ebx
        je public_63711f9
        jmp public_6370dd6
        public_6370dd1 : nop
        mov edi, 1
        public_6370dd6 : nop
        cmp dword ptr ds : [esi+0x30], ebx
        je public_63711d7
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x80
        je public_6370e12
/*FIXUP push offset public_63eedfc @0x6370de7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eedfc
        call public_637f410
        mov ecx, dword ptr ds : [esi+0x4C]
        add esp, 4
        push ecx
/*FIXUP push offset public_63ef900 @0x6370df8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef900
        call public_6356960
        add esp, 8
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], edi
        jmp public_63711ca
        public_6370e12 : nop
        cmp dword ptr ds : [public_658b0a8], ebx
        je public_6370e2f
        cmp dword ptr ds : [public_658b674], ebx
        je public_637105e
        test ah, 0x10
        je public_637105e
        public_6370e2f : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], edi
        je public_63711ca
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_63711ca
        mov eax, 4
        jmp public_6370e5e
        public_6370e5a : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6370e5e : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov ebx, dword ptr ds : [edx+eax]
        add eax, 4
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 0x10
        jne public_6370e80
        mov dword ptr ss : [esp+0x1C], 0
        jmp public_637103d
        public_6370e80 : nop
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x28]
        push eax
        push edi
        push ecx
        call public_637fd60
        fld qword ptr ds : [public_658b6a0]
        fchs 
        add esp, 0xC
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_637103d
        cmp dword ptr ss : [ebp+0xC], 1
        jne public_6370eea
/*FIXUP push offset public_63ef8e4 @0x6370eaf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef8e4
        call public_637f410
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 4
        test eax, eax
        je public_6370edc
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        push edx
        push eax
/*FIXUP push offset public_63ef89c @0x6370ecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef89c
        call public_6356960
        add esp, 0xC
        public_6370edc : nop
        push 0
        push 0
        push 2
        call public_6378600
        add esp, 0xC
        public_6370eea : nop
        fld qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_658b6a0]
        fnstsw ax
        test ah, 0x41
        jne public_6370f66
        mov eax, dword ptr ds : [public_658ba90]
        inc eax
/*FIXUP push offset public_63ef88c @0x6370f01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef88c
        mov dword ptr ds : [public_658ba90], eax
        call public_637f410
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 4
        test eax, eax
        je public_6370f51
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx+0x14]
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        push edx
        and eax, 0xFFFFFF
        push eax
        push ecx
        call public_6370570
        mov edx, dword ptr ds : [edi+0x4C]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63ef83c @0x6370f44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef83c
        public_6370f49 : nop
        call public_6356960
        add esp, 0x1C
        public_6370f51 : nop
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0xC], 1
        jmp public_637103d
        public_6370f66 : nop
        mov eax, dword ptr ds : [public_658b674]
        test eax, eax
        je public_6370fd7
        fld qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x41
        jne public_637103d
        mov eax, dword ptr ds : [public_658bae0]
        inc eax
/*FIXUP push offset public_63ef82c @0x6370f8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef82c
        mov dword ptr ds : [public_658bae0], eax
        call public_637f410
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 4
        test eax, eax
        je public_6370f51
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx+0x14]
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        push edx
        and eax, 0xFFFFFF
        push eax
        push ecx
        call public_6370570
        mov edx, dword ptr ds : [edi+0x4C]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63ef7d0 @0x6370fcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef7d0
        jmp public_6370f49
        public_6370fd7 : nop
        mov eax, dword ptr ds : [public_658bae0]
        inc eax
/*FIXUP push offset public_63ef82c @0x6370fdd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef82c
        mov dword ptr ds : [public_658bae0], eax
        call public_637f410
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        test eax, eax
        je public_637103d
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        push edx
        mov edx, dword ptr ds : [ebx+8]
        push eax
        and ecx, 0xFFFFFF
        push ecx
        push edx
        call public_6370570
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [edi+0x4C]
        push eax
        push ecx
/*FIXUP push offset public_63ef770 @0x637102e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef770
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x24
        public_637103d : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [eax]
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x18], eax
        jne public_6370e5a
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_63711ca
        public_637105e : nop
        cmp dword ptr ds : [public_658b86c], 2
        jne public_6371083
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jne public_637107a
        push esi
        call public_6380d90
        add esp, 4
        mov dword ptr ds : [esi+0x28], eax
        public_637107a : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6371098
        public_6371083 : nop
        push esi
        call public_6380d90
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], 1
        public_6371098 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_63711af
        mov edi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test edi, edi
        je public_63711af
        public_63710b4 : nop
        mov eax, dword ptr ds : [public_658b674]
        test eax, eax
        je public_63710d2
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, 0x1000
        test eax, ecx
        je public_63710d2
        test dword ptr ds : [edi+0x50], eax
        jne public_63711a2
        public_63710d2 : nop
        mov ecx, dword ptr ds : [public_658bb60]
        mov edx, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ds : [public_658bb60], ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        push edx
        call public_637fd60
        fld qword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_658b6a0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_637113f
        mov eax, dword ptr ds : [public_658ba90]
        inc eax
/*FIXUP push offset public_63ef88c @0x6371109*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef88c
        mov dword ptr ds : [public_658ba90], eax
        call public_637f410
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 4
        test eax, eax
        je public_6371192
        mov eax, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push ecx
        push eax
        push ecx
/*FIXUP push offset public_63ef71c @0x6371138*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef71c
        jmp public_637118a
        public_637113f : nop
        fld qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        jne public_63711a2
        mov eax, dword ptr ds : [public_658bae0]
        inc eax
/*FIXUP push offset public_63ef82c @0x6371156*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef82c
        mov dword ptr ds : [public_658bae0], eax
        call public_637f410
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 4
        test eax, eax
        je public_6371192
        mov eax, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push ecx
        push eax
        push ecx
/*FIXUP push offset public_63ef6bc @0x6371185*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef6bc
        public_637118a : nop
        call public_6356960
        add esp, 0x1C
        public_6371192 : nop
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0xC], 1
        public_63711a2 : nop
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_63710b4
        public_63711af : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_63711ca
        mov eax, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        call public_6377fe0
        add esp, 8
        public_63711ca : nop
        mov esi, dword ptr ds : [esi+0x30]
        xor ebx, ebx
        cmp esi, ebx
        jne public_6370dd1
        public_63711d7 : nop
        cmp dword ptr ss : [esp+0xC], ebx
        je public_63711f9
        cmp dword ptr ds : [public_658b05c], ebx
        jne public_63711f9
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push 3
        call public_637e2e0
        add esp, 0xC
        public_63711f9 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6370d70)
    }
}

#undef public_6370db0
#undef public_6370dc4
#undef public_6370dd1
#undef public_6370dd6
#undef public_6370e12
#undef public_6370e2f
#undef public_6370e5a
#undef public_6370e5e
#undef public_6370e80
#undef public_6370edc
#undef public_6370eea
#undef public_6370f49
#undef public_6370f51
#undef public_6370f66
#undef public_6370fd7
#undef public_637103d
#undef public_637105e
#undef public_637107a
#undef public_6371083
#undef public_6371098
#undef public_63710b4
#undef public_63710d2
#undef public_637113f
#undef public_637118a
#undef public_6371192
#undef public_63711a2
#undef public_63711af
#undef public_63711ca
#undef public_63711d7
#undef public_63711f9
