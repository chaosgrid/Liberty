#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4310);

#define public_62d4320 _public_62d4320

PROC_DECLARE(0x62d4310, internal_62d4310, public_62d4310);
extern "C" NAKED register_t __cdecl internal_62d4310()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x154], 1
        jne public_62d4320
        mov al, byte ptr ds : [ecx+0xF9]
        ret 
        public_62d4320 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x62d4310)
    }
}

#undef public_62d4320
