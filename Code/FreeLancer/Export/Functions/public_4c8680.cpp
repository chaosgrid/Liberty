#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b10);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b80);
CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);
CLANG_FORWARD_PROC_SYMBOL(public_53eb10);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e500);
CLANG_FORWARD_PROC_SYMBOL(public_59e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4c86c5 _public_4c86c5
#define public_4c86da _public_4c86da
#define public_4c86dc _public_4c86dc
#define public_4c870f _public_4c870f
#define public_4c875d _public_4c875d
#define public_4c8770 _public_4c8770
#define public_4c8794 _public_4c8794
#define public_4c879a _public_4c879a
#define public_4c886e _public_4c886e
#define public_4c8885 _public_4c8885
#define public_4c88a3 _public_4c88a3
#define public_4c88b6 _public_4c88b6
#define public_4c88da _public_4c88da
#define public_4c88e0 _public_4c88e0
#define public_4c89d7 _public_4c89d7
#define public_4c8a08 _public_4c8a08
#define public_4c8a67 _public_4c8a67
#define public_4c8af7 _public_4c8af7
#define public_4c8afd _public_4c8afd

PROC_DECLARE(0x4c8680, internal_4c8680, public_4c8680);
extern "C" NAKED register_t __cdecl internal_4c8680()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov bl, 1
        call public_54baf0
        test eax, eax
        je public_4c86dc
        add eax, 0xC
        test eax, eax
        je public_4c86dc
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4c86dc
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4c86dc
        mov ecx, esi
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_4c86c5
        mov bl, byte ptr ds : [eax+0x168]
        public_4c86c5 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c64a0]
        test al, al
        jne public_4c86da
        call public_41a3e0
        test al, al
        je public_4c86dc
        public_4c86da : nop
        xor bl, bl
        public_4c86dc : nop
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        je public_4c870f
        call public_45a470
        test al, al
        jne public_4c8afd
        mov dl, byte ptr ds : [public_67354c]
        test dl, dl
        sete al
        test al, al
        jne public_4c8afd
        public_4c870f : nop
        mov eax, dword ptr ds : [public_674aa0]
        mov cl, byte ptr ds : [eax+0x5B9]
        test cl, cl
        jne public_4c8afd
        mov cl, byte ptr ds : [eax+0x5BA]
        test cl, cl
        jne public_4c8afd
        call public_42d740
        test al, al
        jne public_4c8afd
        test bl, bl
        je public_4c8afd
        call public_45a470
        test al, al
        jne public_4c875d
        mov dl, byte ptr ds : [public_67354c]
        test dl, dl
        sete al
        test al, al
        je public_4c8770
        public_4c875d : nop
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        jne public_4c8794
        public_4c8770 : nop
        push 0x17
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4c8794
        mov ecx, dword ptr ds : [public_610854]
        sub ecx, dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        jmp public_4c879a
        public_4c8794 : nop
        fild dword ptr ds : [public_616844]
        public_4c879a : nop
        mov edx, dword ptr ds : [public_616840]
        mov eax, dword ptr ds : [public_610850]
        mov dword ptr ss : [esp+0x14], edx
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_610854]
        fild dword ptr ss : [esp+0x10]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x18]
        push 0
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [ebp+0x40]
        fimul dword ptr ds : [public_610850]
        fmul dword ptr ds : [public_5c8d30]
        fstp dword ptr ss : [esp+0x10]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        sub esp, 8
        lea ecx, ss:[esp+0x9C]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x38]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x18]
        add esp, 8
        fchs 
        lea eax, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_4c8b10
        fld dword ptr ss : [ebp+0x3C]
        fdiv dword ptr ss : [ebp+0x40]
        add esp, 0xC
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0xC]
        call public_410190
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4c886e
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_4c886e : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jp public_4c8885
        mov dword ptr ss : [esp+0x14], 0
        public_4c8885 : nop
        mov esi, dword ptr ds : [public_616840]
        call public_45a470
        test al, al
        jne public_4c88a3
        mov dl, byte ptr ds : [public_67354c]
        test dl, dl
        sete al
        test al, al
        je public_4c88b6
        public_4c88a3 : nop
        fld dword ptr ds : [public_673550]
        fcomp dword ptr ds : [public_612270]
        fnstsw ax
        test ah, 1
        jne public_4c88da
        public_4c88b6 : nop
        push 0x17
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4c88da
        mov edx, dword ptr ds : [public_610854]
        sub edx, dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0xC]
        jmp public_4c88e0
        public_4c88da : nop
        fild dword ptr ds : [public_616844]
        public_4c88e0 : nop
        mov eax, dword ptr ds : [public_610854]
        cdq 
        sub eax, edx
        push edi
        mov edi, eax
        sar edi, 1
        call public_5b7ec0
        sub edi, eax
        mov eax, dword ptr ds : [public_610850]
        cdq 
        sub eax, edx
        mov dword ptr ss : [esp+0x10], edi
        sar eax, 1
        fild dword ptr ss : [esp+0x10]
        sub esp, 8
        sub esi, eax
        mov dword ptr ss : [esp+0x18], esi
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_53eb10
        fchs 
        add esp, 8
        fstp dword ptr ss : [esp+0x14]
        call public_59e500
        movzx eax, byte ptr ds : [public_679bb4]
        mov dword ptr ss : [esp+0x10], eax
        push 0
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [ebp+0x60]
        movzx ecx, byte ptr ds : [public_679bb5]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x74]
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [ebp+0x64]
        movzx edx, byte ptr ds : [public_679bb6]
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [ebp+0x68]
        movzx eax, byte ptr ds : [public_679bb7]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [ebp+0x70]
        call public_4c8b40
        push 0
        lea ecx, ss:[esp+0x74]
        call public_4c8b80
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5d6ee0]
        push ecx
        lea ecx, ss:[esp+0x74]
        fstp dword ptr ss : [esp]
        call public_4c8bc0
        fld dword ptr ds : [public_5d6edc]
        mov dword ptr ss : [esp+0x14], 0x3E19999A
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_4c8af7
        public_4c89d7 : nop
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_673548]
        test eax, eax
        fmul dword ptr ds : [public_5d6ed8]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x20]
        jne public_4c8a08
        call public_5b73e0
        mov dword ptr ds : [public_673548], eax
        public_4c8a08 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x70]
        lea edi, ss:[esp+0x40]
        rep movsd
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [public_673548]
        test eax, eax
        mov dword ptr ss : [esp+0x3C], 0xBF800000
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x6C], edx
        jne public_4c8a67
        call public_5b73e0
        mov dword ptr ds : [public_673548], eax
        public_4c8a67 : nop
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        fmul dword ptr ds : [public_5c75e0]
        push ecx
        lea edx, ss:[esp+0x44]
        fadd dword ptr ds : [public_5d3ee0]
        fstp dword ptr ss : [esp]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x4c8ad1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [public_5d6edc]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jnp public_4c89d7
        public_4c8af7 : nop
        call public_59e5a0
        pop edi
        public_4c8afd : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 8
        UNREACHABLE_TRAP(0x4c8680)
    }
}

#undef public_4c86c5
#undef public_4c86da
#undef public_4c86dc
#undef public_4c870f
#undef public_4c875d
#undef public_4c8770
#undef public_4c8794
#undef public_4c879a
#undef public_4c886e
#undef public_4c8885
#undef public_4c88a3
#undef public_4c88b6
#undef public_4c88da
#undef public_4c88e0
#undef public_4c89d7
#undef public_4c8a08
#undef public_4c8a67
#undef public_4c8af7
#undef public_4c8afd
