#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a140);
CLANG_FORWARD_PROC_SYMBOL(public_41a390);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_41a195 _public_41a195
#define public_41a1d7 _public_41a1d7
#define public_41a1de _public_41a1de
#define public_41a207 _public_41a207
#define public_41a385 _public_41a385

PROC_DECLARE(0x41a140, internal_41a140, public_41a140);
extern "C" NAKED register_t __cdecl internal_41a140()
{
    __asm
    {
        mov al, byte ptr ds : [public_6166b4]
        sub esp, 0x24
        xor cl, cl
        test al, al
        je public_41a1de
        fld dword ptr ds : [public_6166b0]
        mov cl, 1
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test ah, 5
        jp public_41a195
        fld dword ptr ds : [public_610690]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [public_6166b0]
        fst dword ptr ds : [public_6166b0]
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test cl, ah
        jne public_41a1de
        mov eax, dword ptr ds : [public_6166ac]
        mov dword ptr ds : [public_6166b0], eax
        jmp public_41a1d7
        public_41a195 : nop
        fld dword ptr ds : [public_6166b0]
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test ah, 0x41
        jne public_41a1d7
        fld dword ptr ds : [public_610690]
        fmul dword ptr ss : [esp+0x2C]
        fsubr dword ptr ds : [public_6166b0]
        fst dword ptr ds : [public_6166b0]
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test ah, 0x41
        jp public_41a1de
        mov edx, dword ptr ds : [public_6166ac]
        mov dword ptr ds : [public_6166b0], edx
        public_41a1d7 : nop
        mov byte ptr ds : [public_6166b4], 0
        public_41a1de : nop
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        test esi, esi
        push edi
        je public_41a385
        cmp dword ptr ds : [public_6166b8], esi
        setne al
        test cl, cl
        mov dword ptr ds : [public_6166b8], esi
        jne public_41a207
        test al, al
        je public_41a385
        public_41a207 : nop
        fild dword ptr ds : [public_610850]
        push ebx
        fild dword ptr ds : [public_610854]
        push ebp
        sub esp, 8
        fld st(1)
        fdiv st, st(1)
        fld dword ptr ds : [public_5c9020]
        fsub st, st(1)
        fmul dword ptr ds : [public_6166b0]
        fadd st, st(1)
        fdivp st(3), st
        fxch st(2)
        fsubr st, st(1)
        fmul qword ptr ds : [public_5c75e8]
        fstp st(2)
        fstp st(0)
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        mov ecx, dword ptr ds : [public_610850]
        lea edx, ds:[eax+eax]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x24], ecx
        sub eax, edx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_5c6070]
        mov edi, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi]
        add esp, 0x10
        push esi
        mov dword ptr ss : [esp+0x34], eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ds:[esi+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+8]
        sub ecx, edx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x3C], ecx
        fild dword ptr ss : [esp+0x3C]
        sub edx, eax
        mov dword ptr ss : [esp+0x3C], edx
        fmul dword ptr ds : [public_5c75e0]
        fst dword ptr ds : [esi+0x30]
        fild dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_5c75e0]
        fst dword ptr ds : [esi+0x34]
        fxch 
        fdiv dword ptr ds : [esi+0x24]
        fstp dword ptr ds : [esi+0x38]
        fdiv dword ptr ds : [esi+0x28]
        fchs 
        fstp dword ptr ds : [esi+0x3C]
        fadd st(0), st
        lea ecx, ds:[esi+0x40]
        fmul dword ptr ds : [public_5c901c]
        fptan 
        fstp st(0)
        fst dword ptr ds : [esi+0x24]
        fld st(0)
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ecx], 0x3F800000
        mov dword ptr ds : [ecx+4], 0
        fstp dword ptr ds : [ecx+8]
        call public_41a390
        fld dword ptr ds : [esi+0x30]
        lea ecx, ds:[esi+0x4C]
        fdiv dword ptr ds : [esi+0x24]
        fstp dword ptr ds : [esi+0x38]
        fild dword ptr ss : [esp+0x38]
        fidiv dword ptr ss : [esp+0x10]
        fst dword ptr ds : [esi+0x2C]
        fdivr dword ptr ds : [esi+0x24]
        fst dword ptr ds : [esi+0x28]
        fld st(0)
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x18]
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0x3F800000
        fstp dword ptr ds : [ecx+8]
        call public_41a390
        fld dword ptr ds : [esi+0x34]
        pop ebp
        fdiv dword ptr ds : [esi+0x28]
        pop ebx
        fchs 
        fstp dword ptr ds : [esi+0x3C]
        public_41a385 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x41a140)
    }
}

#undef public_41a195
#undef public_41a1d7
#undef public_41a1de
#undef public_41a207
#undef public_41a385
