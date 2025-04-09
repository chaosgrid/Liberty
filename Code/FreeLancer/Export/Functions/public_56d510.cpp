#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_5628e0);
CLANG_FORWARD_PROC_SYMBOL(public_56d510);
CLANG_FORWARD_PROC_SYMBOL(public_591ae0);
CLANG_FORWARD_PROC_SYMBOL(public_591e30);
CLANG_FORWARD_PROC_SYMBOL(public_594580);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2dfa);

PROC_DECLARE(0x56d510, internal_56d510, public_56d510);
extern "C" NAKED register_t __cdecl internal_56d510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2dfa @0x56d512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2dfa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x8C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], esi
        call public_594580
        push eax
        mov ecx, esi
        call public_591ae0
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        call public_591e30
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov eax, dword ptr ds : [public_5c62c4]
        mov ecx, dword ptr ds : [public_5c62dc]
        push eax
        push ecx
        push 8
        push 0xC
        lea edx, ds:[esi+0x11C]
        push edx
        mov byte ptr ss : [esp+0x34], 0xE
        call public_5b7fba
        mov al, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x17C]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xF
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x188]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x10
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x194]
        mov byte ptr ss : [esp+0x20], 0x11
        mov byte ptr ds : [edi], dl
        push ebx
        push ebx
        mov ecx, edi
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1A0]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x12
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1AC]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x13
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1B8]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x14
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1C4]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x15
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1D0]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x16
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1DC]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x17
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1E8]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x18
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x1F4]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x19
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x200]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x1A
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x20C]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x1B
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x218]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x1C
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x224]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x1D
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x230]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x1E
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x23C]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x1F
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x20], 0x20
        lea edi, ds:[esi+0x248]
        mov dl, byte ptr ss : [esp+0xE]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0xE]
        lea edi, ds:[esi+0x254]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x21
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0xE]
        lea ecx, ds:[esi+0x260]
        push edx
        mov byte ptr ss : [esp+0x24], 0x22
        call public_46ba60
        lea ecx, ds:[esi+0x2A4]
        mov byte ptr ss : [esp+0x20], 0x23
        call public_5628e0
        lea edi, ds:[esi+0x2D0]
        lea eax, ss:[esp+0xF]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edi
        call public_5a6900
        lea ecx, ss:[esp+0xE]
        push ecx
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x24], 0x24
        call public_5a6900
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov byte ptr ds : [esi+0x294], bl
        mov dword ptr ds : [esi], offset public_5e2bdc
        mov dword ptr ds : [esi+0x7C], offset public_5e2bc4
        mov dword ptr ds : [esi+0x80], offset public_5e2bbc
        mov dword ptr ds : [esi+0x2CC], 3
        mov dword ptr ds : [esi+0x298], 2
        mov dword ptr ds : [esi+0x2C8], 0xFFFFFFFF
        mov edx, 0x1010101
        mov dword ptr ds : [esi+0x29C], edx
        mov dword ptr ds : [esi+0x2A0], edx
        mov dword ptr ds : [esi+0xEC], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x56d510)
    }
}
