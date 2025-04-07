#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30720);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a730);

#define public_6f7a740 _public_6f7a740
#define public_6f7a74e _public_6f7a74e

PROC_DECLARE(0x6f7a730, internal_6f7a730, public_6f7a730);
extern "C" NAKED register_t __cdecl internal_6f7a730()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f7a74e
        mov edi, edi
        public_6f7a740 : nop
        mov ecx, esi
        call public_6f30720
        add esi, 0x44
        cmp esi, edi
        jne public_6f7a740
        public_6f7a74e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f7a730)
    }
}

#undef public_6f7a740
#undef public_6f7a74e
