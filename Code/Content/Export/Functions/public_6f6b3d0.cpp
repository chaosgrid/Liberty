#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b3d0);

#define public_6f6b3e1 _public_6f6b3e1
#define public_6f6b3e8 _public_6f6b3e8

PROC_DECLARE(0x6f6b3d0, internal_6f6b3d0, public_6f6b3d0);
extern "C" NAKED register_t __cdecl internal_6f6b3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jae public_6f6b3e1
        mov al, 1
        ret 0x18
        public_6f6b3e1 : nop
        jbe public_6f6b3e8
        xor al, al
        ret 0x18
        public_6f6b3e8 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ss : [esp+0x14]
        sbb eax, eax
        neg eax
        ret 0x18
        UNREACHABLE_TRAP(0x6f6b3d0)
    }
}

#undef public_6f6b3e1
#undef public_6f6b3e8
