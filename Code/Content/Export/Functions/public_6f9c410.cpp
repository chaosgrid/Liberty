#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f979b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98780);
CLANG_FORWARD_PROC_SYMBOL(public_6f9bee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9c410);

#define public_6f9c45f _public_6f9c45f
#define public_6f9c53d _public_6f9c53d
#define public_6f9c57d _public_6f9c57d
#define public_6f9c585 _public_6f9c585
#define public_6f9c5b1 _public_6f9c5b1
#define public_6f9c5cd _public_6f9c5cd
#define public_6f9c5dd _public_6f9c5dd
#define public_6f9c61a _public_6f9c61a
#define public_6f9c66a _public_6f9c66a
#define public_6f9c672 _public_6f9c672
#define public_6f9c69e _public_6f9c69e
#define public_6f9c6eb _public_6f9c6eb
#define public_6f9c73f _public_6f9c73f
#define public_6f9c747 _public_6f9c747
#define public_6f9c79c _public_6f9c79c
#define public_6f9c7a4 _public_6f9c7a4
#define public_6f9c7f9 _public_6f9c7f9
#define public_6f9c801 _public_6f9c801
#define public_6f9c831 _public_6f9c831
#define public_6f9c875 _public_6f9c875
#define public_6f9c87d _public_6f9c87d
#define public_6f9c8b3 _public_6f9c8b3
#define public_6f9c906 _public_6f9c906
#define public_6f9c90a _public_6f9c90a
#define public_6f9c924 _public_6f9c924
#define public_6f9c933 _public_6f9c933
#define public_6f9c941 _public_6f9c941
#define public_6f9c964 _public_6f9c964
#define public_6f9c9a5 _public_6f9c9a5
#define public_6f9ca21 _public_6f9ca21
#define public_6f9ca89 _public_6f9ca89
#define public_6f9caa4 _public_6f9caa4

