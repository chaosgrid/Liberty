#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2310);

#define public_4a2361 _public_4a2361

PROC_DECLARE(0x4a2310, internal_4a2310, public_4a2310);
extern "C" NAKED register_t __cdecl internal_4a2310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x3FC27
        je public_4a2361
        cmp eax, 0x3FC2E
        je public_4a2361
        cmp eax, 0x3FC28
        je public_4a2361
        cmp eax, 0xEB41
        je public_4a2361
        test eax, eax
        je public_4a2361
        cmp eax, 0xEB3F
        je public_4a2361
        cmp eax, 0x300EA
        je public_4a2361
        cmp eax, 0x30052
        je public_4a2361
        cmp eax, 0x3009C
        je public_4a2361
        cmp eax, 0x3009D
        je public_4a2361
        cmp eax, 0x300BF
        je public_4a2361
        mov al, 1
        ret 
        public_4a2361 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x4a2310)
    }
}

#undef public_4a2361
