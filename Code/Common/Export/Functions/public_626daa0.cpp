#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626daa0);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);

PROC_DECLARE(0x626daa0, internal_626daa0, public_626daa0);
extern "C" NAKED register_t __cdecl internal_626daa0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f03c0
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        mov cl, byte ptr ds : [edi+0x60]
        mov byte ptr ds : [esi+0x60], cl
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], edx
        mov eax, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], eax
        mov cl, byte ptr ds : [edi+0x6C]
        pop edi
        mov byte ptr ds : [esi+0x6C], cl
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626daa0)
    }
}
