#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40780);

#define public_6d40795 _public_6d40795
#define public_6d407ab _public_6d407ab

PROC_DECLARE(0x6d40780, internal_6d40780, public_6d40780);
extern "C" NAKED register_t __cdecl internal_6d40780()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6d407ab
        push ebx
        mov ebx, dword ptr ds : [public_6d64ba0]
        public_6d40795 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call ebx
        mov word ptr ds : [esi], ax
        add esi, 2
        add esp, 4
        cmp esi, edi
        jne public_6d40795
        pop ebx
        public_6d407ab : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d40780)
    }
}

#undef public_6d40795
#undef public_6d407ab
