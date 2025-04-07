#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_6280b51 _public_6280b51

PROC_DECLARE(0x6280b40, internal_6280b40, public_6280b40);
extern "C" NAKED register_t __cdecl internal_6280b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx]
        je public_6280b51
        mov dword ptr ss : [esp+4], eax
        jmp public_6341610
        public_6280b51 : nop
        ret 4
        UNREACHABLE_TRAP(0x6280b40)
    }
}

#undef public_6280b51
