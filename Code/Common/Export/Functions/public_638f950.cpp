#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e370);
CLANG_FORWARD_PROC_SYMBOL(public_636e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_638ce70);
CLANG_FORWARD_PROC_SYMBOL(public_638f950);

#define public_638f971 _public_638f971
#define public_638f9c8 _public_638f9c8
#define public_638f9eb _public_638f9eb
#define public_638f9fb _public_638f9fb
#define public_638fa04 _public_638fa04
#define public_638fa60 _public_638fa60
#define public_638fa84 _public_638fa84
#define public_638fa96 _public_638fa96
#define public_638faca _public_638faca

PROC_DECLARE(0x638f950, internal_638f950, public_638f950);
extern "C" NAKED register_t __cdecl internal_638f950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b078]
        sub esp, 8
        cmp eax, 4
        jl public_638f971
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63faf60 @0x638f962*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63faf60
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638f971 : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[ecx-1]
        push edi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [ebx+0x48], eax
        call public_638ce70
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+4]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_636e1b0
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        test eax, eax
        je public_638fa96
        mov esi, dword ptr ds : [eax+4]
        lea ebp, ds:[eax+4]
        add ebp, 4
        test esi, esi
        je public_638fa96
        public_638f9c8 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        lea edi, ds:[esi+0xC]
        or edx, 0x4000000
        test eax, eax
        mov dword ptr ds : [esi+0x14], edx
        je public_638fa04
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ecx, ecx
        je public_638fa04
        public_638f9eb : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [ecx+0x48], edx
        jne public_638f9fb
        mov dword ptr ds : [eax-4], 0
        public_638f9fb : nop
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        test ecx, ecx
        jne public_638f9eb
        public_638fa04 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        call public_636e370
        push ebx
        push edi
        call public_636e1b0
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+8]
        add esp, 0xC
        test eax, eax
        jne public_638fa84
        mov ecx, dword ptr ds : [public_658bb08]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, 2
        mov dword ptr ds : [public_658bb08], ecx
        jl public_638fa60
        mov edx, dword ptr ds : [ebx+0x4C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        push ecx
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63faf18 @0x638fa51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63faf18
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_638fa60 : nop
        mov ecx, dword ptr ds : [ebx+0x34]
        push esi
        push ecx
        call public_636e5a0
        mov edi, dword ptr ds : [esi+0x14]
        push esi
        or edi, 0x8000000
/*FIXUP push offset public_658b900 @0x638fa74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [esi+0x14], edi
        call public_636e1b0
        add esp, 0x10
        public_638fa84 : nop
        mov esi, dword ptr ss : [ebp]
        add ebp, 4
        test esi, esi
        jne public_638f9c8
        mov edi, dword ptr ss : [esp+0x1C]
        public_638fa96 : nop
        lea edx, ss:[esp+0x10]
        push edx
        call public_636ecc0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 3
        jl public_638faca
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63faed4 @0x638fabb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63faed4
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638faca : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x638f950)
    }
}

#undef public_638f971
#undef public_638f9c8
#undef public_638f9eb
#undef public_638f9fb
#undef public_638fa04
#undef public_638fa60
#undef public_638fa84
#undef public_638fa96
#undef public_638faca
