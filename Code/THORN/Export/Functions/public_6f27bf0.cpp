#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f27bf0);

#define public_6f27bff _public_6f27bff

PROC_DECLARE(0x6f27bf0, internal_6f27bf0, public_6f27bf0);
extern "C" NAKED register_t __cdecl internal_6f27bf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x14
        jb public_6f27bff
        mov eax, offset public_6f5eb74
        ret 
        public_6f27bff : nop
        mov eax, dword ptr ds : [eax*4+public_6f5e1e8]
        ret 
        UNREACHABLE_TRAP(0x6f27bf0)
    }
}

#undef public_6f27bff
