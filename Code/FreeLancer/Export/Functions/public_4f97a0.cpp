#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7db0);
CLANG_FORWARD_PROC_SYMBOL(public_4fc920);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f97e9 _public_4f97e9
#define public_4f97ec _public_4f97ec
#define public_4f97f1 _public_4f97f1
#define public_4f97f4 _public_4f97f4
#define public_4f980a _public_4f980a
#define public_4f983d _public_4f983d
#define public_4f9840 _public_4f9840
#define public_4f9845 _public_4f9845
#define public_4f9848 _public_4f9848
#define public_4f9862 _public_4f9862
#define public_4f9888 _public_4f9888
#define public_4f9897 _public_4f9897
#define public_4f98ce _public_4f98ce
#define public_4f98d7 _public_4f98d7
#define public_4f9915 _public_4f9915
#define public_4f992b _public_4f992b
#define public_4f9930 _public_4f9930
#define public_4f9950 _public_4f9950
#define public_4f9970 _public_4f9970
#define public_4f9978 _public_4f9978

PROC_DECLARE(0x4f97a0, internal_4f97a0, public_4f97a0);
extern "C" NAKED register_t __cdecl internal_4f97a0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x70]
        push edi
        mov bl, 2
        xor edi, edi
        test bl, al
        mov eax, dword ptr ss : [ebp+0x68]
        je public_4f980a
        cmp eax, edi
        jne public_4f97f4
        test byte ptr ss : [ebp+8], bl
        jne public_4f97f4
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f97f1
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f97e9
        mov dword ptr ds : [edx], eax
        jmp public_4f97ec
        public_4f97e9 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f97ec : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f97f1 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f97f4 : nop
        mov ecx, ebp
        call public_4f7db0
        mov al, byte ptr ss : [ebp+8]
        or al, bl
        pop edi
        mov byte ptr ss : [ebp+8], al
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 
        public_4f980a : nop
        cmp eax, edi
        jne public_4f9848
        test byte ptr ss : [ebp+8], bl
        jne public_4f9848
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f9845
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f983d
        mov dword ptr ds : [edx], eax
        jmp public_4f9840
        public_4f983d : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f9840 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f9845 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f9848 : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f9950
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        je public_4f9862
        add eax, 0xFFFFFFF8
        cmp eax, edi
        jne public_4f9897
        public_4f9862 : nop
        cmp dword ptr ss : [ebp+0x68], edi
        jne public_4f9888
        test byte ptr ss : [ebp+8], bl
        jne public_4f9888
        lea eax, ss:[ebp+0x60]
        push eax
        mov eax, dword ptr ss : [ebp+0x5C]
        lea ecx, ds:[eax+eax*2]
        lea ecx, ds : [ecx*4+public_674ce0]
        mov dword ptr ss : [ebp+0x68], ebp
        call public_4fc920
        inc dword ptr ss : [ebp+0x58]
        public_4f9888 : nop
        mov ecx, ebp
        call public_4f7db0
        or byte ptr ss : [ebp+8], bl
        jmp public_4f9950
        public_4f9897 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, edi
        je public_4f98ce
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x4C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        jmp public_4f98d7
        public_4f98ce : nop
        mov dword ptr ss : [ebp+0x54], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov dword ptr ss : [ebp+0x4C], edi
        public_4f98d7 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        push esi
        je public_4f992b
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_4f992b
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f992b
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, edi
        jne public_4f9915
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f9915 : nop
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x10]
        push ebx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x4C]
        jmp public_4f9930
        public_4f992b : nop
        lea ebx, ss:[ebp+0x10]
        mov esi, ebx
        public_4f9930 : nop
        lea edi, ss:[esp+0x1C]
        mov ecx, 0xC
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        mov edi, ebx
        rep movsd
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        pop esi
        public_4f9950 : nop
        fld dword ptr ss : [ebp+0x7C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_4f9970
        fld dword ptr ss : [ebp+0x7C]
        fcomp dword ptr ds : [public_6129cc]
        fnstsw ax
        test ah, 0x41
        jne public_4f9978
        public_4f9970 : nop
        mov eax, dword ptr ds : [public_6129cc]
        mov dword ptr ss : [ebp+0x7C], eax
        public_4f9978 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x4f97a0)
    }
}

#undef public_4f97e9
#undef public_4f97ec
#undef public_4f97f1
#undef public_4f97f4
#undef public_4f980a
#undef public_4f983d
#undef public_4f9840
#undef public_4f9845
#undef public_4f9848
#undef public_4f9862
#undef public_4f9888
#undef public_4f9897
#undef public_4f98ce
#undef public_4f98d7
#undef public_4f9915
#undef public_4f992b
#undef public_4f9930
#undef public_4f9950
#undef public_4f9970
#undef public_4f9978
