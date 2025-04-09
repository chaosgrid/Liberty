#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402500);
CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_40d760);
CLANG_FORWARD_PROC_SYMBOL(public_40d780);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_591460);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4069c5 _public_4069c5
#define public_4069cd _public_4069cd
#define public_4069d8 _public_4069d8
#define public_4069e0 _public_4069e0
#define public_406a01 _public_406a01
#define public_406a16 _public_406a16
#define public_406a73 _public_406a73
#define public_406a9e _public_406a9e
#define public_406ac3 _public_406ac3

PROC_DECLARE(0x406970, internal_406970, public_406970);
extern "C" NAKED register_t __cdecl internal_406970()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        lea ebp, ds:[edi+0x20]
        lea ebx, ds:[esi+0x20]
        cmp ebx, ebp
        mov dword ptr ds : [esi+0x1C], ecx
        je public_406ac3
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_4069c5
        xor edx, edx
        jmp public_4069cd
        public_4069c5 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 3
        public_4069cd : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_4069d8
        xor eax, eax
        jmp public_4069e0
        public_4069d8 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 3
        public_4069e0 : nop
        cmp edx, eax
        ja public_406a16
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_591460
        mov edx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push edx
        push eax
        mov ecx, ebx
        call public_53aaa0
        public_406a01 : nop
        mov ecx, ebp
        call public_5995f0
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [ebx+8], edx
        jmp public_406ac3
        public_406a16 : nop
        mov ecx, ebx
        call public_40d760
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_5995f0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        ja public_406a73
        mov eax, dword ptr ds : [edi+0x24]
        lea ebp, ds:[edi+0x20]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], eax
        call public_5995f0
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ds:[ecx+eax*8]
        push edx
        push eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_591460
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_40d780
        jmp public_406a01
        public_406a73 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_53aaa0
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        lea ebp, ds:[edi+0x20]
        add esp, 4
        mov ecx, ebp
        call public_5995f0
        test eax, eax
        jge public_406a9e
        xor eax, eax
        public_406a9e : nop
        shl eax, 3
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_40d780
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        public_406ac3 : nop
        lea ecx, ds:[edi+0x30]
        push ecx
        lea ecx, ds:[esi+0x30]
        call public_5595c0
        lea edx, ds:[edi+0x40]
        push edx
        lea ecx, ds:[esi+0x40]
        call public_40d4b0
        mov cl, byte ptr ds : [esi+0x50]
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        mov edx, dword ptr ss : [esp+0x10]
        and al, 4
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 0x10
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov ecx, dword ptr ds : [edi+0x50]
        mov dword ptr ds : [esi+0x50], ecx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+4]
        push eax
        lea eax, ds:[esi+4]
        push eax
        call public_402500
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        pop edi
        mov dword ptr ds : [esi+0xC], edx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x406970)
    }
}

#undef public_4069c5
#undef public_4069cd
#undef public_4069d8
#undef public_4069e0
#undef public_406a01
#undef public_406a16
#undef public_406a73
#undef public_406a9e
#undef public_406ac3
