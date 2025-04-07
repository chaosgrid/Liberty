#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f59480);

#define public_6f594b4 _public_6f594b4

PROC_DECLARE(0x6f59480, internal_6f59480, public_6f59480);
extern "C" NAKED register_t __cdecl internal_6f59480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_6f594b4
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edx
        pop esi
        jae public_6f594b4
        mov edx, dword ptr ds : [ecx+0xC]
        imul eax, 0x38
        add eax, edx
        ret 4
        public_6f594b4 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f59480)
    }
}

#undef public_6f594b4
