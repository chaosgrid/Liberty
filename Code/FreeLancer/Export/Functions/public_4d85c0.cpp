#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c7a00);
CLANG_FORWARD_PROC_SYMBOL(public_4c7af0);
CLANG_FORWARD_PROC_SYMBOL(public_4d88f0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4d8608 _public_4d8608
#define public_4d8621 _public_4d8621
#define public_4d862e _public_4d862e
#define public_4d8678 _public_4d8678

PROC_DECLARE(0x4d85c0, internal_4d85c0, public_4d85c0);
extern "C" NAKED register_t __cdecl internal_4d85c0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x3B0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4d862e
        call public_4c7a00
        fstp dword ptr ss : [esp+4]
        call public_42d680
        fmul dword ptr ds : [esi+0x3B0]
        fadd dword ptr ss : [esp+4]
        fst dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4d8608
        mov dword ptr ss : [esp+4], 0x3F800000
        public_4d8608 : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_4d8621
        mov dword ptr ss : [esp+4], 0
        public_4d8621 : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4c7af0
        add esp, 4
        public_4d862e : nop
        call public_41dd90
        test al, al
        je public_4d8678
        push 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d8678
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d8678
        call public_54baf0
        test eax, eax
        je public_4d8678
        call public_41a3e0
        test al, al
        jne public_4d8678
        lea ecx, ds:[esi-0x38]
        call public_4d88f0
        mov ecx, esi
        pop esi
        add esp, 4
        jmp public_5a17b0
        public_4d8678 : nop
        push 1
        mov ecx, esi
        call public_5a0c30
        mov ecx, esi
        pop esi
        add esp, 4
        jmp public_5a17b0
        UNREACHABLE_TRAP(0x4d85c0)
    }
}

#undef public_4d8608
#undef public_4d8621
#undef public_4d862e
#undef public_4d8678
