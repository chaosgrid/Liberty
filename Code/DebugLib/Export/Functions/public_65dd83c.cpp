#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd83c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd895);

#define public_65dd86c _public_65dd86c
#define public_65dd88a _public_65dd88a
#define public_65dd88d _public_65dd88d

PROC_DECLARE(0x65dd83c, internal_65dd83c, public_65dd83c);
extern "C" NAKED register_t __cdecl internal_65dd83c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, offset public_65e66c8
        push edi
        push esi
        call dword ptr ds : [public_65e10e4]
        mov edi, dword ptr ds : [public_65e10fc]
        xor ebx, ebx
        cmp dword ptr ds : [public_65e66c4], ebx
        je public_65dd86c
        push esi
        call edi
        push 0x13
        call public_65dceab
        pop ecx
        push 1
        pop ebx
        public_65dd86c : nop
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_65dd895
        pop ecx
        mov dword ptr ss : [ebp+0xC], eax
        test ebx, ebx
        pop ecx
        je public_65dd88a
        push 0x13
        call public_65dcf0c
        pop ecx
        jmp public_65dd88d
        public_65dd88a : nop
        push esi
        call edi
        public_65dd88d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65dd83c)
    }
}

#undef public_65dd86c
#undef public_65dd88a
#undef public_65dd88d
