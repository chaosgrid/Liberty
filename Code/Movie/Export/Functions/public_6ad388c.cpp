#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad388c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad38fb);

#define public_6ad38aa _public_6ad38aa
#define public_6ad38d4 _public_6ad38d4
#define public_6ad38f0 _public_6ad38f0
#define public_6ad38f3 _public_6ad38f3
#define public_6ad38f9 _public_6ad38f9

PROC_DECLARE(0x6ad388c, internal_6ad388c, public_6ad388c);
extern "C" NAKED register_t __cdecl internal_6ad388c()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6ae0f64], ebx
        jne public_6ad38aa
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x41
        jl public_6ad38f9
        cmp eax, 0x5A
        jg public_6ad38f9
        add eax, 0x20
        pop ebx
        ret 
        public_6ad38aa : nop
        push esi
        mov esi, offset public_6ae2588
        push edi
        push esi
        call dword ptr ds : [public_6ada10c]
        cmp dword ptr ds : [public_6ae2584], ebx
        mov edi, dword ptr ds : [public_6ada078]
        je public_6ad38d4
        push esi
        call edi
        push 0x13
        call public_6ad237a
        pop ecx
        push 1
        pop ebx
        public_6ad38d4 : nop
        push dword ptr ss : [esp+0x10]
        call public_6ad38fb
        test ebx, ebx
        pop ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ad38f0
        push 0x13
        call public_6ad23db
        pop ecx
        jmp public_6ad38f3
        public_6ad38f0 : nop
        push esi
        call edi
        public_6ad38f3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        public_6ad38f9 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad388c)
    }
}

#undef public_6ad38aa
#undef public_6ad38d4
#undef public_6ad38f0
#undef public_6ad38f3
#undef public_6ad38f9
