#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f289e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b500);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);

#define public_6f28a55 _public_6f28a55

PROC_DECLARE(0x6f289e0, internal_6f289e0, public_6f289e0);
extern "C" NAKED register_t __cdecl internal_6f289e0()
{
    __asm
    {
        cmp dword ptr ds : [public_6f5e1e4], 0xFFFFFFFF
        push esi
        push edi
        je public_6f28a55
        push 1
        call public_6f4b090
        push 2
        mov edi, eax
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b410
        add esp, 0xC
        test eax, eax
        jne public_6f28a55
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f28a55
        push esi
        call public_6f4b500
        add esp, 4
        test eax, eax
        je public_6f28a55
        mov eax, dword ptr ds : [public_6f61dec]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push esi
        call public_6f4b590
        add esp, 4
        push eax
        push edi
        call public_6f4b590
        mov ecx, dword ptr ds : [public_6f5e1e4]
        mov edx, dword ptr ds : [public_6f61dec]
        add esp, 4
        push eax
        push ecx
        push edx
        call dword ptr ds : [ebx+0x88]
        pop ebx
        public_6f28a55 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f289e0)
    }
}

#undef public_6f28a55
