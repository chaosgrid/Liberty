#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5d2a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5d83);

#define public_6ad5d5a _public_6ad5d5a
#define public_6ad5d78 _public_6ad5d78
#define public_6ad5d7b _public_6ad5d7b

PROC_DECLARE(0x6ad5d2a, internal_6ad5d2a, public_6ad5d2a);
extern "C" NAKED register_t __cdecl internal_6ad5d2a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, offset public_6ae2588
        push edi
        push esi
        call dword ptr ds : [public_6ada10c]
        mov edi, dword ptr ds : [public_6ada078]
        xor ebx, ebx
        cmp dword ptr ds : [public_6ae2584], ebx
        je public_6ad5d5a
        push esi
        call edi
        push 0x13
        call public_6ad237a
        pop ecx
        push 1
        pop ebx
        public_6ad5d5a : nop
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ad5d83
        pop ecx
        mov dword ptr ss : [ebp+0xC], eax
        test ebx, ebx
        pop ecx
        je public_6ad5d78
        push 0x13
        call public_6ad23db
        pop ecx
        jmp public_6ad5d7b
        public_6ad5d78 : nop
        push esi
        call edi
        public_6ad5d7b : nop
        mov eax, dword ptr ss : [ebp+0xC]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad5d2a)
    }
}

#undef public_6ad5d5a
#undef public_6ad5d78
#undef public_6ad5d7b
