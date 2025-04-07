#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2940);
CLANG_FORWARD_PROC_SYMBOL(public_5a2a40);

PROC_DECLARE(0x5a2940, internal_5a2940, public_5a2940);
extern "C" NAKED register_t __cdecl internal_5a2940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        push ecx
        mov ecx, offset public_67dd68
        call public_5a2a40
        ret 
        UNREACHABLE_TRAP(0x5a2940)
    }
}
