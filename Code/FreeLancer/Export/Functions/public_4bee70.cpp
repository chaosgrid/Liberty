#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bee70);

PROC_DECLARE(0x4bee70, internal_4bee70, public_4bee70);
extern "C" NAKED register_t __cdecl internal_4bee70()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [esi+0x331]
        mov bl, dl
        shl al, 2
        xor bl, al
        and bl, 4
        xor bl, dl
        mov dl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x331], bl
        mov esi, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [esi+0x331]
        mov byte ptr ss : [esp+0x10], bl
        shl dl, 3
        mov bl, dl
        mov byte ptr ss : [esp+0xB], dl
        mov dl, byte ptr ss : [esp+0x10]
        xor bl, dl
        and bl, 8
        xor bl, dl
        mov byte ptr ds : [esi+0x331], bl
        mov esi, dword ptr ds : [ecx+0xC]
        mov dl, byte ptr ds : [esi+0x331]
        mov bl, dl
        xor bl, al
        and bl, 4
        xor bl, dl
        mov byte ptr ds : [esi+0x331], bl
        mov ecx, dword ptr ds : [ecx+0xC]
        mov al, byte ptr ds : [ecx+0x331]
        mov bl, byte ptr ss : [esp+0xB]
        mov dl, al
        xor dl, bl
        and dl, 8
        xor dl, al
        pop esi
        mov byte ptr ds : [ecx+0x331], dl
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4bee70)
    }
}
