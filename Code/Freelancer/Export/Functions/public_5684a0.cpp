#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5684a0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2448);

#define public_568511 _public_568511
#define public_568519 _public_568519
#define public_56851f _public_56851f

PROC_DECLARE(0x5684a0, internal_5684a0, public_5684a0);
extern "C" NAKED register_t __cdecl internal_5684a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2448 @0x5684a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2448
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov al, byte ptr ds : [ecx+0x94]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea esi, ds:[ecx+0x94]
        xor ebp, ebp
        push ebp
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], ebp
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_5c6fb8]
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], ecx
        mov dl, byte ptr ds : [esi+0x18]
        lea ebx, ds:[edi+0x18]
        mov byte ptr ds : [ebx], dl
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        jne public_568511
        xor eax, eax
        jmp public_568519
        public_568511 : nop
        mov eax, dword ptr ds : [esi+0x20]
        sub eax, ecx
        sar eax, 2
        public_568519 : nop
        cmp eax, ebp
        jge public_56851f
        xor eax, eax
        public_56851f : nop
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_597c70
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+0x2C], edx
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x34], ecx
        mov edx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x38], edx
        mov al, byte ptr ds : [esi+0x3C]
        mov byte ptr ds : [edi+0x3C], al
        mov cl, byte ptr ds : [esi+0x3D]
        mov byte ptr ds : [edi+0x3D], cl
        mov dl, byte ptr ds : [esi+0x3E]
        mov byte ptr ds : [edi+0x3E], dl
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [edi+0x40], eax
        mov cl, byte ptr ds : [esi+0x44]
        lea ebp, ds:[esi+0x44]
        lea ebx, ds:[edi+0x44]
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 1
        call dword ptr ds : [public_5c6fb8]
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c7060]
        mov cl, byte ptr ds : [esi+0x54]
        lea ebp, ds:[esi+0x54]
        lea ebx, ds:[edi+0x54]
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_5c6fb8]
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c7060]
        mov cl, byte ptr ds : [esi+0x64]
        lea ebp, ds:[esi+0x64]
        lea ebx, ds:[edi+0x64]
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 3
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c6f9c]
        mov cl, byte ptr ds : [esi+0x74]
        lea ebp, ds:[esi+0x74]
        lea ebx, ds:[edi+0x74]
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 4
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [edi+0x84], ecx
        mov edx, dword ptr ds : [esi+0x88]
        mov dword ptr ds : [edi+0x88], edx
        mov eax, dword ptr ds : [esi+0x8C]
        mov dword ptr ds : [edi+0x8C], eax
        mov ecx, dword ptr ds : [esi+0x90]
        mov dword ptr ds : [edi+0x90], ecx
        mov dl, byte ptr ds : [esi+0x94]
        mov byte ptr ds : [edi+0x94], dl
        mov al, byte ptr ds : [esi+0x95]
        mov byte ptr ds : [edi+0x95], al
        mov cl, byte ptr ds : [esi+0x96]
        mov byte ptr ds : [edi+0x96], cl
        mov edx, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x98], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x5684a0)
    }
}

#undef public_568511
#undef public_568519
#undef public_56851f
