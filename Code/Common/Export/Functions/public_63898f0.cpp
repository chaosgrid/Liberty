#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_63898f0);
CLANG_FORWARD_PROC_SYMBOL(public_638ac90);

#define public_6389934 _public_6389934
#define public_6389954 _public_6389954
#define public_638997a _public_638997a
#define public_63899bc _public_63899bc
#define public_63899d4 _public_63899d4
#define public_63899e7 _public_63899e7
#define public_6389a0a _public_6389a0a
#define public_6389a15 _public_6389a15
#define public_6389a38 _public_6389a38
#define public_6389a42 _public_6389a42
#define public_6389a65 _public_6389a65
#define public_6389a97 _public_6389a97
#define public_6389aa8 _public_6389aa8
#define public_6389ab9 _public_6389ab9

PROC_DECLARE(0x63898f0, internal_63898f0, public_63898f0);
extern "C" NAKED register_t __cdecl internal_63898f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        test ebx, ebx
        push esi
        push edi
        je public_6389ab9
        mov eax, dword ptr ds : [public_658b8e0]
        mov esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0x48], eax
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6389ab9
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        je public_6389934
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_6389ab9
        public_6389934 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_6389ab9
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6389ab9
        public_6389954 : nop
        mov ecx, dword ptr ds : [edi+0x48]
        cmp ecx, dword ptr ds : [public_658b8e0]
        je public_6389aa8
        mov ecx, dword ptr ds : [public_658b198]
        test ecx, ecx
        je public_638997a
        test dword ptr ds : [edi+0x50], 0x40000
        je public_6389aa8
        public_638997a : nop
        sub eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [public_658b24c]
        sub eax, 8
        push 0
        sar eax, 2
        push eax
        mov eax, dword ptr ds : [esi+0x34]
        push edx
        push eax
        call public_636e9c0
        mov ecx, dword ptr ds : [public_658b054]
        add esp, 0x10
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_63899bc
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        push eax
        push edi
        push esi
        push ebx
        call public_638ac90
        add esp, 0x14
        jmp public_6389a97
        public_63899bc : nop
        mov eax, dword ptr ds : [public_658b058]
        test eax, eax
        jl public_63899d4
        mov edx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63f83a8 @0x63899cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f83a8
        jmp public_63899e7
        public_63899d4 : nop
        inc dword ptr ds : [public_658b8c4]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [esi+0x4C]
        push ecx
        push edx
/*FIXUP push offset public_63f838c @0x63899e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f838c
        public_63899e7 : nop
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        je public_6389a65
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_6389a65
        public_6389a0a : nop
        mov eax, dword ptr ds : [public_658b24c]
        xor esi, esi
        test eax, eax
        jle public_6389a42
        public_6389a15 : nop
        cmp esi, dword ptr ds : [public_658b058]
        je public_6389a38
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+esi*8+4]
        mov edx, dword ptr ds : [eax+esi*8]
        push ecx
        push edx
/*FIXUP push offset public_63f82f8 @0x6389a29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82f8
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6389a38 : nop
        mov eax, dword ptr ds : [public_658b24c]
        inc esi
        cmp esi, eax
        jl public_6389a15
/*FIXUP public_6389a42 : nop
        push offset public_63edccc @0x6389a42*/
  FIXUP public_6389a42 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax]
        add eax, 4
        add esp, 8
        test edi, edi
        mov dword ptr ss : [esp+0xC], eax
        jne public_6389a0a
        mov esi, dword ptr ss : [ebp+0xC]
        public_6389a65 : nop
        mov eax, dword ptr ds : [public_658b058]
        test eax, eax
        jl public_6389a97
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
/*FIXUP push offset public_63f8344 @0x6389a88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8344
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        public_6389a97 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_636e740
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6389aa8 : nop
        mov edi, dword ptr ds : [eax]
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], eax
        jne public_6389954
        public_6389ab9 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63898f0)
    }
}

#undef public_6389934
#undef public_6389954
#undef public_638997a
#undef public_63899bc
#undef public_63899d4
#undef public_63899e7
#undef public_6389a0a
#undef public_6389a15
#undef public_6389a38
#undef public_6389a42
#undef public_6389a65
#undef public_6389a97
#undef public_6389aa8
#undef public_6389ab9
