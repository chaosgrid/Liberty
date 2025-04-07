#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4f10);

#define public_62c114b _public_62c114b

PROC_DECLARE(0x62c1130, internal_62c1130, public_62c1130);
extern "C" NAKED register_t __cdecl internal_62c1130()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62c114b
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62c114b
        jmp public_62b4f10
        public_62c114b : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x62c1130)
    }
}

#undef public_62c114b
