#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f553e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f554a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55bf0);

#define public_6f55c1a _public_6f55c1a
#define public_6f55c55 _public_6f55c55
#define public_6f55c5c _public_6f55c5c

PROC_DECLARE(0x6f55bf0, internal_6f55bf0, public_6f55bf0);
extern "C" NAKED register_t __cdecl internal_6f55bf0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x400
        call public_6f553e0
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [public_6f5a0f8]
        push ebp
        mov esi, eax
        push 0x400
        push esi
        call ebx
        add esp, 0x10
        test eax, eax
        je public_6f55c55
        public_6f55c1a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push edi
        call public_6f554a0
        mov al, byte ptr ds : [edi+esi-1]
        add esp, 4
        cmp al, 0xA
        je public_6f55c5c
        push 0x400
        call public_6f553e0
        push ebp
        mov esi, eax
        push 0x400
        push esi
        call ebx
        add esp, 0x10
        test eax, eax
        jne public_6f55c1a
        public_6f55c55 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6f55c5c : nop
        push 0xFFFFFFFF
        call public_6f554a0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55bf0)
    }
}

#undef public_6f55c1a
#undef public_6f55c55
#undef public_6f55c5c
