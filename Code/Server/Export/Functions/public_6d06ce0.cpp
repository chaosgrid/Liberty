#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f660);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d611f3);

PROC_DECLARE(0x6d06ce0, internal_6d06ce0, public_6d06ce0);
extern "C" NAKED register_t __cdecl internal_6d06ce0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d611f3 @0x6d06ce2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d611f3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        lea edi, ds:[esi+8]
        push ebx
        mov dword ptr ds : [esi], offset public_6d67cec
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ds : [edi], al
        call public_6d0f3e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        push 0x20
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi+0x14], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov dl, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [esi+0x20], ebx
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ebp, offset public_6d67ce4
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov byte ptr ds : [esi+0x40], 1
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov byte ptr ds : [esi+0x54], 1
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov byte ptr ds : [esi+0x68], 1
        mov dword ptr ds : [esi+0x5C], ebp
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov byte ptr ds : [esi+0x7C], 1
        mov dword ptr ds : [esi+0x70], ebp
        lea edi, ds:[esi+0x84]
        push 1
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 6
        call public_6d0f660
        mov dword ptr ds : [edi], ebp
        lea edi, ds:[esi+0x98]
        push 1
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 7
        call public_6d0f660
        mov dword ptr ds : [edi], ebp
        lea edi, ds:[esi+0xAC]
        push 1
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        call public_6d0f660
        mov dword ptr ds : [edi], ebp
        lea edi, ds:[esi+0xC0]
        push 1
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 9
        call public_6d0f660
        mov dword ptr ds : [edi], ebp
        lea edi, ds:[esi+0xD4]
        push 1
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xA
        call public_6d0f660
        mov dword ptr ds : [edi], ebp
        lea ecx, ds:[esi+0xE8]
        mov byte ptr ss : [esp+0x20], 0xB
        call public_6d06e40
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov byte ptr ds : [esi+0xFC], bl
        mov dword ptr ds : [esi], offset public_6d67cd0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d06ce0)
    }
}
