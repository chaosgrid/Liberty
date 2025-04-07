#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62788b0);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

PROC_DECLARE(0x62759b0, internal_62759b0, public_62759b0);
extern "C" NAKED register_t __cdecl internal_62759b0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        add ecx, 0x154
        call public_62788b0
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        call public_6334400
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea edx, ds:[ebx+4]
        push edx
        call public_6334400
        mov eax, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+8], eax
        mov al, byte ptr ss : [esp+0x38]
        lea edi, ds:[ebx+0xC]
        mov ecx, 0xC
        rep movsd
        mov cl, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [ebx+0x3D], dl
        mov dl, byte ptr ss : [esp+0x40]
        mov byte ptr ds : [ebx+0x3E], al
        mov al, byte ptr ss : [esp+0x44]
        mov byte ptr ds : [ebx+0x3C], cl
        mov cl, byte ptr ss : [esp+0x3C]
        mov byte ptr ds : [ebx+0x40], dl
        mov edx, dword ptr ss : [esp+0x4C]
        mov byte ptr ds : [ebx+0x41], al
        mov byte ptr ds : [ebx+0x3F], cl
        mov ecx, dword ptr ss : [esp+0x48]
        push edx
        lea eax, ds:[ebx+0x48]
        push eax
        mov dword ptr ds : [ebx+0x44], ecx
        call public_6334400
        mov ecx, dword ptr ss : [esp+0x58]
        mov dl, byte ptr ss : [esp+0x5C]
        add esp, 0x18
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x4C], ecx
        mov byte ptr ds : [ebx+0x50], dl
        pop ebx
        ret 0x38
        UNREACHABLE_TRAP(0x62759b0)
    }
}
