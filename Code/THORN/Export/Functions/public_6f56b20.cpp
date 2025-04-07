#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f55490);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b70);

#define public_6f56b4a _public_6f56b4a
#define public_6f56b65 _public_6f56b65

PROC_DECLARE(0x6f56b20, internal_6f56b20, public_6f56b20);
extern "C" NAKED register_t __cdecl internal_6f56b20()
{
    __asm
    {
        push ecx
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
        push 1
        call public_6f4f5e0
        add esp, 8
        mov edi, eax
        call public_6f55490
        mov eax, dword ptr ss : [esp+8]
        xor esi, esi
        test eax, eax
        jle public_6f56b65
        push ebx
        mov ebx, dword ptr ds : [public_6f5a15c]
        public_6f56b4a : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+edi]
        push ecx
        call ebx
        push eax
        call public_6f55450
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        inc esi
        cmp esi, eax
        jl public_6f56b4a
        pop ebx
        public_6f56b65 : nop
        call public_6f56b70
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f56b20)
    }
}

#undef public_6f56b4a
#undef public_6f56b65
