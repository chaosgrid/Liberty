#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262a10);

#define public_6262a24 _public_6262a24
#define public_6262a27 _public_6262a27

PROC_DECLARE(0x6262a10, internal_6262a10, public_6262a10);
extern "C" NAKED register_t __cdecl internal_6262a10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_6262a27
        mov eax, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ss : [esp+4]
        cmp edx, eax
        ja public_6262a24
        mov eax, edx
        public_6262a24 : nop
        mov dword ptr ds : [ecx+0x20], eax
        public_6262a27 : nop
        ret 4
        UNREACHABLE_TRAP(0x6262a10)
    }
}

#undef public_6262a24
#undef public_6262a27
