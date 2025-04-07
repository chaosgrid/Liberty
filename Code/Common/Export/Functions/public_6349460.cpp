#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349430);
CLANG_FORWARD_PROC_SYMBOL(public_6349460);

#define public_6349479 _public_6349479

PROC_DECLARE(0x6349460, internal_6349460, public_6349460);
extern "C" NAKED register_t __cdecl internal_6349460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        shl eax, 0x18
        cmp eax, 0x8000000
        lea eax, ds:[ecx+0x14]
        jl public_6349479
        lea eax, ds:[ecx+0x1A4]
        public_6349479 : nop
        push eax
        push edx
        call public_6349430
        ret 4
        UNREACHABLE_TRAP(0x6349460)
    }
}

#undef public_6349479