PROC_DECLARE(0x6f9c410, internal_6f9c410, public_6f9c410);
extern "C" NAKED register_t __cdecl internal_6f9c410()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x84]
        push esi
        mov esi, ecx
        lea eax, ss:[ebp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        mov al, byte ptr ds : [esi+0x1A]
        xor ebx, ebx
        cmp al, bl
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        je public_6f9c45f
        mov ecx, dword ptr ss : [esp+0x98]
        push ecx
        push ebp
        mov ecx, esi
        call public_6f9bee0
        and al, 1
        mov byte ptr ss : [esp+0x13], al
        public_6f9c45f : nop
        mov eax, dword ptr ss : [ebp+0x20]
        fld dword ptr ss : [esp+0x94]
        mov edi, dword ptr ss : [esp+0x90]
        fmul dword ptr ds : [public_6fb605c]
        lea edx, ds:[edi+0x44]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp+0x24]
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [edx+8], eax
        cmp byte ptr ds : [esi+0x1F], bl
        je public_6f9c831
        mov ecx, dword ptr ds : [public_6fbcbc0]
        cmp byte ptr ds : [esi+0x22], bl
        mov edx, ecx
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x48], 1
        mov byte ptr ss : [esp+0x49], bl
        mov byte ptr ss : [esp+0x4A], 1
        mov byte ptr ss : [esp+0x4B], bl
        mov byte ptr ss : [esp+0x4C], bl
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x40], 2
        mov dword ptr ss : [esp+0x44], 1
        je public_6f9c53d
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x94]
        push eax
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_6f98780
        push ebx
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        push edi
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x37]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x13], cl
        public_6f9c53d : nop
        cmp byte ptr ds : [esi+0x24], bl
        je public_6f9c5b1
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_6f98780
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0xC
        cmp eax, ebx
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x68]
        rep movsd
        jne public_6f9c585
        cmp dword ptr ss : [esp+0x34], ebx
        jne public_6f9c57d
        mov dword ptr ss : [esp+0x74], 1
        public_6f9c57d : nop
        mov dword ptr ss : [esp+0x78], 1
        public_6f9c585 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        push ebx
        push 1
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        push ecx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x2B]
        mov esi, dword ptr ss : [esp+0x30]
        add esp, 0x18
        and cl, al
        mov byte ptr ss : [esp+0x13], cl
        public_6f9c5b1 : nop
        cmp byte ptr ds : [esi+0x23], bl
        je public_6f9c61a
        cmp byte ptr ds : [esi+0x22], bl
        je public_6f9c5cd
        mov dword ptr ss : [esp+0x60], 3
        mov dword ptr ss : [esp+0x64], 1
        jmp public_6f9c5dd
        public_6f9c5cd : nop
        mov dword ptr ss : [esp+0x60], 1
        mov dword ptr ss : [esp+0x64], 8
        public_6f9c5dd : nop
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x94]
        push edx
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        call public_6f98780
        mov ecx, dword ptr ss : [esp+0x9C]
        push ebx
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x37]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x13], cl
        public_6f9c61a : nop
        cmp byte ptr ds : [esi+0x25], bl
        je public_6f9c69e
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x50], 0x3C
        call public_6f98780
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0xC
        cmp eax, ebx
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x68]
        rep movsd
        jne public_6f9c672
        cmp dword ptr ss : [esp+0x34], ebx
        jne public_6f9c66a
        mov dword ptr ss : [esp+0x74], 1
        public_6f9c66a : nop
        mov dword ptr ss : [esp+0x78], 1
        public_6f9c672 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        push ebx
        push 1
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        push ecx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x2B]
        mov esi, dword ptr ss : [esp+0x30]
        add esp, 0x18
        and cl, al
        mov byte ptr ss : [esp+0x13], cl
        public_6f9c69e : nop
        cmp byte ptr ds : [esi+0x1E], bl
        je public_6f9c6eb
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x94]
        push edx
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        mov byte ptr ss : [esp+0x54], bl
        mov byte ptr ss : [esp+0x56], 1
        mov dword ptr ss : [esp+0x6C], 2
        mov dword ptr ss : [esp+0x70], 0xF0
        call public_6f98780
        mov ecx, dword ptr ss : [esp+0x9C]
        push ebx
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        jmp public_6f9ca89
        public_6f9c6eb : nop
        cmp byte ptr ds : [esi+0x26], bl
        je public_6f9caa4
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x4C], 2
        mov dword ptr ss : [esp+0x50], 9
        call public_6f98780
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0xC
        cmp eax, ebx
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x68]
        rep movsd
        jne public_6f9c747
        cmp dword ptr ss : [esp+0x34], ebx
        jne public_6f9c73f
        mov dword ptr ss : [esp+0x74], 1
        public_6f9c73f : nop
        mov dword ptr ss : [esp+0x78], 1
        public_6f9c747 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        push ebx
        push 1
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        push ecx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x2B]
        and cl, al
        mov eax, dword ptr ss : [esp+0x50]
        mov byte ptr ss : [esp+0x2B], cl
        add esp, 0x18
        cmp eax, ebx
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x44], 0x19
        rep movsd
        jne public_6f9c7a4
        cmp dword ptr ss : [esp+0x34], ebx
        jne public_6f9c79c
        mov dword ptr ss : [esp+0x74], 1
        public_6f9c79c : nop
        mov dword ptr ss : [esp+0x78], 1
        public_6f9c7a4 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        push ebx
        push 1
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        push ecx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x2B]
        and cl, al
        mov eax, dword ptr ss : [esp+0x50]
        mov byte ptr ss : [esp+0x2B], cl
        add esp, 0x18
        cmp eax, ebx
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x44], 0x19
        rep movsd
        jne public_6f9c801
        cmp dword ptr ss : [esp+0x34], ebx
        jne public_6f9c7f9
        mov dword ptr ss : [esp+0x74], 1
        public_6f9c7f9 : nop
        mov dword ptr ss : [esp+0x78], 1
        public_6f9c801 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        push ebx
        push 1
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        push ecx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x2B]
        add esp, 0x18
        pop edi
        pop esi
        and cl, al
        pop ebp
        mov al, cl
        pop ebx
        add esp, 0x78
        ret 0x14
        public_6f9c831 : nop
        cmp byte ptr ds : [esi+0x1C], bl
        je public_6f9c8b3
        cmp byte ptr ds : [esi+0x1B], bl
        mov edx, dword ptr ds : [public_6fbcbc0]
        mov byte ptr ss : [esp+0x4C], bl
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x49], bl
        mov byte ptr ss : [esp+0x4B], bl
        mov dword ptr ss : [esp+0x60], ebx
        je public_6f9c875
        mov byte ptr ss : [esp+0x48], 1
        mov byte ptr ss : [esp+0x4A], 1
        jmp public_6f9c87d
        public_6f9c875 : nop
        mov byte ptr ss : [esp+0x48], bl
        mov byte ptr ss : [esp+0x4A], bl
        public_6f9c87d : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x94]
        push eax
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_6f98780
        push ebx
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        push edi
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x37]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x13], cl
        public_6f9c8b3 : nop
        cmp byte ptr ds : [esi+0x1B], bl
        je public_6f9c9a5
        mov cl, byte ptr ds : [esi+0x1C]
        cmp cl, bl
        mov edx, dword ptr ds : [public_6fbcbc0]
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x48], 1
        mov byte ptr ss : [esp+0x49], 1
        mov byte ptr ss : [esp+0x4A], bl
        mov byte ptr ss : [esp+0x4B], 1
        je public_6f9c906
        mov dword ptr ss : [esp+0x60], 2
        mov dword ptr ss : [esp+0x64], 0x2D
        jmp public_6f9c90a
        public_6f9c906 : nop
        mov dword ptr ss : [esp+0x60], ebx
        public_6f9c90a : nop
        mov al, byte ptr ds : [esi+0xE]
        cmp al, bl
        mov byte ptr ss : [esp+0x4C], al
        je public_6f9c941
        cmp byte ptr ds : [esi+0xF], bl
        je public_6f9c924
        mov dword ptr ss : [esp+0x5C], 3
        jmp public_6f9c941
        public_6f9c924 : nop
        cmp byte ptr ds : [esi+0x10], bl
        je public_6f9c933
        mov dword ptr ss : [esp+0x5C], 2
        jmp public_6f9c941
        public_6f9c933 : nop
        mov dl, byte ptr ds : [esi+0x11]
        xor eax, eax
        cmp dl, bl
        setne al
        mov dword ptr ss : [esp+0x5C], eax
        public_6f9c941 : nop
        cmp cl, bl
        fld dword ptr ss : [esp+0x94]
        fmul dword ptr ds : [public_6fb6058]
        fstp dword ptr ss : [esp+0x14]
        jne public_6f9c964
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6fbd3ec]
        fstp dword ptr ss : [esp+0x14]
        public_6f9c964 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        call public_6f98780
        mov ecx, dword ptr ss : [esp+0xA8]
        push ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x37]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x13], cl
        public_6f9c9a5 : nop
        cmp byte ptr ds : [esi+0x1D], bl
        je public_6f9ca21
        mov edx, dword ptr ds : [public_6fbcbc0]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x94]
        push eax
        mov dword ptr ss : [esp+0x54], edx
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        mov byte ptr ss : [esp+0x58], bl
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov byte ptr ss : [esp+0x54], bl
        mov byte ptr ss : [esp+0x55], bl
        mov byte ptr ss : [esp+0x56], bl
        mov byte ptr ss : [esp+0x57], bl
        mov dword ptr ss : [esp+0x6C], 2
        mov dword ptr ss : [esp+0x70], 0xF0
        call public_6f98780
        mov edx, dword ptr ss : [esp+0x9C]
        push ebx
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        push edx
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x37]
        add esp, 0x24
        and cl, al
        mov byte ptr ss : [esp+0x13], cl
        public_6f9ca21 : nop
        cmp byte ptr ds : [esi+0x1E], bl
        je public_6f9caa4
        mov eax, dword ptr ds : [public_6fbcbc0]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x94]
        push ecx
        mov dword ptr ss : [esp+0x54], eax
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        mov byte ptr ss : [esp+0x58], bl
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov byte ptr ss : [esp+0x54], bl
        mov byte ptr ss : [esp+0x55], bl
        mov byte ptr ss : [esp+0x56], bl
        mov byte ptr ss : [esp+0x57], bl
        mov dword ptr ss : [esp+0x6C], 2
        mov dword ptr ss : [esp+0x70], 0x78
        call public_6f98780
        mov eax, dword ptr ss : [esp+0x9C]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        public_6f9ca89 : nop
        push ebp
        call public_6f979b0
        mov cl, byte ptr ss : [esp+0x37]
        add esp, 0x24
        pop edi
        pop esi
        and cl, al
        pop ebp
        mov al, cl
        pop ebx
        add esp, 0x78
        ret 0x14
        public_6f9caa4 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 0x14
        UNREACHABLE_TRAP(0x6f9c410)
    }
}

#undef public_6f9c45f
#undef public_6f9c53d
#undef public_6f9c57d
#undef public_6f9c585
#undef public_6f9c5b1
#undef public_6f9c5cd
#undef public_6f9c5dd
#undef public_6f9c61a
#undef public_6f9c66a
#undef public_6f9c672
#undef public_6f9c69e
#undef public_6f9c6eb
#undef public_6f9c73f
#undef public_6f9c747
#undef public_6f9c79c
#undef public_6f9c7a4
#undef public_6f9c7f9
#undef public_6f9c801
#undef public_6f9c831
#undef public_6f9c875
#undef public_6f9c87d
#undef public_6f9c8b3
#undef public_6f9c906
#undef public_6f9c90a
#undef public_6f9c924
#undef public_6f9c933
#undef public_6f9c941
#undef public_6f9c964
#undef public_6f9c9a5
#undef public_6f9ca21
#undef public_6f9ca89
#undef public_6f9caa4
