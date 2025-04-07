#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6370d70);
CLANG_FORWARD_PROC_SYMBOL(public_6371ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6372060);
CLANG_FORWARD_PROC_SYMBOL(public_6372f10);
CLANG_FORWARD_PROC_SYMBOL(public_6374470);
CLANG_FORWARD_PROC_SYMBOL(public_6377cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380c50);
CLANG_FORWARD_PROC_SYMBOL(public_6380cf0);
CLANG_FORWARD_PROC_SYMBOL(public_63812e0);
CLANG_FORWARD_PROC_SYMBOL(public_6383ee0);

#define public_6372f96 _public_6372f96
#define public_6372fb8 _public_6372fb8
#define public_6372fc2 _public_6372fc2
#define public_6372fd9 _public_6372fd9
#define public_6372fe3 _public_6372fe3
#define public_6373004 _public_6373004
#define public_6373021 _public_6373021
#define public_6373032 _public_6373032
#define public_637305d _public_637305d
#define public_637306b _public_637306b
#define public_63730ae _public_63730ae
#define public_63730bb _public_63730bb
#define public_63730ce _public_63730ce
#define public_63730f1 _public_63730f1
#define public_63730f3 _public_63730f3
#define public_63730fc _public_63730fc
#define public_6373107 _public_6373107
#define public_637317e _public_637317e
#define public_63731c9 _public_63731c9
#define public_63731ee _public_63731ee
#define public_63731fb _public_63731fb

PROC_DECLARE(0x6372f10, internal_6372f10, public_6372f10);
extern "C" NAKED register_t __cdecl internal_6372f10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        push esi
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0x7FEFFFFF
        call public_6372060
        push 0
        call public_6374470
        mov eax, dword ptr ds : [public_658b810]
        push esi
        mov dword ptr ds : [public_658b818], eax
        call public_6380cf0
        mov esi, dword ptr ds : [public_658b810]
        push esi
        mov dword ptr ds : [public_658b800], eax
        call public_63812e0
        mov eax, dword ptr ds : [public_658be28]
        mov edx, dword ptr ds : [public_658b800]
        lea ecx, ss:[esp+0x20]
        push ecx
        inc eax
        push esi
        push edx
        mov dword ptr ds : [public_658be28], eax
        call public_637fd60
        fld qword ptr ss : [esp+0x2C]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0x1C
        fnstsw ax
        test ah, 0x41
        jne public_6372fb8
        mov eax, dword ptr ds : [public_658b810]
        test eax, eax
        je public_6372fb8
        public_6372f96 : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_6372fb8
        mov ecx, dword ptr ds : [eax+0x50]
        mov edx, ecx
        not edx
        xor edx, ecx
        and edx, 0x800
        xor edx, ecx
        mov dword ptr ds : [eax+0x50], edx
        mov eax, dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_6372f96
        public_6372fb8 : nop
        mov esi, dword ptr ds : [public_658b810]
        test esi, esi
        je public_6372fd9
        public_6372fc2 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6372fd9
        push esi
        call public_63812e0
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 4
        test esi, esi
        jne public_6372fc2
        public_6372fd9 : nop
        mov esi, dword ptr ds : [public_658b810]
        test esi, esi
        je public_637305d
        public_6372fe3 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_637305d
        push 1
        push 0
        push esi
        call public_636f2c0
        add esp, 0xC
        test eax, eax
        je public_6373004
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6372fe3
        jmp public_637305d
        public_6373004 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_6373021
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f0c10 @0x6373012*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0c10
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6373021 : nop
        and dword ptr ds : [esi+0x50], 0xFFFF7FFF
        mov esi, dword ptr ds : [public_658b810]
        test esi, esi
        je public_637305d
        public_6373032 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_637305d
        mov eax, dword ptr ds : [esi+0x50]
        mov ecx, eax
        not ecx
        xor ecx, eax
        and ecx, 0x800
        xor ecx, eax
        push esi
        mov dword ptr ds : [esi+0x50], ecx
        call public_6383ee0
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 4
        test esi, esi
        jne public_6373032
        public_637305d : nop
        mov edi, dword ptr ds : [public_658b810]
        test edi, edi
        je public_637317e
        public_637306b : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_6373107
        push 0
        push 0
        push edi
        call public_636f2c0
        add esp, 0xC
        test eax, eax
        jne public_63730bb
