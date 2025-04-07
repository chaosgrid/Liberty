#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd9e5);
CLANG_FORWARD_PROC_SYMBOL(public_65dda42);

#define public_65dda15 _public_65dda15
#define public_65dda37 _public_65dda37
#define public_65dda3a _public_65dda3a

PROC_DECLARE(0x65dd9e5, internal_65dd9e5, public_65dd9e5);
extern "C" NAKED register_t __cdecl internal_65dd9e5()
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
        je public_65dda15
        push esi
        call edi
        push 0x13
        call public_65dceab
        pop ecx
        push 1
        pop ebx
        public_65dda15 : nop
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_65dda42
        add esp, 0xC
        mov dword ptr ss : [ebp+0x10], eax
        test ebx, ebx
        je public_65dda37
        push 0x13
        call public_65dcf0c
        pop ecx
        jmp public_65dda3a
        public_65dda37 : nop
        push esi
        call edi
        public_65dda3a : nop
        mov eax, dword ptr ss : [ebp+0x10]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65dd9e5)
    }
}

#undef public_65dda15
#undef public_65dda37
#undef public_65dda3a
