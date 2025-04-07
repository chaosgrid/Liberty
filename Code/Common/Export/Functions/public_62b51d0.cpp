#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b51d0);

#define public_62b51e0 _public_62b51e0
#define public_62b51ee _public_62b51ee

PROC_DECLARE(0x62b51d0, internal_62b51d0, public_62b51d0);
extern "C" NAKED register_t __cdecl internal_62b51d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_62b51ee
        mov edi, edi
        public_62b51e0 : nop
        mov ecx, esi
        call public_62881d0
        add esi, 8
        cmp esi, edi
        jne public_62b51e0
        public_62b51ee : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b51d0)
    }
}

#undef public_62b51e0
#undef public_62b51ee
