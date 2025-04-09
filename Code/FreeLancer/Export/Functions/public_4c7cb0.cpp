#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_4c7cb0);
CLANG_FORWARD_PROC_SYMBOL(public_53e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59daa0);

#define public_4c7cf8 _public_4c7cf8
#define public_4c7d09 _public_4c7d09
#define public_4c7d22 _public_4c7d22
#define public_4c7d24 _public_4c7d24
#define public_4c7d3f _public_4c7d3f
#define public_4c7d59 _public_4c7d59
#define public_4c7d7c _public_4c7d7c
#define public_4c7d83 _public_4c7d83
#define public_4c7dba _public_4c7dba
#define public_4c7dcd _public_4c7dcd
#define public_4c7df1 _public_4c7df1
#define public_4c7df7 _public_4c7df7
#define public_4c7dfd _public_4c7dfd
#define public_4c7e63 _public_4c7e63
#define public_4c7e76 _public_4c7e76
#define public_4c7e99 _public_4c7e99
#define public_4c7e9f _public_4c7e9f
#define public_4c7ecd _public_4c7ecd
#define public_4c7ee6 _public_4c7ee6
#define public_4c7f1e _public_4c7f1e
#define public_4c7f2c _public_4c7f2c
#define public_4c7f54 _public_4c7f54
#define public_4c7f67 _public_4c7f67
#define public_4c7f8b _public_4c7f8b
#define public_4c7f91 _public_4c7f91
#define public_4c7fdd _public_4c7fdd
#define public_4c803a _public_4c803a
#define public_4c807e _public_4c807e

