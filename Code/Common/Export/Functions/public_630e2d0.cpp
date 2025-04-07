#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630de20);

PROC_DECLARE(0x630e2d0, internal_630e2d0, public_630e2d0);
extern "C" NAKED register_t __cdecl internal_630e2d0()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], eax
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], al
        mov byte ptr ds : [esi+0xA], al
        mov byte ptr ds : [esi+0xB], al
        mov byte ptr ds : [esi+0xC], al
        mov byte ptr ds : [esi+0xD], al
        mov byte ptr ds : [esi+0xE], al
        mov byte ptr ds : [esi+0xF], al
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ds : [esi+0x11], al
        mov byte ptr ds : [esi+0x12], al
        mov byte ptr ds : [esi+0x13], al
        mov byte ptr ds : [esi+0x14], al
        mov byte ptr ds : [esi+0x15], al
        mov eax, dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+4], eax
        call public_630de20
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630e2d0)
    }
}
