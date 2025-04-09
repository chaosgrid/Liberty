#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d540);

#define public_58d55b _public_58d55b

PROC_DECLARE(0x58d540, internal_58d540, public_58d540);
extern "C" NAKED register_t __cdecl internal_58d540()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x4D8]
        test al, al
        je public_58d55b
        mov eax, dword ptr ds : [ecx+0x4DC]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 4
        public_58d55b : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x58d540)
    }
}

#undef public_58d55b
