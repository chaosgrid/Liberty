#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4660);

#define public_65f1f9a _public_65f1f9a

PROC_DECLARE(0x65f1f50, internal_65f1f50, public_65f1f50);
extern "C" NAKED register_t __cdecl internal_65f1f50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f1f9a
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
        call public_65f4660
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        je public_65f1f9a
        xor eax, eax
        ret 0x30
        public_65f1f9a : nop
        or eax, 0xFFFFFFFF
        ret 0x30
        UNREACHABLE_TRAP(0x65f1f50)
    }
}

#undef public_65f1f9a
