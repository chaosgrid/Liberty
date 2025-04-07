#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6322ad0);

#define public_6322ae0 _public_6322ae0
#define public_6322af1 _public_6322af1

PROC_DECLARE(0x6322ad0, internal_6322ad0, public_6322ad0);
extern "C" NAKED register_t __cdecl internal_6322ad0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6322af1
        mov edi, edi
        public_6322ae0 : nop
        mov ecx, esi
        call public_63221f0
        add esi, 0x90
        cmp esi, edi
        jne public_6322ae0
        public_6322af1 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6322ad0)
    }
}

#undef public_6322ae0
#undef public_6322af1
