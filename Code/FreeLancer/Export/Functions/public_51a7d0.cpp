#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c80);
CLANG_FORWARD_PROC_SYMBOL(public_516fe0);
CLANG_FORWARD_PROC_SYMBOL(public_51a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_51dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_51a840 _public_51a840
#define public_51a842 _public_51a842
#define public_51a8a5 _public_51a8a5
#define public_51a8d1 _public_51a8d1
#define public_51a943 _public_51a943
#define public_51a947 _public_51a947
#define public_51a969 _public_51a969
#define public_51a9a6 _public_51a9a6
#define public_51a9d3 _public_51a9d3
#define public_51a9d5 _public_51a9d5
#define public_51a9f8 _public_51a9f8
#define public_51a9fa _public_51a9fa
#define public_51aa2e _public_51aa2e
#define public_51aa47 _public_51aa47
#define public_51aa7b _public_51aa7b
#define public_51aaa5 _public_51aaa5
#define public_51aaf0 _public_51aaf0
#define public_51ab66 _public_51ab66
#define public_51aba4 _public_51aba4
#define public_51aba6 _public_51aba6
#define public_51ac12 _public_51ac12

PROC_DECLARE(0x51a7d0, internal_51a7d0, public_51a7d0);
extern "C" NAKED register_t __cdecl internal_51a7d0()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_51ac12
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51ac12
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_51ac12
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51ac12
        add eax, 0xC
        test eax, eax
        je public_51ac12
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_51ac12
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_51ac12
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_51a840
        lea ecx, ds:[eax-8]
        jmp public_51a842
        public_51a840 : nop
        xor ecx, ecx
        public_51a842 : nop
        mov edx, dword ptr ds : [ecx]
        push ebp
        push esi
        push edi
        call dword ptr ds : [edx+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [public_616850]
        and eax, 1
        cmp al, 1
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        je public_51a8d1
        call public_4c7c80
        test al, al
        jne public_51a8d1
        fld dword ptr ds : [ebx+0x11C]
        mov dword ptr ds : [ebx+0x134], 0
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_51a8a5
        fld dword ptr ds : [ebx+0x128]
        fmul dword ptr ds : [ebx+0x11C]
        fmul dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x10]
        public_51a8a5 : nop
        fld dword ptr ds : [ebx+0x120]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_51a943
        fld dword ptr ds : [ebx+0x12C]
        fmul dword ptr ds : [ebx+0x120]
        fmul dword ptr ss : [esp+0x8C]
        jmp public_51a947
        public_51a8d1 : nop
        call public_42d680
        fadd dword ptr ds : [ebx+0x134]
        fst dword ptr ds : [ebx+0x134]
        fcomp dword ptr ds : [public_5c94f8]
        fnstsw ax
        test ah, 1
        jne public_51a9fa
        fild dword ptr ds : [public_610850]
        fmul dword ptr ds : [public_5c75e0]
        fild dword ptr ds : [public_610854]
        fmul dword ptr ds : [public_5c75e0]
        fild dword ptr ds : [public_616840]
        fsub st, st(2)
        fdiv st, st(2)
        fmul dword ptr ds : [ebx+0x128]
        fmul dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x10]
        fild dword ptr ds : [public_616844]
        fsub st, st(1)
        fdiv st, st(1)
        fmul dword ptr ds : [ebx+0x12C]
        fmul dword ptr ss : [esp+0x8C]
        fstp st(2)
        fstp st(0)
        jmp public_51a947
        public_51a943 : nop
        fld dword ptr ss : [esp+0x14]
        public_51a947 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_51a969
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_51a9f8
        public_51a969 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+0x110]
        fcom dword ptr ds : [public_5da774]
        fst dword ptr ds : [ebx+0x110]
        fnstsw ax
        test ah, 0x41
        jne public_51a9a6
        fsub dword ptr ds : [public_5da774]
        fstp dword ptr ds : [ebx+0x110]
        fld dword ptr ds : [ebx+0x10C]
        fsub dword ptr ds : [public_5da774]
        fstp dword ptr ds : [ebx+0x10C]
        jmp public_51a9d5
        public_51a9a6 : nop
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_51a9d3
        fadd dword ptr ds : [public_5da774]
        fstp dword ptr ds : [ebx+0x110]
        fld dword ptr ds : [ebx+0x10C]
        fadd dword ptr ds : [public_5da774]
        fstp dword ptr ds : [ebx+0x10C]
        jmp public_51a9d5
        public_51a9d3 : nop
        fstp st(0)
        public_51a9d5 : nop
        fadd dword ptr ds : [ebx+0x118]
        fcom dword ptr ds : [public_5dbe10]
        fst dword ptr ds : [ebx+0x118]
        fnstsw ax
        test ah, 0x41
        jne public_51aa2e
        mov dword ptr ds : [ebx+0x118], 0x3F860A92
        public_51a9f8 : nop
        fstp st(0)
        public_51a9fa : nop
        fld dword ptr ss : [esp+0x8C]
        fmul dword ptr ds : [ebx+0x130]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_51aa47
        mov ecx, dword ptr ds : [ebx+0x110]
        mov edx, dword ptr ds : [ebx+0x118]
        mov dword ptr ds : [ebx+0x10C], ecx
        mov dword ptr ds : [ebx+0x114], edx
        jmp public_51aa7b
        public_51aa2e : nop
        fcomp dword ptr ds : [public_5dbe0c]
        fnstsw ax
        test ah, 5
        jp public_51a9fa
        mov dword ptr ds : [ebx+0x118], 0xBF860A92
        jmp public_51a9fa
        public_51aa47 : nop
        fld dword ptr ds : [ebx+0x110]
        fsub dword ptr ds : [ebx+0x10C]
        fmul st, st(1)
        fadd dword ptr ds : [ebx+0x10C]
        fstp dword ptr ds : [ebx+0x10C]
        fld dword ptr ds : [ebx+0x118]
        fsub dword ptr ds : [ebx+0x114]
        fmul st, st(1)
        fadd dword ptr ds : [ebx+0x114]
        fstp dword ptr ds : [ebx+0x114]
        public_51aa7b : nop
        fstp st(0)
        mov ecx, 9
        fld dword ptr ds : [ebx+0x10C]
        mov esi, ebp
        fchs 
        lea edi, ss:[esp+0x30]
        fld st(0)
        rep movsd
        fcos 
        lea eax, ss:[esp+0x38]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x10]
        fsin 
        public_51aaa5 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_51aaa5
        fstp st(0)
        lea eax, ss:[esp+0x38]
        fld dword ptr ds : [ebx+0x114]
        mov ecx, 3
        fchs 
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        lea esp, ss:[esp]
        public_51aaf0 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_51aaf0
        fstp st(0)
        lea eax, ss:[esp+0x24]
        fld dword ptr ss : [ebp+4]
        push eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [ebp+0x10]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+0x1C]
        push ecx
        lea edx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x34]
        push edx
        call public_516fe0
        add esp, 0xC
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, ebx
        call public_51dbd0
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_51ab66
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51ab66 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x100]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ebx, dword ptr ds : [ebx+0xC0]
        test ebx, ebx
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        je public_51aba4
        lea ecx, ds:[ebx-8]
        jmp public_51aba6
        public_51aba4 : nop
        xor ecx, ecx
        public_51aba6 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0x54]
        fstp dword ptr ss : [esp+0x18]
        rep movsd
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x80], eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x7C], edx
        rep movsd
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x74
        ret 0xC
        public_51ac12 : nop
        mov al, 1
        pop ebx
        add esp, 0x74
        ret 0xC
        UNREACHABLE_TRAP(0x51a7d0)
    }
}

#undef public_51a840
#undef public_51a842
#undef public_51a8a5
#undef public_51a8d1
#undef public_51a943
#undef public_51a947
#undef public_51a969
#undef public_51a9a6
#undef public_51a9d3
#undef public_51a9d5
#undef public_51a9f8
#undef public_51a9fa
#undef public_51aa2e
#undef public_51aa47
#undef public_51aa7b
#undef public_51aaa5
#undef public_51aaf0
#undef public_51ab66
#undef public_51aba4
#undef public_51aba6
#undef public_51ac12
