#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f309a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f36d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f720);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f350);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7d4e3 _public_6f7d4e3
#define public_6f7d4e7 _public_6f7d4e7
#define public_6f7d528 _public_6f7d528
#define public_6f7d541 _public_6f7d541
#define public_6f7d54b _public_6f7d54b
#define public_6f7d560 _public_6f7d560
#define public_6f7d575 _public_6f7d575
#define public_6f7d597 _public_6f7d597
#define public_6f7d5ac _public_6f7d5ac
#define public_6f7d5ce _public_6f7d5ce
#define public_6f7d625 _public_6f7d625
#define public_6f7d63e _public_6f7d63e
#define public_6f7d661 _public_6f7d661
#define public_6f7d664 _public_6f7d664
#define public_6f7d68f _public_6f7d68f
#define public_6f7d6b9 _public_6f7d6b9

PROC_DECLARE(0x6f7d4c0, internal_6f7d4c0, public_6f7d4c0);
extern "C" NAKED register_t __cdecl internal_6f7d4c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 8
        cmp ecx, eax
        je public_6f7d6b9
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[eax+0x18]
        lea esi, ds:[ecx+0x18]
        jmp public_6f7d4e7
        public_6f7d4e3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7d4e7 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        sub eax, 0x44
        sub ecx, 0x44
        push eax
        mov dword ptr ss : [esp+0x24], eax
        sub edi, 0x44
        mov dword ptr ss : [esp+0x28], ecx
        sub esi, 0x44
        call public_6f7ee40
        mov edx, dword ptr ds : [edi-8]
        lea eax, ds:[esi-4]
        lea ecx, ds:[edi-4]
        cmp eax, ecx
        mov dword ptr ds : [esi-8], edx
        lea ebp, ds:[esi-4]
        je public_6f7d664
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_6f7d528
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6f7d541
        public_6f7d528 : nop
        mov ecx, dword ptr ds : [edi+4]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_6f7d541 : nop
        mov ebx, dword ptr ds : [esi]
        test ebx, ebx
        jne public_6f7d54b
        xor edx, edx
        jmp public_6f7d560
        public_6f7d54b : nop
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7d560 : nop
        cmp dword ptr ss : [esp+0x10], edx
        ja public_6f7d5ce
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], edx
        mov ecx, ebx
        je public_6f7d597
        public_6f7d575 : nop
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        jne public_6f7d575
        public_6f7d597 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_6f7d5ac
        xor edx, edx
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edx+ecx*4]
        jmp public_6f7d661
        public_6f7d5ac : nop
        mov ecx, dword ptr ds : [edi+4]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edx+ecx*4]
        jmp public_6f7d661
        public_6f7d5ce : nop
        mov ecx, ebp
        call public_6f7f350
        lea ecx, ds:[edi-4]
        mov ebx, eax
        call public_6f36d10
        cmp eax, ebx
        ja public_6f7d625
        mov ebx, dword ptr ds : [edi]
        mov ecx, ebp
        call public_6f36d10
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[eax+eax*2]
        push edx
        lea ebp, ds:[ebx+ecx*4]
        push ebp
        push ebx
        call public_6f7f720
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+4]
        add esp, 0xC
        push eax
        push ecx
        push ebp
        lea ecx, ds:[esi-4]
        call public_6f6f720
        lea ecx, ds:[edi-4]
        call public_6f36d10
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax+edx*4]
        mov dword ptr ds : [esi+4], ecx
        jmp public_6f7d664
        public_6f7d625 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi-4]
        call public_6f36d10
        test eax, eax
        jge public_6f7d63e
        xor eax, eax
        public_6f7d63e : nop
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6f6f720
        mov dword ptr ds : [esi+8], eax
        public_6f7d661 : nop
        mov dword ptr ds : [esi+4], eax
        public_6f7d664 : nop
        lea ebx, ds:[esi+0xC]
        lea ebp, ds:[edi+0xC]
        cmp ebx, ebp
        je public_6f7d68f
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f309a0
        mov dl, byte ptr ds : [edi+0xD]
        push ebp
        mov ecx, ebx
        mov byte ptr ds : [esi+0xD], dl
        call public_6f30a60
        public_6f7d68f : nop
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], eax
        mov cl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [esi+0x24], cl
        mov dl, byte ptr ds : [edi+0x25]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x25], dl
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], eax
        cmp dword ptr ss : [esp+0x20], ecx
        jne public_6f7d4e3
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f7d6b9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f7d4c0)
    }
}

#undef public_6f7d4e3
#undef public_6f7d4e7
#undef public_6f7d528
#undef public_6f7d541
#undef public_6f7d54b
#undef public_6f7d560
#undef public_6f7d575
#undef public_6f7d597
#undef public_6f7d5ac
#undef public_6f7d5ce
#undef public_6f7d625
#undef public_6f7d63e
#undef public_6f7d661
#undef public_6f7d664
#undef public_6f7d68f
#undef public_6f7d6b9
