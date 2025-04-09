#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5a9c30);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a9c46 _public_5a9c46
#define public_5a9c4c _public_5a9c4c
#define public_5a9c8f _public_5a9c8f
#define public_5a9c9b _public_5a9c9b
#define public_5a9cda _public_5a9cda
#define public_5a9d47 _public_5a9d47
#define public_5a9d72 _public_5a9d72
#define public_5a9d94 _public_5a9d94
#define public_5a9d97 _public_5a9d97

PROC_DECLARE(0x5a9c30, internal_5a9c30, public_5a9c30);
extern "C" NAKED register_t __cdecl internal_5a9c30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x28]
        test eax, eax
        je public_5a9c46
        mov eax, dword ptr ds : [ebx+0x98]
        test eax, eax
        jne public_5a9c4c
        public_5a9c46 : nop
        xor al, al
        pop ebx
        ret 4
        public_5a9c4c : nop
        mov eax, dword ptr ds : [public_5c705c]
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+0x94]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c7060]
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [ebx+0x14]
        lea ebp, ds:[ebx+0x18]
        lea esi, ds:[edi+0x18]
        cmp esi, ebp
        mov dword ptr ds : [edi+0x14], eax
        je public_5a9d97
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_5a9c8f
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_5a9c9b
        public_5a9c8f : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x14], eax
        public_5a9c9b : nop
        mov ecx, esi
        call public_5ad970
        cmp dword ptr ss : [esp+0x14], eax
        ja public_5a9cda
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
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
        jmp public_5a9d94
        public_5a9cda : nop
        mov ecx, esi
        call public_40d740
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_5ad970
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        ja public_5a9d47
        mov ecx, dword ptr ds : [ebx+0x1C]
        lea ebp, ds:[ebx+0x18]
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
        jmp public_5a9d97
        public_5a9d47 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        lea ebp, ds:[ebx+0x18]
        add esp, 4
        mov ecx, ebp
        call public_5ad970
        test eax, eax
        jge public_5a9d72
        xor eax, eax
        public_5a9d72 : nop
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
        public_5a9d94 : nop
        mov dword ptr ds : [esi+8], eax
        public_5a9d97 : nop
        mov ecx, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [edi+0x2C], edx
        mov eax, dword ptr ds : [ebx+0x30]
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ds : [edi+0x34], ecx
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ds : [edi+0x38], edx
        mov al, byte ptr ds : [ebx+0x3C]
        mov byte ptr ds : [edi+0x3C], al
        mov cl, byte ptr ds : [ebx+0x3D]
        mov byte ptr ds : [edi+0x3D], cl
        mov dl, byte ptr ds : [ebx+0x3E]
        mov byte ptr ds : [edi+0x3E], dl
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [edi+0x40], eax
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[ebx+0x44]
        push eax
        lea ecx, ds:[edi+0x44]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[ebx+0x54]
        push eax
        lea ecx, ds:[edi+0x54]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[ebx+0x64]
        push eax
        lea ecx, ds:[edi+0x64]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[ebx+0x74]
        push eax
        lea ecx, ds:[edi+0x74]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [ebx+0x84]
        mov dword ptr ds : [edi+0x84], ecx
        mov edx, dword ptr ds : [ebx+0x88]
        mov dword ptr ds : [edi+0x88], edx
        mov eax, dword ptr ds : [ebx+0x8C]
        mov dword ptr ds : [edi+0x8C], eax
        mov ecx, dword ptr ds : [ebx+0x90]
        mov dword ptr ds : [edi+0x90], ecx
        mov dl, byte ptr ds : [ebx+0x94]
        mov byte ptr ds : [edi+0x94], dl
        mov al, byte ptr ds : [ebx+0x95]
        mov byte ptr ds : [edi+0x95], al
        mov cl, byte ptr ds : [ebx+0x96]
        mov byte ptr ds : [edi+0x96], cl
        mov edx, dword ptr ds : [ebx+0x98]
        mov dword ptr ds : [edi+0x98], edx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a9c30)
    }
}

#undef public_5a9c46
#undef public_5a9c4c
#undef public_5a9c8f
#undef public_5a9c9b
#undef public_5a9cda
#undef public_5a9d47
#undef public_5a9d72
#undef public_5a9d94
#undef public_5a9d97
