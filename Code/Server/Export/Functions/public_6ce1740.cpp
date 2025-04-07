#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce38a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ce43b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4650);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);

#define public_6ce1764 _public_6ce1764
#define public_6ce177f _public_6ce177f
#define public_6ce1793 _public_6ce1793
#define public_6ce17ae _public_6ce17ae
#define public_6ce17c2 _public_6ce17c2
#define public_6ce17dc _public_6ce17dc
#define public_6ce17f2 _public_6ce17f2
#define public_6ce17f6 _public_6ce17f6
#define public_6ce1813 _public_6ce1813
#define public_6ce1832 _public_6ce1832
#define public_6ce1846 _public_6ce1846
#define public_6ce1862 _public_6ce1862
#define public_6ce1876 _public_6ce1876
#define public_6ce1892 _public_6ce1892
#define public_6ce18ae _public_6ce18ae
#define public_6ce18b2 _public_6ce18b2
#define public_6ce18d2 _public_6ce18d2
#define public_6ce18f0 _public_6ce18f0
#define public_6ce18f8 _public_6ce18f8
#define public_6ce191d _public_6ce191d
#define public_6ce1933 _public_6ce1933

PROC_DECLARE(0x6ce1740, internal_6ce1740, public_6ce1740);
extern "C" NAKED register_t __cdecl internal_6ce1740()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        lea ebx, ds:[eax+4]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push edi
        mov edi, ecx
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        lea esi, ds:[edi+4]
        jbe public_6ce1764
        or ebp, 0xFFFFFFFF
        public_6ce1764 : nop
        cmp esi, ebx
        jne public_6ce177f
        push 0xFFFFFFFF
        push ebp
        mov ecx, esi
        call public_6ce43b0
        push 0
        push 0
        mov ecx, esi
        call public_6ce43b0
        jmp public_6ce17f6
        public_6ce177f : nop
        test ebp, ebp
        jbe public_6ce17c2
        cmp ebp, eax
        jne public_6ce17c2
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ce1793
        mov eax, offset public_6d64efc
        public_6ce1793 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ce17c2
        push 1
        mov ecx, esi
        call public_6ce3b20
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ce17ae
        mov eax, offset public_6d64efc
        public_6ce17ae : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6ce17f6
        public_6ce17c2 : nop
        push 1
        push ebp
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce17f2
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6ce17dc
        mov ebx, offset public_6d64efc
        public_6ce17dc : nop
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push ebx
        push eax
        call public_6ce1960
        add esp, 0xC
        push ebp
        mov ecx, esi
        call public_6ce4500
        public_6ce17f2 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6ce17f6 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [edx]
        lea esi, ds:[ecx+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, ecx
        cmp eax, ebp
        lea ebx, ds:[edi+0x14]
        jae public_6ce1813
        mov ebp, eax
        public_6ce1813 : nop
        cmp ebx, esi
        jne public_6ce1832
        push eax
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b78]
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6d64b78]
        jmp public_6ce18b2
        public_6ce1832 : nop
        test ebp, ebp
        jbe public_6ce1876
        cmp ebp, ecx
        jne public_6ce1876
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ce1846
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6ce1846 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ce1876
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ce1862
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6ce1862 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6ce18b2
        public_6ce1876 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6ce18ae
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6ce1892
        mov esi, dword ptr ds : [public_6d64b7c]
        public_6ce1892 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b88]
        public_6ce18ae : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6ce18b2 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[ecx+0x24]
        lea ebp, ds:[edi+0x24]
        cmp ebp, eax
        je public_6ce1933
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        je public_6ce18f0
        public_6ce18d2 : nop
        cmp ebx, dword ptr ss : [esp+0x18]
        je public_6ce18f0
        push 0xFFFFFFFF
        push 0
        lea ecx, ds:[ebx+8]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6ce38a0
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov ebx, dword ptr ds : [ebx]
        jne public_6ce18d2
        public_6ce18f0 : nop
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], esi
        je public_6ce191d
        public_6ce18f8 : nop
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        call public_6ce4650
        cmp dword ptr ss : [esp+0x14], edi
        jne public_6ce18f8
        public_6ce191d : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push ebx
        push edi
        mov ecx, ebp
        call public_6ce3b70
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        public_6ce1933 : nop
        mov al, byte ptr ds : [ecx+0x30]
        mov byte ptr ds : [edi+0x30], al
        mov dl, byte ptr ds : [ecx+0x31]
        mov byte ptr ds : [edi+0x31], dl
        mov al, byte ptr ds : [ecx+0x32]
        mov byte ptr ds : [edi+0x32], al
        mov ecx, dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [edi+0x34], ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ce1740)
    }
}

#undef public_6ce1764
#undef public_6ce177f
#undef public_6ce1793
#undef public_6ce17ae
#undef public_6ce17c2
#undef public_6ce17dc
#undef public_6ce17f2
#undef public_6ce17f6
#undef public_6ce1813
#undef public_6ce1832
#undef public_6ce1846
#undef public_6ce1862
#undef public_6ce1876
#undef public_6ce1892
#undef public_6ce18ae
#undef public_6ce18b2
#undef public_6ce18d2
#undef public_6ce18f0
#undef public_6ce18f8
#undef public_6ce191d
#undef public_6ce1933
