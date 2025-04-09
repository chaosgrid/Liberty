#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7db0);
CLANG_FORWARD_PROC_SYMBOL(public_4fc920);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f8519 _public_4f8519
#define public_4f851c _public_4f851c
#define public_4f8521 _public_4f8521
#define public_4f8524 _public_4f8524
#define public_4f853a _public_4f853a
#define public_4f856d _public_4f856d
#define public_4f8570 _public_4f8570
#define public_4f8575 _public_4f8575
#define public_4f8578 _public_4f8578
#define public_4f8592 _public_4f8592
#define public_4f85b8 _public_4f85b8
#define public_4f85c7 _public_4f85c7
#define public_4f85fe _public_4f85fe
#define public_4f8607 _public_4f8607
#define public_4f8645 _public_4f8645
#define public_4f865b _public_4f865b
#define public_4f8660 _public_4f8660
#define public_4f8680 _public_4f8680
#define public_4f86a0 _public_4f86a0
#define public_4f86a7 _public_4f86a7

PROC_DECLARE(0x4f84d0, internal_4f84d0, public_4f84d0);
extern "C" NAKED register_t __cdecl internal_4f84d0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x6C]
        push edi
        xor edi, edi
        cmp eax, edi
        mov eax, dword ptr ss : [ebp+0x68]
        mov bl, 2
        jne public_4f853a
        cmp eax, edi
        jne public_4f8524
        test byte ptr ss : [ebp+8], bl
        jne public_4f8524
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f8521
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f8519
        mov dword ptr ds : [edx], eax
        jmp public_4f851c
        public_4f8519 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f851c : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f8521 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f8524 : nop
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
        public_4f853a : nop
        cmp eax, edi
        jne public_4f8578
        test byte ptr ss : [ebp+8], bl
        jne public_4f8578
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f8575
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f856d
        mov dword ptr ds : [edx], eax
        jmp public_4f8570
        public_4f856d : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f8570 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f8575 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f8578 : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f8680
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        je public_4f8592
        add eax, 0xFFFFFFF8
        cmp eax, edi
        jne public_4f85c7
        public_4f8592 : nop
        cmp dword ptr ss : [ebp+0x68], edi
        jne public_4f85b8
        test byte ptr ss : [ebp+8], bl
        jne public_4f85b8
        lea eax, ss:[ebp+0x60]
        push eax
        mov eax, dword ptr ss : [ebp+0x5C]
        lea ecx, ds:[eax+eax*2]
        lea ecx, ds : [ecx*4+public_674ce0]
        mov dword ptr ss : [ebp+0x68], ebp
        call public_4fc920
        inc dword ptr ss : [ebp+0x58]
        public_4f85b8 : nop
        mov ecx, ebp
        call public_4f7db0
        or byte ptr ss : [ebp+8], bl
        jmp public_4f8680
        public_4f85c7 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, edi
        je public_4f85fe
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
        jmp public_4f8607
        public_4f85fe : nop
        mov dword ptr ss : [ebp+0x54], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov dword ptr ss : [ebp+0x4C], edi
        public_4f8607 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        push esi
        je public_4f865b
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_4f865b
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f865b
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, edi
        jne public_4f8645
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f8645 : nop
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x10]
        push ebx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x4C]
        jmp public_4f8660
        public_4f865b : nop
        lea ebx, ss:[ebp+0x10]
        mov esi, ebx
        public_4f8660 : nop
        lea edi, ss:[esp+0x1C]
        mov ecx, 0xC
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        mov edi, ebx
        rep movsd
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        pop esi
        public_4f8680 : nop
        fld dword ptr ss : [ebp+0x78]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_4f86a0
        fld dword ptr ss : [ebp+0x78]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4f86a7
        public_4f86a0 : nop
        mov dword ptr ss : [ebp+0x78], 0x3F800000
        public_4f86a7 : nop
        mov ebp, dword ptr ss : [ebp+0x6C]
        mov eax, dword ptr ss : [ebp]
        push 1
        push ebp
        call dword ptr ds : [eax+0x34]
        pop edi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x4f84d0)
    }
}

#undef public_4f8519
#undef public_4f851c
#undef public_4f8521
#undef public_4f8524
#undef public_4f853a
#undef public_4f856d
#undef public_4f8570
#undef public_4f8575
#undef public_4f8578
#undef public_4f8592
#undef public_4f85b8
#undef public_4f85c7
#undef public_4f85fe
#undef public_4f8607
#undef public_4f8645
#undef public_4f865b
#undef public_4f8660
#undef public_4f8680
#undef public_4f86a0
#undef public_4f86a7