PROC_DECLARE(0x4c7cb0, internal_4c7cb0, public_4c7cb0);
extern "C" NAKED register_t __cdecl internal_4c7cb0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        push edi
        call public_54baf0
        mov edi, dword ptr ds : [public_5c62e8]
        xor esi, esi
        xor edx, edx
        test eax, eax
        je public_4c7cf8
        add eax, 0xC
        test eax, eax
        je public_4c7d7c
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4c7d7c
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4c7d7c
        mov esi, ecx
        call edi
        mov edx, eax
        public_4c7cf8 : nop
        xor bl, bl
        test edx, edx
        je public_4c7d09
        mov al, byte ptr ds : [edx+0x168]
        test al, al
        sete bl
        public_4c7d09 : nop
        call public_41a3e0
        test al, al
        jne public_4c7d22
        test esi, esi
        je public_4c7d24
        mov ecx, esi
        call dword ptr ds : [public_5c64a0]
        test al, al
        je public_4c7d24
        public_4c7d22 : nop
        mov bl, 1
        public_4c7d24 : nop
        mov ecx, dword ptr ds : [public_616850]
        mov al, byte ptr ds : [public_67354c]
        and ecx, 1
        cmp cl, 1
        je public_4c7d3f
        test al, al
        je public_4c7fdd
        public_4c7d3f : nop
        test bl, bl
        jne public_4c7fdd
        mov cl, byte ptr ds : [public_673555]
        test cl, cl
        jne public_4c7d59
        test al, al
        je public_4c807e
        public_4c7d59 : nop
        mov al, byte ptr ds : [public_673554]
        test al, al
        jne public_4c7d83
        call public_59daa0
        test eax, eax
        je public_4c7d83
        pop edi
        pop esi
        mov dword ptr ds : [public_673550], 0
        pop ebx
        add esp, 0x18
        ret 
        public_4c7d7c : nop
        xor esi, esi
        jmp public_4c7cf8
        public_4c7d83 : nop
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_4c7dfd
        fild dword ptr ds : [public_616840]
        fstp dword ptr ds : [public_673558]
        call public_45a470
        test al, al
        jne public_4c7dba
        mov dl, byte ptr ds : [public_67354c]
        test dl, dl
        sete al
        test al, al
        je public_4c7dcd
        public_4c7dba : nop
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        jne public_4c7df1
        public_4c7dcd : nop
        push 0x17
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4c7df1
        mov edx, dword ptr ds : [public_610854]
        sub edx, dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        jmp public_4c7df7
        public_4c7df1 : nop
        fild dword ptr ds : [public_616844]
        public_4c7df7 : nop
        fstp dword ptr ds : [public_67355c]
        public_4c7dfd : nop
        call public_42d680
        fadd dword ptr ds : [public_673550]
        fst dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        jne public_4c7f2c
        fild dword ptr ds : [public_610850]
        fmul dword ptr ds : [public_5c75e0]
        fild dword ptr ds : [public_616840]
        fsub st, st(1)
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fild dword ptr ds : [public_610854]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0xC]
        call public_45a470
        test al, al
        jne public_4c7e63
        mov dl, byte ptr ds : [public_67354c]
        test dl, dl
        sete al
        test al, al
        je public_4c7e76
        public_4c7e63 : nop
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        jne public_4c7e99
        public_4c7e76 : nop
        push 0x17
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4c7e99
        mov eax, dword ptr ds : [public_610854]
        sub eax, dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        jmp public_4c7e9f
        public_4c7e99 : nop
        fild dword ptr ds : [public_616844]
        public_4c7e9f : nop
        fsub dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_4c7ecd
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4c7ee6
        public_4c7ecd : nop
        mov eax, dword ptr ds : [public_674aa0]
        mov cl, byte ptr ds : [eax+0x5B9]
        test cl, cl
        jne public_4c7f1e
        mov cl, byte ptr ds : [eax+0x5BA]
        test cl, cl
        jne public_4c7f1e
        public_4c7ee6 : nop
        call public_54baf0
        push eax
        call dword ptr ds : [public_5c6470]
        add esp, 4
        test eax, eax
        je public_4c7f1e
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_5c646c]
        public_4c7f1e : nop
        pop edi
        pop esi
        mov byte ptr ds : [public_673554], 1
        pop ebx
        add esp, 0x18
        ret 
        public_4c7f2c : nop
        fild dword ptr ds : [public_616840]
        fsub dword ptr ds : [public_673558]
        fstp dword ptr ss : [esp+0x10]
        call public_45a470
        test al, al
        jne public_4c7f54
        mov dl, byte ptr ds : [public_67354c]
        test dl, dl
        sete al
        test al, al
        je public_4c7f67
        public_4c7f54 : nop
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        jne public_4c7f8b
        public_4c7f67 : nop
        push 0x17
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4c7f8b
        mov edx, dword ptr ds : [public_610854]
        sub edx, dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        jmp public_4c7f91
        public_4c7f8b : nop
        fild dword ptr ds : [public_616844]
        public_4c7f91 : nop
        fsub dword ptr ds : [public_67355c]
        fild dword ptr ds : [public_610850]
        fdivr dword ptr ds : [public_5d6e20]
        fmul dword ptr ds : [public_5d440c]
        fld st(1)
        fmul st, st(2)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_4c807e
        mov eax, dword ptr ds : [public_612270]
        pop edi
        pop esi
        mov dword ptr ds : [public_673550], eax
        pop ebx
        add esp, 0x18
        ret 
        public_4c7fdd : nop
        mov al, byte ptr ds : [public_673554]
        test al, al
        mov dword ptr ds : [public_673550], 0
        je public_4c807e
        mov byte ptr ds : [public_673554], 0
        mov byte ptr ds : [public_673555], 0
        call public_54baf0
        push eax
        call dword ptr ds : [public_5c6470]
        add esp, 4
        test eax, eax
        je public_4c803a
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_5c646c]
        public_4c803a : nop
        call public_54baf0
        test eax, eax
        je public_4c807e
        add eax, 0xC
        test eax, eax
        je public_4c807e
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4c807e
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_4c807e
        call edi
        test eax, eax
        je public_4c807e
        cmp dword ptr ds : [eax+0xC0], 0x12
        jne public_4c807e
        mov ecx, dword ptr ds : [public_674a58]
        push 0
        call public_53e4a0
        public_4c807e : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4c7cb0)
    }
}

#undef public_4c7cf8
#undef public_4c7d09
#undef public_4c7d22
#undef public_4c7d24
#undef public_4c7d3f
#undef public_4c7d59
#undef public_4c7d7c
#undef public_4c7d83
#undef public_4c7dba
#undef public_4c7dcd
#undef public_4c7df1
#undef public_4c7df7
#undef public_4c7dfd
#undef public_4c7e63
#undef public_4c7e76
#undef public_4c7e99
#undef public_4c7e9f
#undef public_4c7ecd
#undef public_4c7ee6
#undef public_4c7f1e
#undef public_4c7f2c
#undef public_4c7f54
#undef public_4c7f67
#undef public_4c7f8b
#undef public_4c7f91
#undef public_4c7fdd
#undef public_4c803a
#undef public_4c807e
