#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447f50);

#define public_4541c0 _public_4541c0

PROC_DECLARE(0x4541a0, internal_4541a0, public_4541a0);
extern "C" NAKED register_t __cdecl internal_4541a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x54]
        call public_446be0
        test eax, eax
        je public_4541c0
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, eax
        call public_447f50
        public_4541c0 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4541a0)
    }
}

#undef public_4541c0
