#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bdda0);
CLANG_FORWARD_PROC_SYMBOL(public_4be2b0);

#define public_4be2c9 _public_4be2c9

PROC_DECLARE(0x4be2b0, internal_4be2b0, public_4be2b0);
extern "C" NAKED register_t __cdecl internal_4be2b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67244c]
        test ecx, ecx
        je public_4be2c9
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push edx
        call public_4bdda0
        public_4be2c9 : nop
        ret 
        UNREACHABLE_TRAP(0x4be2b0)
    }
}

#undef public_4be2c9
