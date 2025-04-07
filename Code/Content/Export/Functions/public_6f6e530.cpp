#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e530);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f720);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6e550 _public_6f6e550
#define public_6f6e559 _public_6f6e559
#define public_6f6e560 _public_6f6e560
#define public_6f6e5c8 _public_6f6e5c8
#define public_6f6e5e1 _public_6f6e5e1
#define public_6f6e5e6 _public_6f6e5e6
#define public_6f6e5ee _public_6f6e5ee
#define public_6f6e600 _public_6f6e600
#define public_6f6e60c _public_6f6e60c
#define public_6f6e630 _public_6f6e630
#define public_6f6e644 _public_6f6e644
#define public_6f6e6c7 _public_6f6e6c7
#define public_6f6e6f8 _public_6f6e6f8
#define public_6f6e767 _public_6f6e767
#define public_6f6e798 _public_6f6e798
#define public_6f6e7b6 _public_6f6e7b6
#define public_6f6e7d4 _public_6f6e7d4
#define public_6f6e7e0 _public_6f6e7e0
#define public_6f6e7fd _public_6f6e7fd
#define public_6f6e804 _public_6f6e804

PROC_DECLARE(0x6f6e530, internal_6f6e530, public_6f6e530);
extern "C" NAKED register_t __cdecl internal_6f6e530()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6fd1c90]
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ds : [public_6fd1c8c]
        mov eax, edi
        cmp eax, ecx
        je public_6f6e560
        public_6f6e550 : nop
        cmp dword ptr ds : [eax], esi
        jne public_6f6e559
        cmp dword ptr ds : [eax+4], edx
        je public_6f6e5c8
        public_6f6e559 : nop
        add eax, 0xC
        cmp eax, ecx
        jne public_6f6e550
        public_6f6e560 : nop
        mov dword ptr ss : [esp+0x10], edx
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ss : [esp+0x14], dl
        mov edx, dword ptr ds : [public_6fd1c94]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov dword ptr ss : [esp+0xC], esi
        mov esi, ecx
        jae public_6f6e6f8
        test edi, edi
        je public_6f6e5e1
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jbe public_6f6e5e1
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        jmp public_6f6e5e6
        public_6f6e5c8 : nop
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        jne public_6f6e804
        mov cl, byte ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov byte ptr ds : [eax+8], cl
        pop ebx
        add esp, 0xC
        ret 
        public_6f6e5e1 : nop
        mov ebx, 1
        public_6f6e5e6 : nop
        test edi, edi
        jne public_6f6e5ee
        xor edx, edx
        jmp public_6f6e600
        public_6f6e5ee : nop
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f6e600 : nop
        push ebp
        lea ebp, ds:[edx+ebx]
        test ebp, ebp
        mov eax, ebp
        jge public_6f6e60c
        xor eax, eax
        public_6f6e60c : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [public_6fd1c8c]
        add esp, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x28], eax
        mov edi, eax
        je public_6f6e644
        nop 
        lea esp, ss:[esp]
        public_6f6e630 : nop
        push ebx
        push edi
        call public_6f36ef0
        add ebx, 0xC
        add esp, 8
        add edi, 0xC
        cmp ebx, esi
        jne public_6f6e630
        public_6f6e644 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push edi
        mov ecx, offset public_6fd1c88
        call public_6f6f760
        mov ecx, dword ptr ds : [public_6fd1c90]
        add edi, 0xC
        push edi
        push ecx
        push esi
        mov ecx, offset public_6fd1c88
        call public_6f6f720
        mov edx, dword ptr ds : [public_6fd1c90]
        mov eax, dword ptr ds : [public_6fd1c8c]
        push edx
        push eax
        mov ecx, offset public_6fd1c88
        call public_6ea1490
        mov ecx, dword ptr ds : [public_6fd1c8c]
        push ecx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x2C]
        lea edx, ss:[ebp+ebp*2]
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [public_6fd1c94], eax
        mov eax, dword ptr ds : [public_6fd1c8c]
        add esp, 4
        test eax, eax
        pop ebp
        jne public_6f6e6c7
        xor edx, edx
        lea edx, ds:[edx+edx*2+3]
        pop edi
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [public_6fd1c8c], esi
        pop esi
        mov dword ptr ds : [public_6fd1c90], eax
        pop ebx
        add esp, 0xC
        ret 
        public_6f6e6c7 : nop
        mov ecx, dword ptr ds : [public_6fd1c90]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        lea edx, ds:[edx+edx*2+3]
        pop edi
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [public_6fd1c8c], esi
        pop esi
        mov dword ptr ds : [public_6fd1c90], eax
        pop ebx
        add esp, 0xC
        ret 
        public_6f6e6f8 : nop
        mov edx, ecx
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f6e798
        lea edx, ds:[esi+0xC]
        push edx
        push ecx
        push esi
        mov ecx, offset public_6fd1c88
        call public_6f6f720
        mov edi, dword ptr ds : [public_6fd1c90]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push edi
        mov ecx, offset public_6fd1c88
        call public_6f6f760
        mov ecx, dword ptr ds : [public_6fd1c90]
        cmp esi, ecx
        mov eax, esi
        je public_6f6e7fd
        public_6f6e767 : nop
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [esp+0x14]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edx+8], esi
        jne public_6f6e767
        mov eax, dword ptr ds : [public_6fd1c90]
        pop edi
        add eax, 0xC
        pop esi
        mov dword ptr ds : [public_6fd1c90], eax
        pop ebx
        add esp, 0xC
        ret 
        public_6f6e798 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF4
        push ecx
        mov ecx, offset public_6fd1c88
        call public_6f6f720
        mov eax, dword ptr ds : [public_6fd1c90]
        mov ecx, eax
        add eax, 0xFFFFFFF4
        cmp esi, eax
        je public_6f6e7d4
        public_6f6e7b6 : nop
        sub eax, 0xC
        sub ecx, 0xC
        cmp eax, esi
        mov edx, eax
        mov ebx, dword ptr ds : [edx]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], edx
        jne public_6f6e7b6
        public_6f6e7d4 : nop
        lea ecx, ds:[esi+0xC]
        cmp esi, ecx
        mov eax, esi
        je public_6f6e7fd
        lea ecx, ds:[ecx]
        public_6f6e7e0 : nop
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [esp+0x14]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edx+8], esi
        jne public_6f6e7e0
        public_6f6e7fd : nop
        add dword ptr ds : [public_6fd1c90], 0xC
        public_6f6e804 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f6e530)
    }
}

#undef public_6f6e550
#undef public_6f6e559
#undef public_6f6e560
#undef public_6f6e5c8
#undef public_6f6e5e1
#undef public_6f6e5e6
#undef public_6f6e5ee
#undef public_6f6e600
#undef public_6f6e60c
#undef public_6f6e630
#undef public_6f6e644
#undef public_6f6e6c7
#undef public_6f6e6f8
#undef public_6f6e767
#undef public_6f6e798
#undef public_6f6e7b6
#undef public_6f6e7d4
#undef public_6f6e7e0
#undef public_6f6e7fd
#undef public_6f6e804
