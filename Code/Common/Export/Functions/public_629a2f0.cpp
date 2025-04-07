#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62992b0);
CLANG_FORWARD_PROC_SYMBOL(public_629a2f0);

PROC_DECLARE(0x629a2f0, internal_629a2f0, public_629a2f0);
extern "C" NAKED register_t __cdecl internal_629a2f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push eax
        push 0x40
        mov ecx, esi
        call public_62992b0
        mov dword ptr ds : [esi], offset public_639d074
        mov eax, esi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x629a2f0)
    }
}
