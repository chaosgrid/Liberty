#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f1c0);

#define public_6d2f1e9 _public_6d2f1e9
#define public_6d2f1f0 _public_6d2f1f0

PROC_DECLARE(0x6d2f1c0, internal_6d2f1c0, public_6d2f1c0);
extern "C" NAKED register_t __cdecl internal_6d2f1c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d2f1e9
        mov esi, dword ptr ss : [ebp+0xC]
        mov ecx, 5
        mov edi, dword ptr ss : [ebp-4]
        rep movsd
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d2f1f0
        public_6d2f1e9 : nop
        mov dword ptr ss : [ebp-8], 0
        public_6d2f1f0 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2f1c0)
    }
}

#undef public_6d2f1e9
#undef public_6d2f1f0
