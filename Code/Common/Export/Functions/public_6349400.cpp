#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63493e0);
CLANG_FORWARD_PROC_SYMBOL(public_6349400);

#define public_6349419 _public_6349419

PROC_DECLARE(0x6349400, internal_6349400, public_6349400);
extern "C" NAKED register_t __cdecl internal_6349400()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        shl eax, 0x18
        cmp eax, 0x8000000
        lea eax, ds:[ecx+0x14]
        jl public_6349419
        lea eax, ds:[ecx+0x1A4]
        public_6349419 : nop
        push eax
        push edx
        call public_63493e0
        ret 4
        UNREACHABLE_TRAP(0x6349400)
    }
}

#undef public_6349419
