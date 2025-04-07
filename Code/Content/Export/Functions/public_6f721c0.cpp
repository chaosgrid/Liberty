#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e290);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f721c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faffb3);

PROC_DECLARE(0x6f721c0, internal_6f721c0, public_6f721c0);
extern "C" NAKED register_t __cdecl internal_6f721c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faffb3 @0x6f721c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faffb3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov eax, dword ptr ds : [public_6fb3064]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x48], edx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ss : [esp+8], esi
        mov byte ptr ds : [esi+0x50], al
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov cl, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ds : [esi+0x60], cl
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dl, byte ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [esp+0x1C]
        lea ecx, ds:[esi+0x70]
        mov byte ptr ss : [esp+0x14], 1
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f4dae0
        mov cl, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x84], ebx
        mov byte ptr ds : [esi+0x88], cl
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], ebx
        mov dl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x98], dl
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov al, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0xA8], al
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov cl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0xB8], cl
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dl, byte ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [esp+0x1C]
        lea ecx, ds:[esi+0xC8]
        mov byte ptr ss : [esp+0x14], 6
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f2e290
        mov cl, byte ptr ss : [esp+0x1C]
        push 0xC
        mov byte ptr ss : [esp+0x18], 7
        mov byte ptr ds : [esi+0xDC], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0xE0], eax
        mov dword ptr ds : [esi+0xE4], ebx
        mov dl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0xE8], dl
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov al, byte ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x1C]
        lea ecx, ds:[esi+0xF8]
        mov byte ptr ss : [esp+0x14], 9
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f4dae0
        mov al, byte ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x10C], al
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x114], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov dword ptr ds : [esi+0x120], ebx
        mov byte ptr ds : [esi+0x11C], 1
        mov dword ptr ds : [esi], offset public_6fb93c4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f721c0)
    }
}
