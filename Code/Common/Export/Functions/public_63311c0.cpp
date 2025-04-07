#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63311c0);

#define public_63311d6 _public_63311d6

PROC_DECLARE(0x63311c0, internal_63311c0, public_63311c0);
extern "C" NAKED register_t __cdecl internal_63311c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        je public_63311d6
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx]
        jae public_63311d6
        mov dword ptr ds : [ecx+eax*4+8], edx
        inc dword ptr ds : [ecx+4]
        public_63311d6 : nop
        ret 4
        UNREACHABLE_TRAP(0x63311c0)
    }
}

#undef public_63311d6
