#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5aef00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5aef20 _public_5aef20
#define public_5aef79 _public_5aef79
#define public_5aef81 _public_5aef81
#define public_5aefa1 _public_5aefa1
#define public_5aefb6 _public_5aefb6
#define public_5aeff6 _public_5aeff6
#define public_5af00f _public_5af00f
#define public_5af036 _public_5af036
#define public_5af110 _public_5af110

PROC_DECLARE(0x5aef00, internal_5aef00, public_5aef00);
extern "C" NAKED register_t __cdecl internal_5aef00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ss : [esp+4], eax
        je public_5af110
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[eax+0x1C]
        lea esi, ds:[ecx+0x1C]
        lea esp, ss:[esp]
        public_5aef20 : nop
        mov edx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        sub eax, 0x9C
        push 0
        sub ecx, 0x9C
        push eax
        mov dword ptr ss : [esp+0x24], eax
        sub edi, 0x9C
        mov dword ptr ss : [esp+0x28], ecx
        sub esi, 0x9C
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [edi-0xC]
        mov dword ptr ds : [esi-0xC], eax
        mov ecx, dword ptr ds : [edi-8]
        lea edx, ds:[esi-4]
        lea eax, ds:[edi-4]
        cmp edx, eax
        mov dword ptr ds : [esi-8], ecx
        je public_5af036
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_5aef79
        xor ebp, ebp
        jmp public_5aef81
        public_5aef79 : nop
        mov ebp, dword ptr ds : [edi+4]
        sub ebp, eax
        sar ebp, 2
        public_5aef81 : nop
        lea ebx, ds:[esi-4]
        mov ecx, ebx
        call public_5ad970
        cmp ebp, eax
        ja public_5aefb6
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push eax
        call public_527820
        add esp, 0xC
        public_5aefa1 : nop
        lea ecx, ds:[edi-4]
        call public_5ad970
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_5af036
        public_5aefb6 : nop
        lea ecx, ds:[edi-4]
        call public_5ad970
        mov ecx, ebx
        mov ebp, eax
        call public_40d740
        cmp ebp, eax
        ja public_5aeff6
        mov ecx, ebx
        call public_5ad970
        mov ecx, dword ptr ds : [edi]
        lea ebp, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [esi]
        push eax
        push ebp
        push ecx
        call public_527820
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+4]
        add esp, 0xC
        push ecx
        push edx
        push ebp
        mov ecx, ebx
        call public_597c70
        jmp public_5aefa1
        public_5aeff6 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[edi-4]
        call public_5ad970
        test eax, eax
        jge public_5af00f
        xor eax, eax
        public_5af00f : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_597c70
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        public_5af036 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov cl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [esi+0x20], cl
        mov dl, byte ptr ds : [edi+0x21]
        mov byte ptr ds : [esi+0x21], dl
        mov al, byte ptr ds : [edi+0x22]
        mov byte ptr ds : [esi+0x22], al
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], ecx
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ds:[edi+0x28]
        push ecx
        lea ecx, ds:[esi+0x28]
        call dword ptr ds : [public_5c7060]
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ds:[edi+0x38]
        push ecx
        lea ecx, ds:[esi+0x38]
        call dword ptr ds : [public_5c7060]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ds:[edi+0x48]
        push ecx
        lea ecx, ds:[esi+0x48]
        call dword ptr ds : [public_5c6f9c]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ds:[edi+0x58]
        push ecx
        lea ecx, ds:[esi+0x58]
        call dword ptr ds : [public_5c6f9c]
        mov edx, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], edx
        mov eax, dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi+0x6C], eax
        mov ecx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], ecx
        mov edx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], edx
        mov al, byte ptr ds : [edi+0x78]
        mov byte ptr ds : [esi+0x78], al
        mov cl, byte ptr ds : [edi+0x79]
        mov byte ptr ds : [esi+0x79], cl
        mov dl, byte ptr ds : [edi+0x7A]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x7A], dl
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        jne public_5aef20
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_5af110 : nop
        mov eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x5aef00)
    }
}

#undef public_5aef20
#undef public_5aef79
#undef public_5aef81
#undef public_5aefa1
#undef public_5aefb6
#undef public_5aeff6
#undef public_5af00f
#undef public_5af036
#undef public_5af110
