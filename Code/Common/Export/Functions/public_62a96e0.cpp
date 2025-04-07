#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a9700);
CLANG_FORWARD_PROC_SYMBOL(public_62a9820);

#define public_62a96f4 _public_62a96f4

PROC_DECLARE(0x62a96e0, internal_62a96e0, public_62a96e0);
extern "C" NAKED register_t __cdecl internal_62a96e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [eax+0xC]
        test dl, dl
        mov dword ptr ss : [esp+4], eax
        je public_62a96f4
        jmp public_62a9700
        public_62a96f4 : nop
        jmp public_62a9820
        UNREACHABLE_TRAP(0x62a96e0)
    }
}

#undef public_62a96f4
