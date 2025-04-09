#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417f10);
CLANG_FORWARD_PROC_SYMBOL(public_41b2e0);
CLANG_FORWARD_PROC_SYMBOL(public_4214d0);
CLANG_FORWARD_PROC_SYMBOL(public_4215e0);
CLANG_FORWARD_PROC_SYMBOL(public_424cb0);
CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_578f70);
CLANG_FORWARD_PROC_SYMBOL(public_59e500);
CLANG_FORWARD_PROC_SYMBOL(public_59e5a0);

#define public_578fa4 _public_578fa4
#define public_578fba _public_578fba
#define public_578fdb _public_578fdb
#define public_57902d _public_57902d
#define public_579056 _public_579056
#define public_579071 _public_579071
#define public_579073 _public_579073
#define public_57908a _public_57908a
#define public_579090 _public_579090
#define public_579096 _public_579096
#define public_5790be _public_5790be
#define public_5790ed _public_5790ed
#define public_5790f3 _public_5790f3
#define public_579109 _public_579109

PROC_DECLARE(0x578f70, internal_578f70, public_578f70);
extern "C" NAKED register_t __cdecl internal_578f70()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x23]
        test al, al
        jne public_579109
        call dword ptr ds : [public_5c6c08]
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], edx
        call public_424cb0
        test al, al
        je public_579109
        mov cl, byte ptr ds : [esi+0x20]
        test cl, cl
        je public_578fa4
        call public_424f30
        public_578fa4 : nop
        test al, al
        je public_579109
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_578fba
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        jmp public_578fdb
        public_578fba : nop
        mov al, byte ptr ds : [esi+0x21]
        test al, al
        je public_578fdb
        push 0
        push 0
        push 0
        push 0
        call public_4214d0
        push 0x4100
        call public_4215e0
        add esp, 0x14
        public_578fdb : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_5790f3
        mov al, byte ptr ds : [esi+0x22]
        test al, al
        je public_5790f3
        mov al, byte ptr ds : [public_67c3e0]
        test al, al
        je public_5790f3
        call public_59e500
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        mov ecx, dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 5
        jp public_57902d
        mov dword ptr ds : [ecx+0x330], 0
        mov dword ptr ds : [ecx+0x334], 0
        jmp public_579096
        public_57902d : nop
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+0x338]
        fadd dword ptr ds : [ecx+0x330]
        mov dword ptr ss : [esp+4], edx
        fcom dword ptr ss : [esp+4]
        fst dword ptr ds : [ecx+0x330]
        fnstsw ax
        test ah, 0x41
        jne public_579071
        fld dword ptr ss : [esp+4]
        public_579056 : nop
        fxch 
        fsub st, st(1)
        fxch 
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_579056
        fstp st(0)
        fstp dword ptr ds : [ecx+0x330]
        jmp public_579073
        public_579071 : nop
        fstp st(0)
        public_579073 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_57908a
        fld dword ptr ss : [esp+0xC]
        jmp public_579090
        public_57908a : nop
        fld dword ptr ds : [public_5c75dc]
        public_579090 : nop
        fstp dword ptr ds : [ecx+0x334]
        public_579096 : nop
        push edi
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+0x380]
        test eax, eax
        je public_5790be
        mov eax, dword ptr ds : [edi+0x334]
        push eax
        call public_41b2e0
        mov ecx, dword ptr ds : [edi+0x380]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        call dword ptr ds : [edx+0x34]
        public_5790be : nop
        mov ecx, dword ptr ds : [edi+0x33C]
        test ecx, ecx
        je public_5790ed
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x33C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x34]
        public_5790ed : nop
        call public_59e5a0
        pop edi
        public_5790f3 : nop
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        je public_579109
        call public_417f10
        call public_425080
        call public_425140
        public_579109 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x578f70)
    }
}

#undef public_578fa4
#undef public_578fba
#undef public_578fdb
#undef public_57902d
#undef public_579056
#undef public_579071
#undef public_579073
#undef public_57908a
#undef public_579090
#undef public_579096
#undef public_5790be
#undef public_5790ed
#undef public_5790f3
#undef public_579109
