#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd7ea);

#define public_65dd80e _public_65dd80e

PROC_DECLARE(0x65dd7ea, internal_65dd7ea, public_65dd7ea);
extern "C" NAKED register_t __cdecl internal_65dd7ea()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_65e5738
        cmp eax, ecx
        jb public_65dd80e
        cmp eax, offset public_65e5998
        ja public_65dd80e
        sub eax, ecx
        sar eax, 5
        add eax, 0x1C
        push eax
        call public_65dcf0c
        pop ecx
        ret 
        public_65dd80e : nop
        add eax, 0x20
        push eax
        call dword ptr ds : [public_65e10ac]
        ret 
        UNREACHABLE_TRAP(0x65dd7ea)
    }
}

#undef public_65dd80e
