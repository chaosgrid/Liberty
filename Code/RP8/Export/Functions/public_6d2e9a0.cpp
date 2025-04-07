#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2e9a0);

#define public_6d2e9ab _public_6d2e9ab
#define public_6d2e9bd _public_6d2e9bd
#define public_6d2e9e1 _public_6d2e9e1
#define public_6d2e9e8 _public_6d2e9e8
#define public_6d2e9ea _public_6d2e9ea

PROC_DECLARE(0x6d2e9a0, internal_6d2e9a0, public_6d2e9a0);
extern "C" NAKED register_t __cdecl internal_6d2e9a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d2e9bd
        public_6d2e9ab : nop
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, 1
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        mov dword ptr ss : [ebp+8], ecx
        public_6d2e9bd : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jbe public_6d2e9ea
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], edx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d2e9e1
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d2e9e8
        public_6d2e9e1 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d2e9e8 : nop
        jmp public_6d2e9ab
        public_6d2e9ea : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d2e9a0)
    }
}

#undef public_6d2e9ab
#undef public_6d2e9bd
#undef public_6d2e9e1
#undef public_6d2e9e8
#undef public_6d2e9ea
