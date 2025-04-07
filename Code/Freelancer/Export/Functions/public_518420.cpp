#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_421090);
CLANG_FORWARD_PROC_SYMBOL(public_421120);
CLANG_FORWARD_PROC_SYMBOL(public_4215e0);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_4f70c0);
CLANG_FORWARD_PROC_SYMBOL(public_504870);
CLANG_FORWARD_PROC_SYMBOL(public_51c200);
CLANG_FORWARD_PROC_SYMBOL(public_51c970);
CLANG_FORWARD_PROC_SYMBOL(public_51c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_51daa0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5554d0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);

#define public_51847e _public_51847e
#define public_51848b _public_51848b
#define public_5184f4 _public_5184f4
#define public_518517 _public_518517
#define public_518547 _public_518547
#define public_51857c _public_51857c
#define public_5185b2 _public_5185b2
#define public_5185d8 _public_5185d8
#define public_5185ed _public_5185ed

PROC_DECLARE(0x518420, internal_518420, public_518420);
extern "C" NAKED register_t __cdecl internal_518420()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        je public_5185ed
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_5185ed
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebx
        push eax
        call public_51c200
/*FIXUP push offset public_5c78d4 @0x51844f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c78d4
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fst dword ptr ss : [esp+0x30]
        add esp, 4
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 0x41
        je public_51847e
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51848b
        public_51847e : nop
        push 0x100
        call public_4215e0
        add esp, 4
        public_51848b : nop
        mov ecx, esi
        call public_51c970
        fld dword ptr ss : [esp+0x2C]
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 0x41
        jne public_5185d8
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x20]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x24]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_5c8918]
        mov ecx, dword ptr ds : [public_5c8914]
        push eax
        push ecx
        mov ecx, esi
        call public_40fb60
        push esi
        call public_422950
        add esp, 4
        call public_54baf0
        mov edi, eax
        test edi, edi
        je public_518517
        mov eax, dword ptr ds : [edi+0x158]
        cmp eax, 2
        je public_5184f4
        cmp eax, 3
        jne public_518517
        public_5184f4 : nop
        call public_4101e0
        mov ecx, dword ptr ds : [edi+0x188]
        test ecx, ecx
        je public_51857c
        call public_504870
        test eax, eax
        je public_51857c
        push eax
        call public_410240
        add esp, 4
        jmp public_51857c
        public_518517 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+0x190]
        call public_421090
        fstp dword ptr ss : [esp+0x10]
        call public_4f70c0
        fcomp qword ptr ds : [public_5c8b68]
        mov byte ptr ss : [esp+0x30], 1
        fnstsw ax
        test ah, 1
        je public_518547
        mov byte ptr ss : [esp+0x30], 0
        public_518547 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [eax+0x18C]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        push esi
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_5554d0
        add esp, 0x18
        public_51857c : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0x3F800000
        push 0x3F400000
        push eax
        call dword ptr ds : [edx+0x5C]
        lea edi, ds:[esi+0x190]
        mov ecx, edi
        call public_420d60
        test al, al
        je public_5185b2
        push 0x100
        push esi
        mov ecx, edi
        call public_421120
        public_5185b2 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x3F400000
        push 0
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov ecx, esi
        call public_40fb60
        pop edi
        public_5185d8 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        push ecx
        mov ecx, esi
        call public_51daa0
        mov ecx, esi
        call public_51c9e0
        pop ebx
        public_5185ed : nop
        pop esi
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x518420)
    }
}

#undef public_51847e
#undef public_51848b
#undef public_5184f4
#undef public_518517
#undef public_518547
#undef public_51857c
#undef public_5185b2
#undef public_5185d8
#undef public_5185ed
