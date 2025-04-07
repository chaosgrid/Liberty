#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3e30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b50);

#define public_6ef6b60 _public_6ef6b60
#define public_6ef6b71 _public_6ef6b71

PROC_DECLARE(0x6ef6b50, internal_6ef6b50, public_6ef6b50);
extern "C" NAKED register_t __cdecl internal_6ef6b50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6ef6b71
        mov edi, edi
        public_6ef6b60 : nop
        mov ecx, esi
        call public_6ef3e30
        add esi, 0x80
        cmp esi, edi
        jne public_6ef6b60
        public_6ef6b71 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ef6b50)
    }
}

#undef public_6ef6b60
#undef public_6ef6b71
