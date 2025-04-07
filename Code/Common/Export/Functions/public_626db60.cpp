#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);

PROC_DECLARE(0x626db60, internal_626db60, public_626db60);
extern "C" NAKED register_t __cdecl internal_626db60()
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
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], ecx
        mov edx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], edx
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        mov cl, byte ptr ds : [edi+0x84]
        mov byte ptr ds : [esi+0x84], cl
        mov edx, dword ptr ds : [edi+0x88]
        pop edi
        mov dword ptr ds : [esi+0x88], edx
        mov dword ptr ds : [esi], offset public_6399aac
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626db60)
    }
}
