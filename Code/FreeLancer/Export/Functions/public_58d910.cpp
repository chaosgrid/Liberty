#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d910);

#define public_58d952 _public_58d952

PROC_DECLARE(0x58d910, internal_58d910, public_58d910);
extern "C" NAKED register_t __cdecl internal_58d910()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x55C], 2
        jne public_58d952
        mov eax, dword ptr ds : [ecx+0x564]
        test eax, eax
        je public_58d952
        mov edx, dword ptr ds : [ecx+0x568]
        sub edx, eax
        mov eax, 0x51EB851F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+4]
        cmp eax, edx
        jae public_58d952
        mov edx, dword ptr ds : [ecx+0x564]
        imul eax, 0x64
        add eax, edx
        ret 4
        public_58d952 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x58d910)
    }
}

#undef public_58d952
