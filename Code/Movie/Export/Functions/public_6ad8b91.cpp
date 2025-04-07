#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8b91);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8c00);

#define public_6ad8baf _public_6ad8baf
#define public_6ad8bd9 _public_6ad8bd9
#define public_6ad8bf5 _public_6ad8bf5
#define public_6ad8bf8 _public_6ad8bf8
#define public_6ad8bfe _public_6ad8bfe

PROC_DECLARE(0x6ad8b91, internal_6ad8b91, public_6ad8b91);
extern "C" NAKED register_t __cdecl internal_6ad8b91()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6ae0f64], ebx
        jne public_6ad8baf
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x61
        jl public_6ad8bfe
        cmp eax, 0x7A
        jg public_6ad8bfe
        sub eax, 0x20
        pop ebx
        ret 
        public_6ad8baf : nop
        push esi
        mov esi, offset public_6ae2588
        push edi
        push esi
        call dword ptr ds : [public_6ada10c]
        cmp dword ptr ds : [public_6ae2584], ebx
        mov edi, dword ptr ds : [public_6ada078]
        je public_6ad8bd9
        push esi
        call edi
        push 0x13
        call public_6ad237a
        pop ecx
        push 1
        pop ebx
        public_6ad8bd9 : nop
        push dword ptr ss : [esp+0x10]
        call public_6ad8c00
        test ebx, ebx
        pop ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ad8bf5
        push 0x13
        call public_6ad23db
        pop ecx
        jmp public_6ad8bf8
        public_6ad8bf5 : nop
        push esi
        call edi
        public_6ad8bf8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        public_6ad8bfe : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad8b91)
    }
}

#undef public_6ad8baf
#undef public_6ad8bd9
#undef public_6ad8bf5
#undef public_6ad8bf8
#undef public_6ad8bfe
