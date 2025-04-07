#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ad70);
CLANG_FORWARD_PROC_SYMBOL(public_629f2c0);

PROC_DECLARE(0x629f2c0, internal_629f2c0, public_629f2c0);
extern "C" NAKED register_t __cdecl internal_629f2c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_629ad70
        mov dword ptr ds : [esi], offset public_639ca04
        mov eax, esi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x629f2c0)
    }
}
