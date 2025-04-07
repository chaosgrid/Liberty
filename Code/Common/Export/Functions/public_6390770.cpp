#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_63906f0);
CLANG_FORWARD_PROC_SYMBOL(public_6390770);

#define public_63907a2 _public_63907a2
#define public_63907ec _public_63907ec
#define public_6390800 _public_6390800
#define public_6390818 _public_6390818
#define public_6390837 _public_6390837
#define public_639083a _public_639083a
#define public_6390849 _public_6390849
#define public_6390865 _public_6390865

PROC_DECLARE(0x6390770, internal_6390770, public_6390770);
extern "C" NAKED register_t __cdecl internal_6390770()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 4
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        jl public_63907a2
        mov eax, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fb46c @0x6390793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb46c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_63907a2 : nop
        mov ecx, dword ptr ds : [public_658b834]
        test ecx, ecx
        je public_63907ec
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [public_658b870]
        mov eax, dword ptr ss : [ebp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x4C]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_63fb428 @0x63907c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb428
        call public_6356960
        mov edx, dword ptr ds : [public_658b834]
        push edx
        push 0
        push 0
        push 0
/*FIXUP push offset public_63fb420 @0x63907d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb420
        call public_6378820
        mov ecx, dword ptr ds : [public_658b834]
        add esp, 0x28
        public_63907ec : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_6390849
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6390849
        public_6390800 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, dword ptr ds : [public_658b8e4]
        je public_6390818
        mov ecx, dword ptr ds : [esi+0xC]
        push ebp
        push ebx
        push ecx
        call public_636ebb0
        jmp public_6390837
        public_6390818 : nop
        mov edx, dword ptr ds : [esi+0xC]
        push ebx
        push edx
        call public_636e400
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        test ecx, ecx
        jne public_639083a
        push ebp
        push ebx
        push esi
        call public_63906f0
        public_6390837 : nop
        add esp, 0xC
        public_639083a : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6390800
        mov ecx, dword ptr ds : [public_658b834]
        public_6390849 : nop
        test ecx, ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_6390865
        push ecx
        push 0
        push 0
        push 0
/*FIXUP push offset public_63fb420 @0x6390858*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb420
        call public_6378820
        add esp, 0x14
        public_6390865 : nop
        ret 
        UNREACHABLE_TRAP(0x6390770)
    }
}

#undef public_63907a2
#undef public_63907ec
#undef public_6390800
#undef public_6390818
#undef public_6390837
#undef public_639083a
#undef public_6390849
#undef public_6390865
