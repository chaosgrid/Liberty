#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4572b0);

#define public_4572c6 _public_4572c6

PROC_DECLARE(0x4572b0, internal_4572b0, public_4572b0);
extern "C" NAKED register_t __cdecl internal_4572b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4572c6
        push eax
        add ecx, 0x70
        push ecx
        call dword ptr ds : [public_5c60cc]
        add esp, 8
        public_4572c6 : nop
        ret 4
        UNREACHABLE_TRAP(0x4572b0)
    }
}

#undef public_4572c6
