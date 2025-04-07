#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630e81b _public_630e81b
#define public_630e81f _public_630e81f
#define public_630e83e _public_630e83e
#define public_630e85b _public_630e85b

PROC_DECLARE(0x630e7f0, internal_630e7f0, public_630e7f0);
extern "C" NAKED register_t __cdecl internal_630e7f0()
{
    __asm
    {
        sub esp, 0x64
        mov ecx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x68]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x78]
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0xC], eax
        lea edi, ss:[esp+0x14]
        mov ecx, 0x17
        je public_630e81b
        rep movsd
        jmp public_630e81f
        public_630e81b : nop
        xor eax, eax
        rep stosd
        public_630e81f : nop
        mov ebx, dword ptr ss : [esp+0x80]
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0x6C
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_630e83e
        mov edi, eax
        public_630e83e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [edx], eax
        je public_630e85b
        mov ecx, 0x19
        lea esi, ss:[esp+0xC]
        rep movsd
        public_630e85b : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x630e7f0)
    }
}

#undef public_630e81b
#undef public_630e81f
#undef public_630e83e
#undef public_630e85b
