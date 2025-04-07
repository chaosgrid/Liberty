#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35190);

#define public_6f351e2 _public_6f351e2
#define public_6f3521a _public_6f3521a
#define public_6f35235 _public_6f35235
#define public_6f35244 _public_6f35244
#define public_6f3527c _public_6f3527c
#define public_6f35297 _public_6f35297
#define public_6f352a6 _public_6f352a6
#define public_6f352c1 _public_6f352c1
#define public_6f352e7 _public_6f352e7

PROC_DECLARE(0x6f35190, internal_6f35190, public_6f35190);
extern "C" NAKED register_t __cdecl internal_6f35190()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        je public_6f352e7
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, esi
        sar eax, 3
        test eax, eax
        je public_6f352e7
        cmp esi, ecx
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x20], 0
        je public_6f352c1
        push ebx
        mov ebx, dword ptr ds : [public_6fb3474]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        public_6f351e2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call ebx
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_6fb95c0]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        jne public_6f3521a
        mov eax, 1
        jmp public_6f35235
        public_6f3521a : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6fb95bc]
        fnstsw ax
        test ah, 0x41
        mov eax, 2
        je public_6f35235
        mov eax, 4
        public_6f35235 : nop
        test al, 4
        je public_6f35244
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x10]
        public_6f35244 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call ebx
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6fb95c0]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        jne public_6f3527c
        mov eax, 1
        jmp public_6f35297
        public_6f3527c : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb95bc]
        fnstsw ax
        test ah, 0x41
        mov eax, 2
        je public_6f35297
        mov eax, 4
        public_6f35297 : nop
        test al, 4
        je public_6f352a6
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        public_6f352a6 : nop
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp+8]
        fadd dword ptr ds : [esi+4]
        add esi, 8
        cmp esi, eax
        fstp dword ptr ss : [esp+0x28]
        jne public_6f351e2
        pop edi
        pop ebx
        public_6f352c1 : nop
        fld dword ptr ds : [public_6fb5810]
        mov ecx, dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x2C]
        pop esi
        pop ebp
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ds : [edx]
        add esp, 0x14
        ret 
        public_6f352e7 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        pop esi
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx], 0
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f35190)
    }
}

#undef public_6f351e2
#undef public_6f3521a
#undef public_6f35235
#undef public_6f35244
#undef public_6f3527c
#undef public_6f35297
#undef public_6f352a6
#undef public_6f352c1
#undef public_6f352e7
