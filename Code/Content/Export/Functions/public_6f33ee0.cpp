#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33ee0);

#define public_6f33f0d _public_6f33f0d

PROC_DECLARE(0x6f33ee0, internal_6f33ee0, public_6f33ee0);
extern "C" NAKED register_t __cdecl internal_6f33ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x19C], edx
        mov edx, dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov dword ptr ds : [ecx+0x18C], edx
        je public_6f33f0d
        mov dword ptr ds : [ecx+0x188], 3
        ret 0xC
        public_6f33f0d : nop
        mov dword ptr ds : [ecx+0x188], 2
        ret 0xC
        UNREACHABLE_TRAP(0x6f33ee0)
    }
}

#undef public_6f33f0d
