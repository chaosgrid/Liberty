#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31430);
CLANG_FORWARD_PROC_SYMBOL(public_6f862e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0b3e);

PROC_DECLARE(0x6f862e0, internal_6f862e0, public_6f862e0);
extern "C" NAKED register_t __cdecl internal_6f862e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0b3e @0x6f862e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0b3e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3030]
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea ecx, ds:[esi+0x38]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        call ebp
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x3C]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ds : [edi], al
        call public_6f93790
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x54]
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+0x48], bl
        mov byte ptr ds : [esi+0x49], bl
        mov dword ptr ds : [esi+0x4C], ebx
        mov byte ptr ds : [esi+0x50], bl
        call ebp
        mov cl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x58]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        call public_6f93790
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x64]
        mov byte ptr ss : [esp+0x20], 1
        call ebp
        mov dl, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [esi+0x68], ebx
        mov byte ptr ds : [esi+0x6C], dl
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], 0x40E00000
        mov dword ptr ds : [esi], offset public_6fb60a8
        mov edi, 2
        lea ecx, ds:[esi+0x88]
        mov dword ptr ss : [esp+0x20], edi
        call public_6f31430
        mov al, byte ptr ss : [esp+0x13]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD8], edi
        mov dword ptr ds : [esi+0xDC], 1
        mov byte ptr ds : [esi+0xE0], al
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6fbc7a0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f862e0)
    }
}
