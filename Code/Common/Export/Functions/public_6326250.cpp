#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63047d0);
CLANG_FORWARD_PROC_SYMBOL(public_6326250);

PROC_DECLARE(0x6326250, internal_6326250, public_6326250);
extern "C" NAKED register_t __cdecl internal_6326250()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea eax, ds:[esi+0xC]
        push 0x80
        push eax
        mov dword ptr ds : [esi], eax
        call public_63047d0
        mov edx, dword ptr ss : [esp+0x18]
        mov al, byte ptr ss : [esp+0x1C]
        mov cl, byte ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], edx
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+8], al
        add esp, 0xC
        mov byte ptr ds : [esi+9], cl
        mov byte ptr ds : [esi+0xA], dl
        mov eax, esi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x6326250)
    }
}
