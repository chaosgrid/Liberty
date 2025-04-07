#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d25e9a);
CLANG_FORWARD_PROC_SYMBOL(public_6d27d63);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d27d8c _public_6d27d8c
#define public_6d27d93 _public_6d27d93

PROC_DECLARE(0x6d27d63, internal_6d27d63, public_6d27d63);
extern "C" NAKED register_t __cdecl internal_6d27d63()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push 0x584
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        je public_6d27d8c
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d25e9a
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d27d93
        public_6d27d8c : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d27d93 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d27d63)
    }
}

#undef public_6d27d8c
#undef public_6d27d93
