#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6371200);
CLANG_FORWARD_PROC_SYMBOL(public_6371ad0);
CLANG_FORWARD_PROC_SYMBOL(public_63743a0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_6371b18 _public_6371b18
#define public_6371b29 _public_6371b29
#define public_6371b2e _public_6371b2e
#define public_6371b36 _public_6371b36
#define public_6371b4e _public_6371b4e
#define public_6371b69 _public_6371b69
#define public_6371b8b _public_6371b8b
#define public_6371ba6 _public_6371ba6
#define public_6371bba _public_6371bba
#define public_6371bc5 _public_6371bc5
#define public_6371bc9 _public_6371bc9
#define public_6371c02 _public_6371c02
#define public_6371c11 _public_6371c11
#define public_6371c27 _public_6371c27
#define public_6371c30 _public_6371c30
#define public_6371c45 _public_6371c45
#define public_6371c4f _public_6371c4f
#define public_6371c7d _public_6371c7d
#define public_6371c93 _public_6371c93
#define public_6371ca7 _public_6371ca7
#define public_6371cfc _public_6371cfc
#define public_6371d05 _public_6371d05
#define public_6371d09 _public_6371d09
#define public_6371d14 _public_6371d14
#define public_6371d59 _public_6371d59
#define public_6371d82 _public_6371d82
#define public_6371dbf _public_6371dbf
#define public_6371dc5 _public_6371dc5
#define public_6371dcd _public_6371dcd
#define public_6371df1 _public_6371df1
#define public_6371e14 _public_6371e14
#define public_6371e60 _public_6371e60
#define public_6371e65 _public_6371e65
#define public_6371e89 _public_6371e89
#define public_6371ebc _public_6371ebc
#define public_6371ec4 _public_6371ec4
#define public_6371ed2 _public_6371ed2

PROC_DECLARE(0x6371ad0, internal_6371ad0, public_6371ad0);
extern "C" NAKED register_t __cdecl internal_6371ad0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        xor edi, edi
        xor ebp, ebp
        xor ebx, ebx
        cmp eax, 1
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x10], edi
        jl public_6371b18
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f03e0 @0x6371b09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f03e0
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6371b18 : nop
        cmp esi, dword ptr ds : [public_658b810]
        jne public_6371b29
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        je public_6371b2e
        public_6371b29 : nop
        mov edi, 1
        public_6371b2e : nop
        test esi, esi
        je public_6371bc9
        public_6371b36 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6371bc5
        cmp esi, dword ptr ds : [public_658b820]
        jne public_6371b4e
        mov ebx, 1
        public_6371b4e : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        jne public_6371bba
        test edi, edi
        jne public_6371ba6
        cmp esi, dword ptr ds : [public_658b818]
        jne public_6371b69
        mov edi, 1
        jmp public_6371ba6
        public_6371b69 : nop
        mov edx, dword ptr ds : [esi+0x40]
        push edx
        call public_636ec10
        add esp, 4
        test eax, eax
        je public_6371ba6
        mov eax, dword ptr ds : [public_658b6f0]
        test eax, eax
        je public_6371b8b
        mov eax, dword ptr ds : [public_658b03c]
        test eax, eax
        jne public_6371ba6
        public_6371b8b : nop
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
/*FIXUP push offset public_63f038c @0x6371b8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f038c
        call public_6356960
        push 0
        push esi
        push 5
        call public_6378600
        add esp, 0x14
        public_6371ba6 : nop
        inc dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        push esi
        call public_6371200
        add esp, 0xC
        public_6371bba : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6371b36
        public_6371bc5 : nop
        mov esi, dword ptr ss : [esp+0x28]
        public_6371bc9 : nop
        mov eax, dword ptr ds : [public_658b820]
        test eax, eax
        je public_6371c02
        test ebx, ebx
        jne public_6371c02
        cmp esi, dword ptr ds : [public_658b810]
        jne public_6371c11
        mov edx, dword ptr ds : [eax+0x4C]
        push edx
/*FIXUP push offset public_63f0338 @0x6371be2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0338
        call public_6356960
        call public_63743a0
        mov eax, dword ptr ds : [public_658b820]
        push ebx
        push eax
        push 5
        call public_6378600
        add esp, 0x14
        public_6371c02 : nop
        cmp esi, dword ptr ds : [public_658b810]
        jne public_6371c11
        mov eax, dword ptr ds : [public_658b838]
        jmp public_6371c27
        public_6371c11 : nop
        mov edi, dword ptr ds : [public_658b81c]
        mov ecx, dword ptr ds : [public_658b840]
        xor eax, eax
        cmp esi, edi
        setne al
        dec eax
        and eax, ecx
        public_6371c27 : nop
        test eax, eax
        je public_6371c45
        mov ecx, 0xFEFFFFFF
        public_6371c30 : nop
        cmp dword ptr ds : [eax], 0
        je public_6371c45
        and dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_6371c30
        public_6371c45 : nop
        test esi, esi
        je public_6371d14
        mov ebx, esi
        public_6371c4f : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        je public_6371d14
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 4
        jne public_6371d09
        test ah, 0x10
        je public_6371c7d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_658b24c]
        add eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6371c93
        public_6371c7d : nop
        mov edx, dword ptr ds : [ebx+0x38]
        push edx
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        public_6371c93 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_6371d09
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6371d05
        public_6371ca7 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        inc edx
        test eax, 0x1000000
        mov dword ptr ds : [esi+0x10], edx
        jne public_6371cfc
        or eax, 0x1000000
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        push eax
        inc ebp
        call public_6370570
        add esp, 4
        cmp eax, 0xFFFFFFFF
        jne public_6371cfc
        mov ecx, dword ptr ds : [public_658b258]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        and edx, 0xFFFFFF
        push edx
        push eax
/*FIXUP push offset public_63f02e0 @0x6371ce7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f02e0
        call public_6356960
        add esp, 0x10
        mov dword ptr ss : [esp+0x10], 1
        public_6371cfc : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6371ca7
        public_6371d05 : nop
        mov esi, dword ptr ss : [esp+0x28]
        public_6371d09 : nop
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        jne public_6371c4f
        public_6371d14 : nop
        mov edx, dword ptr ds : [public_658b8e4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_658b810]
        add edx, ecx
        cmp esi, eax
        mov dword ptr ds : [public_658b8e4], edx
        jne public_6371ebc
        mov eax, dword ptr ds : [public_658b844]
        sub eax, dword ptr ds : [public_658b824]
        cmp ecx, eax
        je public_6371d59
        push eax
        push ecx
/*FIXUP push offset public_63f0278 @0x6371d44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0278
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], 1
        public_6371d59 : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        mov eax, dword ptr ds : [public_658b670]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658b8e4], ecx
        je public_6371e14
        mov esi, dword ptr ds : [public_658b838]
        test esi, esi
        je public_6371dc5
        mov edi, 0x8000000
        public_6371d82 : nop
        cmp dword ptr ds : [esi], 0
        je public_6371dc5
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0xC]
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63f0268 @0x6371d94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0268
        push edx
        call public_636e2f0
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 0xC
        test edi, eax
        jne public_6371dbf
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        public_6371dbf : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6371d82
        public_6371dc5 : nop
        mov esi, dword ptr ss : [esp+0x28]
        test esi, esi
        je public_6371df1
        public_6371dcd : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6371df1
        mov ecx, dword ptr ds : [esi+0x34]
        push ecx
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [esi+0x30]
        add ecx, eax
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6371dcd
        public_6371df1 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_6371e14
        push eax
        push ecx
/*FIXUP push offset public_63f01fc @0x6371dff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f01fc
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], 1
        public_6371e14 : nop
        mov edx, dword ptr ds : [public_658b900]
        push edx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b848]
        sub ecx, eax
        add esp, 4
        cmp ebp, ecx
        je public_6371e60
        mov edx, dword ptr ds : [public_658b900]
        push edx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b848]
        add esp, 4
        sub ecx, eax
        push ecx
        push ebp
/*FIXUP push offset public_63f0194 @0x6371e48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0194
        call public_6356960
        mov edi, 1
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], edi
        jmp public_6371e65
        public_6371e60 : nop
        mov edi, 1
        public_6371e65 : nop
        cmp dword ptr ds : [public_658b24c], 2
        mov esi, dword ptr ss : [esp+0x14]
        jne public_6371e89
        cmp ebp, esi
        je public_6371ebc
        push esi
        push ebp
/*FIXUP push offset public_63f0150 @0x6371e78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0150
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], edi
        public_6371e89 : nop
        cmp dword ptr ds : [public_658b24c], 3
        jne public_6371ebc
        mov eax, dword ptr ss : [esp+0x18]
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, ebp
        sub edx, eax
        add edx, esi
        cmp edx, 2
        je public_6371ebc
        push eax
        push esi
        push ebp
/*FIXUP push offset public_63f00fc @0x6371ea9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f00fc
        call public_6356960
        add esp, 0x10
        mov dword ptr ss : [esp+0x10], edi
        jmp public_6371ec4
        public_6371ebc : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6371ed2
        public_6371ec4 : nop
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0xC
        public_6371ed2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6371ad0)
    }
}

#undef public_6371b18
#undef public_6371b29
#undef public_6371b2e
#undef public_6371b36
#undef public_6371b4e
#undef public_6371b69
#undef public_6371b8b
#undef public_6371ba6
#undef public_6371bba
#undef public_6371bc5
#undef public_6371bc9
#undef public_6371c02
#undef public_6371c11
#undef public_6371c27
#undef public_6371c30
#undef public_6371c45
#undef public_6371c4f
#undef public_6371c7d
#undef public_6371c93
#undef public_6371ca7
#undef public_6371cfc
#undef public_6371d05
#undef public_6371d09
#undef public_6371d14
#undef public_6371d59
#undef public_6371d82
#undef public_6371dbf
#undef public_6371dc5
#undef public_6371dcd
#undef public_6371df1
#undef public_6371e14
#undef public_6371e60
#undef public_6371e65
#undef public_6371e89
#undef public_6371ebc
#undef public_6371ec4
#undef public_6371ed2
