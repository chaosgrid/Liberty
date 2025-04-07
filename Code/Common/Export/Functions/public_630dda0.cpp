#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630de20);

PROC_DECLARE(0x630dda0, internal_630dda0, public_630dda0);
extern "C" NAKED register_t __cdecl internal_630dda0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        mov esi, ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi]
        push ecx
        mov ecx, esi
        call public_630de20
        mov dl, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [esi+0x10], dl
        mov al, byte ptr ds : [edi+0xF]
        mov byte ptr ds : [esi+0xF], al
        mov cl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], cl
        mov dl, byte ptr ds : [edi+9]
        mov byte ptr ds : [esi+9], dl
        mov al, byte ptr ds : [edi+0xA]
        mov byte ptr ds : [esi+0xA], al
        mov cl, byte ptr ds : [edi+0xB]
        mov byte ptr ds : [esi+0xB], cl
        mov dl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [esi+0xC], dl
        mov al, byte ptr ds : [edi+0xD]
        mov byte ptr ds : [esi+0xD], al
        mov cl, byte ptr ds : [edi+0xE]
        mov byte ptr ds : [esi+0xE], cl
        mov dl, byte ptr ds : [edi+0x11]
        mov byte ptr ds : [esi+0x11], dl
        mov al, byte ptr ds : [edi+0x12]
        mov byte ptr ds : [esi+0x12], al
        mov cl, byte ptr ds : [edi+0x13]
        mov byte ptr ds : [esi+0x13], cl
        mov dl, byte ptr ds : [edi+0x14]
        mov byte ptr ds : [esi+0x14], dl
        mov al, byte ptr ds : [edi+0x15]
        mov byte ptr ds : [esi+0x15], al
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630dda0)
    }
}
