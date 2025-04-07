#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298440);

#define public_6298451 _public_6298451
#define public_6298453 _public_6298453

PROC_DECLARE(0x6298440, internal_6298440, public_6298440);
extern "C" NAKED register_t __cdecl internal_6298440()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x250]
        test eax, eax
        je public_6298451
        add eax, 0xFFFFFF64
        jmp public_6298453
        public_6298451 : nop
        xor eax, eax
        public_6298453 : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ax, word ptr ds : [ecx+0x258]
        mov ecx, dword ptr ss : [esp+8]
        mov word ptr ds : [ecx], ax
        ret 8
        UNREACHABLE_TRAP(0x6298440)
    }
}

#undef public_6298451
#undef public_6298453
