#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6330);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7930);

#define public_6ef7940 _public_6ef7940
#define public_6ef794e _public_6ef794e

PROC_DECLARE(0x6ef7930, internal_6ef7930, public_6ef7930);
extern "C" NAKED register_t __cdecl internal_6ef7930()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6ef794e
        mov edi, edi
        public_6ef7940 : nop
        mov ecx, esi
        call public_6ef6330
        add esi, 0x38
        cmp esi, edi
        jne public_6ef7940
        public_6ef794e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ef7930)
    }
}

#undef public_6ef7940
#undef public_6ef794e
