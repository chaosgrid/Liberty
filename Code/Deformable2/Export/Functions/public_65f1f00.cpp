#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f41d0);

#define public_65f1f4a _public_65f1f4a

PROC_DECLARE(0x65f1f00, internal_65f1f00, public_65f1f00);
extern "C" NAKED register_t __cdecl internal_65f1f00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f1f4a
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        call public_65f41d0
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        je public_65f1f4a
        xor eax, eax
        ret 0x30
        public_65f1f4a : nop
        or eax, 0xFFFFFFFF
        ret 0x30
        UNREACHABLE_TRAP(0x65f1f00)
    }
}

#undef public_65f1f4a
