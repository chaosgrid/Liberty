#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdf50);
CLANG_FORWARD_PROC_SYMBOL(public_6d46ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62fe5);

PROC_DECLARE(0x6d46ab0, internal_6d46ab0, public_6d46ab0);
extern "C" NAKED register_t __cdecl internal_6d46ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62fe5 @0x6d46ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62fe5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x200]
        xor ebx, ebx
        push ebx
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_6d64b58]
        mov dl, byte ptr ss : [esp+0xF]
        lea ecx, ds:[esi+0x210]
        push ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6d64b58]
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x244]
        push ebx
        mov dword ptr ds : [esi+0x240], 0x3F800000
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_6d64880]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x250]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        call dword ptr ds : [public_6d643cc]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x260]
        push ebx
        mov dword ptr ds : [esi+0x25C], 0x3F800000
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [edi], dl
        call dword ptr ds : [public_6d64880]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x26C]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_6d643cc]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x2B8]
        mov byte ptr ss : [esp+0x1C], 5
        call dword ptr ds : [public_6d644a8]
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ds : [esi+0x2C0], cl
        mov dword ptr ds : [esi+0x2C4], ebx
        mov dword ptr ds : [esi+0x2C8], ebx
        mov dword ptr ds : [esi+0x2CC], ebx
        mov dword ptr ds : [esi+0x2D4], ebx
        mov dword ptr ds : [esi+0x2D8], ebx
        mov dword ptr ds : [esi+0x2DC], ebx
        mov dword ptr ds : [esi+0x2E0], ebx
        mov dword ptr ds : [esi+0x304], ebx
        mov byte ptr ss : [esp+0x1C], 6
        mov dword ptr ds : [esi+0x308], ebx
        mov byte ptr ds : [esi+0x30C], bl
        lea ecx, ds:[esi+0x360]
        mov dword ptr ds : [esi+0x32C], ebx
        mov dword ptr ds : [esi+0x330], ebx
        mov dword ptr ds : [esi+0x334], ebx
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        call dword ptr ds : [public_6d643c4]
        mov dl, byte ptr ss : [esp+0xF]
        lea ecx, ds:[esi+0x364]
        push ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6d64b74]
        mov al, byte ptr ss : [esp+0xF]
        push 0x20
        mov byte ptr ss : [esp+0x20], 7
        mov byte ptr ds : [esi+0x374], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x378], eax
        mov dword ptr ds : [esi+0x37C], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x384]
        push 1
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        mov byte ptr ds : [edi+1], dl
        mov byte ptr ds : [edi+0xC], bl
        call public_6cfdf50
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [edi+8]
        push ebx
        push edx
        mov ecx, edi
        call public_6cfdf50
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        mov dword ptr ds : [esi+0x284], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov dword ptr ds : [esi+0x27C], ebx
        mov dword ptr ds : [esi+0x280], ebx
        mov dword ptr ds : [esi+0x230], ebx
        mov dword ptr ds : [esi+0x234], ebx
        mov dword ptr ds : [esi+0x238], ebx
        mov dword ptr ds : [esi+0x23C], ebx
        mov dword ptr ds : [esi+0x224], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov byte ptr ds : [esi], bl
        mov dword ptr ds : [esi+0x220], ebx
        mov dword ptr ds : [esi+0x2BC], ebx
        pop edi
        mov dword ptr ds : [esi+0x2D0], 0xFFFFFFFF
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d46ab0)
    }
}
