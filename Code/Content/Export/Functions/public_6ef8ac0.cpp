#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8ac0);

#define public_6ef8ac8 _public_6ef8ac8

PROC_DECLARE(0x6ef8ac0, internal_6ef8ac0, public_6ef8ac0);
extern "C" NAKED register_t __cdecl internal_6ef8ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ef8ac8
        ret 
        public_6ef8ac8 : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ef8ac0)
    }
}

#undef public_6ef8ac8
