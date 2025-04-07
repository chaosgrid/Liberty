#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611e50);

#define public_661476f _public_661476f

PROC_DECLARE(0x6614750, internal_6614750, public_6614750);
extern "C" NAKED register_t __cdecl internal_6614750()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        cmp ecx, 0xFFFFFFFF
        je public_661476f
        test ecx, ecx
        je public_661476f
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push edx
        call public_6611e50
        public_661476f : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6614750)
    }
}

#undef public_661476f
