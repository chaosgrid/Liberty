#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1c70);

PROC_DECLARE(0x626d1c0, internal_626d1c0, public_626d1c0);
extern "C" NAKED register_t __cdecl internal_626d1c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f1c70
        mov al, byte ptr ds : [edi+0x94]
        mov byte ptr ds : [esi+0x94], al
        mov cl, byte ptr ds : [edi+0x95]
        mov byte ptr ds : [esi+0x95], cl
        mov edx, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], edx
        mov eax, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], eax
        mov ecx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], ecx
        mov edx, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [esi+0xA4], edx
        mov eax, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [esi+0xA8], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626d1c0)
    }
}