/*FIXUP push offset public_63f0be0 @0x6373087*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0be0
        call public_637f410
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 4
        test eax, eax
        je public_63730ae
        mov edx, dword ptr ds : [edi+0x4C]
        push edx
/*FIXUP push offset public_63f0b90 @0x63730a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0b90
        call public_6356960
        add esp, 8
        public_63730ae : nop
        push 0
        push edi
        push 2
        call public_6378600
        add esp, 0xC
        public_63730bb : nop
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        je public_63730fc
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_63730fc
        public_63730ce : nop
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [edi+0x18]
        push eax
        push ecx
        call public_6380c50
        fld qword ptr ss : [esp+0x10]
        fcomp 
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_63730f1
        fstp qword ptr ss : [esp+8]
        jmp public_63730f3
        public_63730f1 : nop
        fstp st(0)
        public_63730f3 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_63730ce
        public_63730fc : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_637306b
        public_6373107 : nop
        fld qword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_63a5948]
        fnstsw ax
        test ah, 1
        je public_637317e
        fld qword ptr ss : [esp+8]
        lea edx, ss:[esp+0x18]
        fadd qword ptr ds : [public_63a5940]
        push edx
        push 0
/*FIXUP push offset public_63f0b80 @0x6373129*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0b80
        fstp qword ptr ss : [esp+0x24]
        mov dword ptr ds : [public_658b6f0], 1
        call public_6377cf0
        fld qword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_63a5938]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_637317e
        mov eax, dword ptr ds : [public_658b1d4]
        test eax, eax
        jne public_637317e
        mov eax, dword ptr ds : [public_658b114]
        test eax, eax
        je public_637317e
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
/*FIXUP push offset public_63f0a2c @0x6373171*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0a2c
        call public_6356960
        add esp, 0xC
        public_637317e : nop
        mov edx, dword ptr ds : [public_658b24c]
        mov eax, dword ptr ds : [public_658b810]
        inc edx
        push eax
        mov dword ptr ds : [public_658be90], edx
        call public_6371ad0
        mov ecx, dword ptr ds : [public_658b810]
        push 1
        push ecx
        call public_6370d70
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0xC
        cmp eax, 1
        jl public_63731fb
/*FIXUP push offset public_63f09f4 @0x63731b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f09f4
        call public_6356960
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 4
        xor esi, esi
        test eax, eax
        jle public_63731ee
        public_63731c9 : nop
        mov eax, dword ptr ds : [public_658b800]
        mov edx, dword ptr ds : [eax+esi*8+4]
        mov eax, dword ptr ds : [eax+esi*8]
        push edx
        push eax
/*FIXUP push offset public_63f09ec @0x63731d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f09ec
        call public_6356960
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0xC
        inc esi
        cmp esi, eax
        jl public_63731c9
/*FIXUP public_63731ee : nop
        push offset public_63edccc @0x63731ee*/
  FIXUP public_63731ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        public_63731fb : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6372f10)
    }
}

#undef public_6372f96
#undef public_6372fb8
#undef public_6372fc2
#undef public_6372fd9
#undef public_6372fe3
#undef public_6373004
#undef public_6373021
#undef public_6373032
#undef public_637305d
#undef public_637306b
#undef public_63730ae
#undef public_63730bb
#undef public_63730ce
#undef public_63730f1
#undef public_63730f3
#undef public_63730fc
#undef public_6373107
#undef public_637317e
#undef public_63731c9
#undef public_63731ee
#undef public_63731fb
