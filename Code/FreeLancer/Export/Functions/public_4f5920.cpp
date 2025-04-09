#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f5920);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_4f5938 _public_4f5938
#define public_4f5940 _public_4f5940
#define public_4f5950 _public_4f5950
#define public_4f5961 _public_4f5961
#define public_4f596a _public_4f596a
#define public_4f59d6 _public_4f59d6
#define public_4f5a24 _public_4f5a24
#define public_4f5a3d _public_4f5a3d
#define public_4f5a51 _public_4f5a51
#define public_4f5a5d _public_4f5a5d
#define public_4f5ac9 _public_4f5ac9
#define public_4f5af3 _public_4f5af3
#define public_4f5b08 _public_4f5b08
#define public_4f5b25 _public_4f5b25
#define public_4f5b2a _public_4f5b2a
#define public_4f5b9f _public_4f5b9f
#define public_4f5ba1 _public_4f5ba1
#define public_4f5bf9 _public_4f5bf9
#define public_4f5c12 _public_4f5c12

PROC_DECLARE(0x4f5920, internal_4f5920, public_4f5920);
extern "C" NAKED register_t __cdecl internal_4f5920()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], edi
        jne public_4f5938
        xor ecx, ecx
        jmp public_4f5940
        public_4f5938 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        sub ecx, eax
        sar ecx, 2
        public_4f5940 : nop
        xor eax, eax
        test ecx, ecx
        jle public_4f596a
        mov esi, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ss : [esp+0x64]
        mov edx, esi
        nop 
        public_4f5950 : nop
        mov ebp, dword ptr ds : [edx]
        cmp dword ptr ss : [ebp+0x10], ebx
        je public_4f5961
        inc eax
        add edx, 4
        cmp eax, ecx
        jl public_4f5950
        jmp public_4f596a
        public_4f5961 : nop
        cmp eax, 0xFFFFFFFF
        jne public_4f5a3d
        public_4f596a : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4f5c12
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f5c12
        add eax, 0xC
        test eax, eax
        je public_4f5c12
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4f5c12
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4f5c12
        push 0xE0
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c64f4]
        mov ebx, dword ptr ds : [public_5c64f0]
        lea ecx, ss:[esp+0x28]
        lea ebp, ds:[esi+0xE4]
        push ecx
        mov ecx, ebp
        call ebx
        mov esi, eax
        test esi, esi
        je public_4f5c12
        public_4f59d6 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x64]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_4f5a24
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x38]
        rep stosd
        movzx eax, word ptr ds : [esi+8]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov byte ptr ss : [esp+0x62], 1
        mov dword ptr ss : [esp+0x3C], 0x19
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], 2
        call public_54bcb0
        add esp, 4
        public_4f5a24 : nop
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebp
        call ebx
        mov esi, eax
        test esi, esi
        jne public_4f59d6
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 4
        public_4f5a3d : nop
        mov esi, dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x18], esi
        jne public_4f5a51
        mov dword ptr ss : [esp+0x14], eax
        jmp public_4f5a5d
        public_4f5a51 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 4
        mov dword ptr ss : [esp+0x14], ecx
        public_4f5a5d : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4f5c12
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f5c12
        add eax, 0xC
        test eax, eax
        je public_4f5c12
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4f5c12
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4f5c12
        push 0xE0
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c64f4]
        lea edx, ss:[esp+0x28]
        lea ecx, ds:[esi+0xE4]
        push edx
        mov dword ptr ss : [esp+0x24], ecx
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        test esi, esi
        je public_4f5c12
        public_4f5ac9 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [eax]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        test eax, eax
        mov byte ptr ss : [esp+0x64], 0
        jle public_4f5b2a
        xor edi, edi
        public_4f5af3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        add eax, edi
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4f5b08
        mov eax, dword ptr ds : [public_5c7078]
        public_4f5b08 : nop
        push ebx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4f5b25
        mov eax, dword ptr ss : [esp+0x14]
        inc ebp
        add edi, 0x10
        cmp ebp, eax
        jl public_4f5af3
        jmp public_4f5b2a
        public_4f5b25 : nop
        mov byte ptr ss : [esp+0x64], 1
        public_4f5b2a : nop
        mov cl, byte ptr ss : [esp+0x64]
        cmp byte ptr ss : [esp+0x13], cl
        je public_4f5bf9
        movzx edx, word ptr ds : [esi+8]
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x38]
        rep stosd
        lea eax, ss:[esp+0x38]
        push eax
        mov byte ptr ss : [esp+0x62], 1
        mov dword ptr ss : [esp+0x3C], 0x19
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], 2
        call public_54bcb0
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        add esp, 4
        test eax, eax
        je public_4f5b9f
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f5b9f
        add eax, 0xC
        test eax, eax
        je public_4f5b9f
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_4f5b9f
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4f5ba1
        public_4f5b9f : nop
        xor edi, edi
        public_4f5ba1 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_4f5bf9
        push esi
        call dword ptr ds : [public_5c6544]
        add esp, 4
        test eax, eax
        je public_4f5bf9
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_4f5bf9
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f5bf9
        mov edx, dword ptr ds : [public_673344]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        lea esi, ds:[eax+4]
        push edx
        mov dword ptr ss : [esp+0x68], ecx
        mov ebx, dword ptr ds : [esi]
        mov ecx, edi
        call dword ptr ds : [public_5c6540]
        mov ecx, edi
        push eax
        call dword ptr ds : [public_5c6348]
        push eax
        lea eax, ss:[esp+0x70]
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x44]
        public_4f5bf9 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        test esi, esi
        jne public_4f5ac9
        public_4f5c12 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x4f5920)
    }
}

#undef public_4f5938
#undef public_4f5940
#undef public_4f5950
#undef public_4f5961
#undef public_4f596a
#undef public_4f59d6
#undef public_4f5a24
#undef public_4f5a3d
#undef public_4f5a51
#undef public_4f5a5d
#undef public_4f5ac9
#undef public_4f5af3
#undef public_4f5b08
#undef public_4f5b25
#undef public_4f5b2a
#undef public_4f5b9f
#undef public_4f5ba1
#undef public_4f5bf9
#undef public_4f5c12
