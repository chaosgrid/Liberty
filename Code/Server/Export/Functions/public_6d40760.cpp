#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40760);

#define public_6d40776 _public_6d40776

PROC_DECLARE(0x6d40760, internal_6d40760, public_6d40760);
extern "C" NAKED register_t __cdecl internal_6d40760()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6d40776
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 8
        rep movsd
        pop esi
        public_6d40776 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6d40760)
    }
}

#undef public_6d40776
