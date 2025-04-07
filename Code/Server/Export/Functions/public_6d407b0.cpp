#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d407b0);

#define public_6d407c5 _public_6d407c5
#define public_6d407db _public_6d407db

PROC_DECLARE(0x6d407b0, internal_6d407b0, public_6d407b0);
extern "C" NAKED register_t __cdecl internal_6d407b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6d407db
        push ebx
        mov ebx, dword ptr ds : [public_6d64bac]
        public_6d407c5 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call ebx
        mov word ptr ds : [esi], ax
        add esi, 2
        add esp, 4
        cmp esi, edi
        jne public_6d407c5
        pop ebx
        public_6d407db : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d407b0)
    }
}

#undef public_6d407c5
#undef public_6d407db
