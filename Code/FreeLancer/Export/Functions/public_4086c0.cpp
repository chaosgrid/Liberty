#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4086c0);
CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_40d760);
CLANG_FORWARD_PROC_SYMBOL(public_40d780);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_591460);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_408711 _public_408711
#define public_408719 _public_408719
#define public_408724 _public_408724
#define public_40872c _public_40872c
#define public_408740 _public_408740
#define public_408754 _public_408754
#define public_40876a _public_40876a
#define public_4087d7 _public_4087d7
#define public_408802 _public_408802
#define public_408827 _public_408827
#define public_40887c _public_40887c
#define public_4088e4 _public_4088e4
#define public_40890f _public_40890f
#define public_408931 _public_408931
#define public_408934 _public_408934

PROC_DECLARE(0x4086c0, internal_4086c0, public_4086c0);
extern "C" NAKED register_t __cdecl internal_4086c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [edi+0x14], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [ebx+0x1C]
        lea ebp, ds:[ebx+0x20]
        lea esi, ds:[edi+0x20]
        cmp esi, ebp
        mov dword ptr ds : [edi+0x1C], eax
        je public_408827
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_408711
        xor eax, eax
        jmp public_408719
        public_408711 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 3
        public_408719 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_408724
        xor edx, edx
        jmp public_40872c
        public_408724 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 3
        public_40872c : nop
        cmp eax, edx
        ja public_40876a
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edx
        je public_408754
        nop 
        lea esp, ss:[esp]
        public_408740 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_408740
        public_408754 : nop
        lea ecx, ds:[ebx+0x20]
        call public_5995f0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_408827
        public_40876a : nop
        mov ecx, esi
        call public_40d760
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_5995f0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        ja public_4087d7
        mov eax, dword ptr ds : [ebx+0x24]
        lea ebp, ds:[ebx+0x20]
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_5995f0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+eax*8]
        push edx
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_591460
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_40d780
        mov ecx, ebp
        call public_5995f0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_408827
        public_4087d7 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        lea ebp, ds:[ebx+0x20]
        add esp, 4
        mov ecx, ebp
        call public_5995f0
        test eax, eax
        jge public_408802
        xor eax, eax
        public_408802 : nop
        shl eax, 3
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_40d780
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_408827 : nop
        lea ecx, ds:[ebx+0x30]
        lea esi, ds:[edi+0x30]
        cmp esi, ecx
        je public_408934
        call public_5ad970
        mov ecx, esi
        mov ebp, eax
        call public_5ad970
        cmp ebp, eax
        ja public_40887c
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx+0x38]
        mov ecx, dword ptr ds : [ebx+0x34]
        lea ebp, ds:[ebx+0x30]
        push edx
        push eax
        push ecx
        call public_527820
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, ebp
        call public_5ad970
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_408931
        public_40887c : nop
        lea ecx, ds:[ebx+0x30]
        call public_5ad970
        mov ecx, esi
        mov ebp, eax
        call public_40d740
        cmp ebp, eax
        ja public_4088e4
        mov ecx, dword ptr ds : [ebx+0x34]
        lea ebp, ds:[ebx+0x30]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, esi
        call public_5ad970
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_527820
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_597c70
        mov ecx, ebp
        call public_5ad970
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_408934
        public_4088e4 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        lea ebp, ds:[ebx+0x30]
        add esp, 4
        mov ecx, ebp
        call public_5ad970
        test eax, eax
        jge public_40890f
        xor eax, eax
        public_40890f : nop
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_597c70
        mov dword ptr ds : [esi+0xC], eax
        public_408931 : nop
        mov dword ptr ds : [esi+8], eax
        public_408934 : nop
        lea ecx, ds:[ebx+0x40]
        push ecx
        lea ecx, ds:[edi+0x40]
        call public_40d4b0
        mov cl, byte ptr ds : [edi+0x50]
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ds : [edi+0x50], al
        mov cl, byte ptr ds : [ebx+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [edi+0x50], cl
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [edi+0x50], al
        mov cl, byte ptr ds : [ebx+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [edi+0x50], cl
        mov dl, byte ptr ds : [ebx+0x50]
        xor dl, cl
        and dl, 0x10
        xor dl, cl
        mov byte ptr ds : [edi+0x50], dl
        mov eax, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [edi+0x50], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4086c0)
    }
}

#undef public_408711
#undef public_408719
#undef public_408724
#undef public_40872c
#undef public_408740
#undef public_408754
#undef public_40876a
#undef public_4087d7
#undef public_408802
#undef public_408827
#undef public_40887c
#undef public_4088e4
#undef public_40890f
#undef public_408931
#undef public_408934
