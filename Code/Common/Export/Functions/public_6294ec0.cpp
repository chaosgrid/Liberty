#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f2c0);

PROC_DECLARE(0x6294ec0, internal_6294ec0, public_6294ec0);
extern "C" NAKED register_t __cdecl internal_6294ec0()
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
        push 0x800000
        mov ecx, esi
        call public_629f2c0
        mov dword ptr ds : [esi], offset public_639cb8c
        mov eax, esi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6294ec0)
    }
}
