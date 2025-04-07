#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3810);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf440);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ae0);

#define public_6ed0afc _public_6ed0afc

PROC_DECLARE(0x6ed0ae0, internal_6ed0ae0, public_6ed0ae0);
extern "C" NAKED register_t __cdecl internal_6ed0ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6ed0afc
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6ed1014]
        call public_6ec3810
        call public_6ecf440
        public_6ed0afc : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0ae0)
    }
}

#undef public_6ed0afc
