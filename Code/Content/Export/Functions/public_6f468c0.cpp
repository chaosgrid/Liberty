#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f468c0);

#define public_6f468d6 _public_6f468d6

PROC_DECLARE(0x6f468c0, internal_6f468c0, public_6f468c0);
extern "C" NAKED register_t __cdecl internal_6f468c0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6f468d6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x19
        rep movsd
        pop esi
        public_6f468d6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f468c0)
    }
}

#undef public_6f468d6
