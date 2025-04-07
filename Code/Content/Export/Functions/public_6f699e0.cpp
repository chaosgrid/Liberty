#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f699e0);

#define public_6f699f0 _public_6f699f0
#define public_6f699fe _public_6f699fe

PROC_DECLARE(0x6f699e0, internal_6f699e0, public_6f699e0);
extern "C" NAKED register_t __cdecl internal_6f699e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f699fe
        mov edi, edi
        public_6f699f0 : nop
        mov ecx, esi
        call public_6eec8d0
        add esi, 0x10
        cmp esi, edi
        jne public_6f699f0
        public_6f699fe : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f699e0)
    }
}

#undef public_6f699f0
#undef public_6f699fe
