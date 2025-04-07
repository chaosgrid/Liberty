#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec680);
CLANG_FORWARD_PROC_SYMBOL(public_6f50ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8bb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf40d);

PROC_DECLARE(0x6f50ff0, internal_6f50ff0, public_6f50ff0);
extern "C" NAKED register_t __cdecl internal_6f50ff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf40d @0x6f50ff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf40d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+2]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+8], al
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov cl, byte ptr ss : [esp+0xE]
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x1C], cl
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dl, byte ptr ss : [esp+0xE]
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x30], dl
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov al, byte ptr ss : [esp+0xE]
        mov dword ptr ds : [esi+0x40], ebx
        mov byte ptr ds : [esi+0x44], al
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov cl, byte ptr ss : [esp+0xE]
        mov dword ptr ds : [esi+0x54], ebx
        mov byte ptr ds : [esi+0x58], cl
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        lea edx, ss:[esp+0xE]
        lea ecx, ds:[esi+0xA4]
        push edx
        mov byte ptr ss : [esp+0x20], 4
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        call public_6ead6a0
        lea eax, ss:[esp+0xF]
        lea ecx, ds:[esi+0xB4]
        push eax
        mov byte ptr ss : [esp+0x20], 5
        call public_6ead6a0
        lea edx, ss:[esp+0xE]
        lea ecx, ds:[esi+0xC4]
        push edx
        mov byte ptr ss : [esp+0x20], 6
        call public_6ead6a0
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0xD4]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 7
        mov byte ptr ds : [edi], al
        call public_6fa8bb0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0xE0]
        push ebx
        mov byte ptr ss : [esp+0x20], 8
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        call public_6f93790
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0xF]
        push edx
        lea ecx, ds:[esi+0xEC]
        mov byte ptr ss : [esp+0x20], 9
        call public_6eec680
        xor eax, eax
        lea edi, ds:[esi+0x7C]
        mov ecx, 8
        rep stosd
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x98], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x78], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f50ff0)
    }
}
