#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86c80);

PROC_DECLARE(0x6f86c80, internal_6f86c80, public_6f86c80);
extern "C" NAKED register_t __cdecl internal_6f86c80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6fb3118]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi], offset public_6fbc80c
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f86c80)
    }
}
