#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);

PROC_DECLARE(0x626fda0, internal_626fda0, public_626fda0);
extern "C" NAKED register_t __cdecl internal_626fda0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f01f0
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        mov ecx, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0x60], ecx
        mov edx, dword ptr ds : [edi+0x64]
        pop edi
        mov dword ptr ds : [esi+0x64], edx
        mov dword ptr ds : [esi], offset public_6399d6c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626fda0)
    }
}
