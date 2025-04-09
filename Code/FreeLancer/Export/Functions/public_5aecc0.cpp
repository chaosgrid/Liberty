#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5aecc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5aece0 _public_5aece0
#define public_5aed17 _public_5aed17
#define public_5aed23 _public_5aed23
#define public_5aed58 _public_5aed58
#define public_5aedb3 _public_5aedb3
#define public_5aedcb _public_5aedcb
#define public_5aedf4 _public_5aedf4
#define public_5aedf8 _public_5aedf8
#define public_5aeef4 _public_5aeef4

PROC_DECLARE(0x5aecc0, internal_5aecc0, public_5aecc0);
extern "C" NAKED register_t __cdecl internal_5aecc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        cmp ebp, eax
        je public_5aeef4
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[edi+0x18]
        lea esi, ss:[ebp+0x1C]
        mov edi, edi
        public_5aece0 : nop
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c7060]
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi-0xC], edx
        mov eax, dword ptr ds : [edi+0x14]
        lea ecx, ds:[esi-4]
        cmp ecx, ebx
        mov dword ptr ds : [esi-8], eax
        je public_5aedf8
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_5aed17
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_5aed23
        public_5aed17 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x1C], eax
        public_5aed23 : nop
        lea ecx, ds:[esi-4]
        call public_5ad970
        cmp dword ptr ss : [esp+0x1C], eax
        ja public_5aed58
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+8]
        push edx
        push eax
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_527820
        add esp, 0xC
        mov ecx, ebx
        call public_5ad970
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_5aedf8
        public_5aed58 : nop
        lea ecx, ds:[esi-4]
        call public_40d740
        mov ecx, ebx
        mov ebp, eax
        call public_5ad970
        cmp eax, ebp
        ja public_5aedb3
        lea ebp, ds:[esi-4]
        mov ecx, ebp
        call public_5ad970
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[ecx+eax*4]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x28], eax
        call public_527820
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_597c70
        mov ecx, ebx
        call public_5ad970
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_5aedf4
        public_5aedb3 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebx
        call public_5ad970
        test eax, eax
        jge public_5aedcb
        xor eax, eax
        public_5aedcb : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        lea ecx, ds:[esi-4]
        call public_597c70
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        public_5aedf4 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_5aedf8 : nop
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x1C], eax
        mov cl, byte ptr ds : [edi+0x3C]
        mov byte ptr ds : [esi+0x20], cl
        mov dl, byte ptr ds : [edi+0x3D]
        mov byte ptr ds : [esi+0x21], dl
        mov al, byte ptr ds : [edi+0x3E]
        mov byte ptr ds : [esi+0x22], al
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [esi+0x24], ecx
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea eax, ds:[edi+0x44]
        push eax
        lea ecx, ds:[esi+0x28]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[edi+0x54]
        push eax
        lea ecx, ds:[esi+0x38]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea eax, ds:[edi+0x64]
        push eax
        lea ecx, ds:[esi+0x48]
        call dword ptr ds : [public_5c6f9c]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea eax, ds:[edi+0x74]
        push eax
        lea ecx, ds:[esi+0x58]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x68], ecx
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x6C], edx
        mov eax, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x70], eax
        mov ecx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x74], ecx
        mov dl, byte ptr ds : [edi+0x94]
        mov byte ptr ds : [esi+0x78], dl
        mov al, byte ptr ds : [edi+0x95]
        mov byte ptr ds : [esi+0x79], al
        mov cl, byte ptr ds : [edi+0x96]
        mov eax, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x7A], cl
        mov edx, dword ptr ds : [edi+0x98]
        add ebp, 0x9C
        mov dword ptr ds : [esi+0x7C], edx
        add esi, 0x9C
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], ebp
        jne public_5aece0
        pop edi
        pop esi
        pop ebx
        public_5aeef4 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5aecc0)
    }
}

#undef public_5aece0
#undef public_5aed17
#undef public_5aed23
#undef public_5aed58
#undef public_5aedb3
#undef public_5aedcb
#undef public_5aedf4
#undef public_5aedf8
#undef public_5aeef4
