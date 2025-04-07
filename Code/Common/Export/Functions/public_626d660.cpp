#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);

PROC_DECLARE(0x626d660, internal_626d660, public_626d660);
extern "C" NAKED register_t __cdecl internal_626d660()
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
        mov cl, byte ptr ds : [edi+0x60]
        mov byte ptr ds : [esi+0x60], cl
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], edx
        mov eax, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], eax
        mov cl, byte ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi], offset public_6399870
        mov byte ptr ds : [esi+0x6C], cl
        mov dl, byte ptr ds : [edi+0x70]
        mov byte ptr ds : [esi+0x70], dl
        mov al, byte ptr ds : [edi+0x71]
        mov byte ptr ds : [esi+0x71], al
        pop edi
        mov dword ptr ds : [esi], offset public_639994c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626d660)
    }
}
