#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ece0);

#define public_6621aa3 _public_6621aa3

PROC_DECLARE(0x6621a80, internal_6621a80, public_6621a80);
extern "C" NAKED register_t __cdecl internal_6621a80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621aa3
        test ecx, ecx
        je public_6621aa3
        mov al, byte ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        and al, 1
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call public_661ece0
        public_6621aa3 : nop
        ret 0x14
        UNREACHABLE_TRAP(0x6621a80)
    }
}

#undef public_6621aa3
