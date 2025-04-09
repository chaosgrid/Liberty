#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412010);
CLANG_FORWARD_PROC_SYMBOL(public_4121d0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f8ff1 _public_4f8ff1
#define public_4f902e _public_4f902e
#define public_4f9097 _public_4f9097
#define public_4f90af _public_4f90af
#define public_4f90b2 _public_4f90b2
#define public_4f90b7 _public_4f90b7
#define public_4f90ba _public_4f90ba
#define public_4f90d4 _public_4f90d4
#define public_4f90e0 _public_4f90e0
#define public_4f9116 _public_4f9116
#define public_4f911f _public_4f911f
#define public_4f915e _public_4f915e
#define public_4f9174 _public_4f9174
#define public_4f9179 _public_4f9179
#define public_4f919a _public_4f919a
#define public_4f919e _public_4f919e

PROC_DECLARE(0x4f8fd0, internal_4f8fd0, public_4f8fd0);
extern "C" NAKED register_t __cdecl internal_4f8fd0()
{
    __asm
    {
        sub esp, 0x6C
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x74]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_4f8ff1
        cmp eax, dword ptr ss : [esp+0x7C]
        je public_4f8ff1
        fld dword ptr ds : [public_5d9a74]
        fadd st(0), st
        fstp dword ptr ss : [ebp+0x6C]
        public_4f8ff1 : nop
        call public_412010
        test al, al
        mov byte ptr ss : [esp+0x7C], al
        jne public_4f902e
        fld dword ptr ss : [ebp+0x6C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4f919e
        fld dword ptr ss : [ebp+0x6C]
        fsub dword ptr ss : [esp+0x78]
        fst dword ptr ss : [ebp+0x6C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4f9097
        mov byte ptr ss : [esp+0x7C], 1
        public_4f902e : nop
        mov ecx, dword ptr ds : [public_5d9a74]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x70]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        push eax
        push ecx
        push edx
        call public_4121d0
        mov eax, dword ptr ss : [ebp+0x68]
        add esp, 0xC
        cmp eax, edi
        jne public_4f90ba
        test byte ptr ss : [ebp+8], 2
        jne public_4f90ba
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f90b7
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f90af
        mov dword ptr ds : [edx], eax
        jmp public_4f90b2
        public_4f9097 : nop
        mov byte ptr ss : [esp+0x7C], 0
        mov cl, byte ptr ss : [esp+0x7C]
        xor eax, eax
        test cl, cl
        pop edi
        sete al
        pop ebp
        add esp, 0x6C
        ret 8
        public_4f90af : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f90b2 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f90b7 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f90ba : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f919a
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        je public_4f90d4
        add eax, 0xFFFFFFF8
        cmp eax, edi
        jne public_4f90e0
        public_4f90d4 : nop
        mov ecx, ebp
        call public_4f7bd0
        jmp public_4f919a
        public_4f90e0 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, edi
        je public_4f9116
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
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
        jmp public_4f911f
        public_4f9116 : nop
        mov dword ptr ss : [ebp+0x54], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov dword ptr ss : [ebp+0x4C], edi
        public_4f911f : nop
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        push ebx
        push esi
        je public_4f9174
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_4f9174
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f9174
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, edi
        jne public_4f915e
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f915e : nop
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x10]
        push ebx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x4C]
        jmp public_4f9179
        public_4f9174 : nop
        lea ebx, ss:[ebp+0x10]
        mov esi, ebx
        public_4f9179 : nop
        lea edi, ss:[esp+0x1C]
        mov ecx, 0xC
        rep movsd
        mov edi, ebx
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        rep movsd
        pop esi
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        pop ebx
        public_4f919a : nop
        or byte ptr ss : [ebp+8], 2
        public_4f919e : nop
        mov cl, byte ptr ss : [esp+0x7C]
        xor eax, eax
        test cl, cl
        pop edi
        sete al
        pop ebp
        add esp, 0x6C
        ret 8
        UNREACHABLE_TRAP(0x4f8fd0)
    }
}

#undef public_4f8ff1
#undef public_4f902e
#undef public_4f9097
#undef public_4f90af
#undef public_4f90b2
#undef public_4f90b7
#undef public_4f90ba
#undef public_4f90d4
#undef public_4f90e0
#undef public_4f9116
#undef public_4f911f
#undef public_4f915e
#undef public_4f9174
#undef public_4f9179
#undef public_4f919a
#undef public_4f919e
