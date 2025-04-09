#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_571280);
CLANG_FORWARD_JUMP_SYMBOL(public_5c351b);

PROC_DECLARE(0x571280, internal_571280, public_571280);
extern "C" NAKED register_t __cdecl internal_571280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c351b @0x571282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c351b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_5cfd94
        mov dword ptr ss : [ebp+4], 1
        mov al, byte ptr ss : [esp+0x28]
        lea esi, ss:[ebp+8]
        xor ebx, ebx
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_5c6fb8]
        mov cl, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], cl
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dl, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x44]
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], 0xFFFFFFFE
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov byte ptr ds : [esi+0x3C], bl
        mov byte ptr ds : [esi+0x3D], bl
        mov byte ptr ds : [esi+0x3E], bl
        mov dword ptr ds : [esi+0x40], ebx
        push ebx
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_5c6fb8]
        mov al, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x54]
        push ebx
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_5c6fb8]
        mov dl, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x64]
        push ebx
        mov byte ptr ss : [esp+0x24], 4
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_5c7084]
        mov al, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x74]
        push ebx
        mov byte ptr ss : [esp+0x24], 5
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_5c7084]
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov byte ptr ds : [esi+0x94], bl
        mov byte ptr ds : [esi+0x95], 1
        mov byte ptr ds : [esi+0x96], 1
        mov dword ptr ds : [esi+0x98], ebx
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp], offset public_5e2e64
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        mov byte ptr ss : [esp+0x28], 6
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        lea edx, ds:[edi+0x18]
        mov dword ptr ds : [esi+0x14], ecx
        push edx
        lea ecx, ds:[esi+0x18]
        call public_5595c0
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], ecx
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], edx
        mov eax, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], eax
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x38], ecx
        mov dl, byte ptr ds : [edi+0x3C]
        mov byte ptr ds : [esi+0x3C], dl
        mov al, byte ptr ds : [edi+0x3D]
        mov byte ptr ds : [esi+0x3D], al
        mov cl, byte ptr ds : [edi+0x3E]
        mov byte ptr ds : [esi+0x3E], cl
        mov edx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [esi+0x40], edx
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x44]
        push edx
        lea ecx, ds:[esi+0x44]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x54]
        push edx
        lea ecx, ds:[esi+0x54]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x64]
        push edx
        lea ecx, ds:[esi+0x64]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x74]
        push edx
        lea ecx, ds:[esi+0x74]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], eax
        mov ecx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], ecx
        mov edx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], edx
        mov eax, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], eax
        mov cl, byte ptr ds : [edi+0x94]
        mov byte ptr ds : [esi+0x94], cl
        mov dl, byte ptr ds : [edi+0x95]
        mov byte ptr ds : [esi+0x95], dl
        mov al, byte ptr ds : [edi+0x96]
        mov byte ptr ds : [esi+0x96], al
        mov ecx, dword ptr ds : [edi+0x98]
        pop edi
        mov dword ptr ds : [esi+0x98], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x571280)
    }
}
