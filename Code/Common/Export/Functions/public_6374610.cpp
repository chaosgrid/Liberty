#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_6374610);

#define public_637463a _public_637463a
#define public_6374654 _public_6374654
#define public_6374677 _public_6374677
#define public_6374691 _public_6374691
#define public_63746ad _public_63746ad
#define public_63746b4 _public_63746b4
#define public_63746c1 _public_63746c1

PROC_DECLARE(0x6374610, internal_6374610, public_6374610);
extern "C" NAKED register_t __cdecl internal_6374610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b670]
        test eax, eax
        jne public_63746c1
        cmp dword ptr ds : [public_658b078], 1
        jl public_637463a
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f1194 @0x637462b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1194
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_637463a : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        push ebx
        mov ebx, dword ptr ds : [public_658b810]
        inc ecx
        test ebx, ebx
        push esi
        push edi
        mov dword ptr ds : [public_658b8e4], ecx
        je public_63746b4
        public_6374654 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        je public_63746b4
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 4
        jne public_63746ad
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_63746ad
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_63746ad
        public_6374677 : nop
        cmp dword ptr ds : [esi+0x10], ecx
        je public_6374691
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, dword ptr ds : [public_658b24c]
        push ecx
        call public_636e920
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        public_6374691 : nop
        push ebx
        add esi, 0xC
        push esi
        call public_636e1b0
        mov esi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [public_658b8e4]
        add esp, 8
        add edi, 4
        test esi, esi
        jne public_6374677
        public_63746ad : nop
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        jne public_6374654
        public_63746b4 : nop
        pop edi
        pop esi
        mov dword ptr ds : [public_658b670], 1
        pop ebx
        public_63746c1 : nop
        ret 
        UNREACHABLE_TRAP(0x6374610)
    }
}

#undef public_637463a
#undef public_6374654
#undef public_6374677
#undef public_6374691
#undef public_63746ad
#undef public_63746b4
#undef public_63746c1
