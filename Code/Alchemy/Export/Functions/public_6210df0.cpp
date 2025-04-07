#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6210dff _public_6210dff
#define public_6210e18 _public_6210e18

PROC_DECLARE(0x6210df0, internal_6210df0, public_6210df0);
extern "C" NAKED register_t __cdecl internal_6210df0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6210dff
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6210dff : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6210e18
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6210e18 : nop
        ret 4
        UNREACHABLE_TRAP(0x6210df0)
    }
}

#undef public_6210dff
#undef public_6210e18
