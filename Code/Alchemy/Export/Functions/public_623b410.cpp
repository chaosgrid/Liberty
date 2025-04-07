#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_623abe0);
CLANG_FORWARD_PROC_SYMBOL(public_623b410);

#define public_623b44c _public_623b44c

PROC_DECLARE(0x623b410, internal_623b410, public_623b410);
extern "C" NAKED register_t __cdecl internal_623b410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        lea ebx, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_6257b78]
        test eax, eax
        jne public_623b44c
        mov eax, dword ptr ds : [public_6257b7c]
        mov edi, dword ptr ds : [public_6257b6c]
        sub eax, edi
        mov edx, dword ptr ds : [public_6257b68]
        shr eax, 3
        imul eax, dword ptr ds : [public_6257b70]
        mov ecx, dword ptr ds : [eax+edx+8]
        add eax, edx
        push eax
        call public_623abe0
        public_623b44c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        mov ecx, 6
        sub esp, 0x18
        mov edi, esp
        rep movsd
        push ebx
        lea ecx, ds:[ebx+0xD8]
        call public_623a2e0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x623b410)
    }
}

#undef public_623b44c
