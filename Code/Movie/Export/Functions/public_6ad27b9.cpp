#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad27b9);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2852);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6402);

#define public_6ad27d0 _public_6ad27d0
#define public_6ad27f5 _public_6ad27f5
#define public_6ad2825 _public_6ad2825

PROC_DECLARE(0x6ad27b9, internal_6ad27b9, public_6ad27b9);
extern "C" NAKED register_t __cdecl internal_6ad27b9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6ae2590], ebx
        push esi
        push edi
        jne public_6ad27d0
        call public_6ad6402
        public_6ad27d0 : nop
        mov esi, offset public_6ae0f7c
        push 0x104
        push esi
        push ebx
        call dword ptr ds : [public_6ada0e4]
        mov eax, dword ptr ds : [public_6ae259c]
        mov dword ptr ds : [public_6ae0ed8], esi
        mov edi, esi
        cmp byte ptr ds : [eax], bl
        je public_6ad27f5
        mov edi, eax
        public_6ad27f5 : nop
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push ebx
        push ebx
        push edi
        call public_6ad2852
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-4]
        lea eax, ds:[eax+ecx*4]
        push eax
        call public_6ad0953
        mov esi, eax
        add esp, 0x18
        cmp esi, ebx
        jne public_6ad2825
        push 8
        call public_6acff18
        pop ecx
        public_6ad2825 : nop
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        mov eax, dword ptr ss : [ebp-4]
        lea eax, ds:[esi+eax*4]
        push eax
        push esi
        push edi
        call public_6ad2852
        mov eax, dword ptr ss : [ebp-4]
        add esp, 0x14
        dec eax
        mov dword ptr ds : [public_6ae0ec0], esi
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae0ebc], eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad27b9)
    }
}

#undef public_6ad27d0
#undef public_6ad27f5
#undef public_6ad2825
