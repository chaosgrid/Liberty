#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acfc45);
CLANG_FORWARD_PROC_SYMBOL(public_6acfca2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);

#define public_6acfc75 _public_6acfc75
#define public_6acfc97 _public_6acfc97
#define public_6acfc9a _public_6acfc9a

PROC_DECLARE(0x6acfc45, internal_6acfc45, public_6acfc45);
extern "C" NAKED register_t __cdecl internal_6acfc45()
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
        je public_6acfc75
        push esi
        call edi
        push 0x13
        call public_6ad237a
        pop ecx
        push 1
        pop ebx
        public_6acfc75 : nop
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6acfca2
        add esp, 0xC
        mov dword ptr ss : [ebp+0x10], eax
        test ebx, ebx
        je public_6acfc97
        push 0x13
        call public_6ad23db
        pop ecx
        jmp public_6acfc9a
        public_6acfc97 : nop
        push esi
        call edi
        public_6acfc9a : nop
        mov eax, dword ptr ss : [ebp+0x10]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6acfc45)
    }
}

#undef public_6acfc75
#undef public_6acfc97
#undef public_6acfc9a
