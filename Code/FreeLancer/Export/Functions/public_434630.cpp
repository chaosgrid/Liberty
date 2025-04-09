#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434310);
CLANG_FORWARD_PROC_SYMBOL(public_434630);

#define public_434646 _public_434646

PROC_DECLARE(0x434630, internal_434630, public_434630);
extern "C" NAKED register_t __cdecl internal_434630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ss : [esp+0xC]
        or eax, 0x8200
        test cl, cl
        jne public_434646
        or eax, 0x2000
        public_434646 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xC], 1
        jmp public_434310
        UNREACHABLE_TRAP(0x434630)
    }
}

#undef public_434646
