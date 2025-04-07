#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347240);
CLANG_FORWARD_PROC_SYMBOL(public_63590c0);

#define public_63590d6 _public_63590d6

PROC_DECLARE(0x63590c0, internal_63590c0, public_63590c0);
extern "C" NAKED register_t __cdecl internal_63590c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x60]
        shl eax, 0x18
        cmp eax, 0x8000000
        jge public_63590d6
        call public_6347240
        public_63590d6 : nop
        ret 4
        UNREACHABLE_TRAP(0x63590c0)
    }
}

#undef public_63590d6
