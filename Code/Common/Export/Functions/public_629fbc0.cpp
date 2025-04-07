#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ad70);
CLANG_FORWARD_PROC_SYMBOL(public_629fbc0);

PROC_DECLARE(0x629fbc0, internal_629fbc0, public_629fbc0);
extern "C" NAKED register_t __cdecl internal_629fbc0()
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
        push 0x200000
        mov ecx, esi
        call public_629ad70
        mov dword ptr ds : [esi], offset public_639cb2c
        mov eax, esi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x629fbc0)
    }
}
