#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552440);

#define public_552456 _public_552456
#define public_552466 _public_552466
#define public_552473 _public_552473

PROC_DECLARE(0x552440, internal_552440, public_552440);
extern "C" NAKED register_t __cdecl internal_552440()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, ecx
        and edx, 0xC
        xor eax, eax
        cmp dl, 0xC
        jne public_552456
        mov eax, 0x1C
        ret 
        public_552456 : nop
        mov edx, ecx
        and edx, 4
        cmp dl, 4
        jne public_552466
        mov eax, 0x10
        ret 
        public_552466 : nop
        and ecx, 2
        cmp cl, 2
        jne public_552473
        mov eax, 0xC
        public_552473 : nop
        ret 
        UNREACHABLE_TRAP(0x552440)
    }
}

#undef public_552456
#undef public_552466
#undef public_552473
