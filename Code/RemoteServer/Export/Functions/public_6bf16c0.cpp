#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf170f _public_6bf170f
#define public_6bf1727 _public_6bf1727
#define public_6bf173a _public_6bf173a
#define public_6bf1764 _public_6bf1764
#define public_6bf1777 _public_6bf1777
#define public_6bf1794 _public_6bf1794
#define public_6bf17a7 _public_6bf17a7
#define public_6bf17c6 _public_6bf17c6
#define public_6bf17d9 _public_6bf17d9
#define public_6bf17fa _public_6bf17fa
#define public_6bf180d _public_6bf180d
#define public_6bf185a _public_6bf185a
#define public_6bf1870 _public_6bf1870
#define public_6bf18b8 _public_6bf18b8
#define public_6bf18ce _public_6bf18ce
#define public_6bf190d _public_6bf190d
#define public_6bf1923 _public_6bf1923
#define public_6bf194b _public_6bf194b
#define public_6bf196e _public_6bf196e
#define public_6bf19a1 _public_6bf19a1

PROC_DECLARE(0x6bf16c0, internal_6bf16c0, public_6bf16c0);
extern "C" NAKED register_t __cdecl internal_6bf16c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf170f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf170f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6bf1727
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1727 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf173a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf173a : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x24]
        add eax, 4
        push edx
        mov dword ptr ds : [ebx], eax
        call dword ptr ds : [public_6c0b00c]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6bf1764
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1764 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6bf1777
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1777 : nop
        mov ecx, dword ptr ds : [ebx]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1794
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1794 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf17a7
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf17a7 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf17c6
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf17c6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf17d9
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf17d9 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf17fa
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf17fa : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf180d
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf180d : nop
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [edi+0x44]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6bf194b
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf185a
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf185a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf1870
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1870 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x30]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6bda220
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf18b8
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf18b8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf18ce
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf18ce : nop
        mov edx, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [edi+0x54]
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi+0x50]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf190d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf190d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf1923
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1923 : nop
        mov eax, dword ptr ds : [edi+0x58]
        mov ecx, dword ptr ds : [edi+0x5C]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x60]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        public_6bf194b : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf196e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf196e : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6bf19a1
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf19a1 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6bf16c0)
    }
}

#undef public_6bf170f
#undef public_6bf1727
#undef public_6bf173a
#undef public_6bf1764
#undef public_6bf1777
#undef public_6bf1794
#undef public_6bf17a7
#undef public_6bf17c6
#undef public_6bf17d9
#undef public_6bf17fa
#undef public_6bf180d
#undef public_6bf185a
#undef public_6bf1870
#undef public_6bf18b8
#undef public_6bf18ce
#undef public_6bf190d
#undef public_6bf1923
#undef public_6bf194b
#undef public_6bf196e
#undef public_6bf19a1
