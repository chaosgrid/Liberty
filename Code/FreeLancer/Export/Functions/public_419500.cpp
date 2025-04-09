#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419460);
CLANG_FORWARD_PROC_SYMBOL(public_4194e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_419538 _public_419538
#define public_419554 _public_419554
#define public_41955a _public_41955a
#define public_419594 _public_419594
#define public_4195ad _public_4195ad
#define public_4195ba _public_4195ba
#define public_4195d0 _public_4195d0
#define public_4195de _public_4195de
#define public_4195e3 _public_4195e3
#define public_4195fb _public_4195fb
#define public_4195fd _public_4195fd
#define public_419606 _public_419606
#define public_419629 _public_419629
#define public_41962b _public_41962b
#define public_419644 _public_419644
#define public_41964e _public_41964e

PROC_DECLARE(0x419500, internal_419500, public_419500);
extern "C" NAKED register_t __cdecl internal_419500()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        mov edi, ecx
        je public_4195ad
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        cmp byte ptr ds : [esi], bl
        je public_41955a
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jnp public_419538
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        public_419538 : nop
        fld dword ptr ds : [esi+8]
        fsub qword ptr ds : [public_5c75f8]
        fld dword ptr ss : [esp+0x20]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_419554
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        public_419554 : nop
        fstp dword ptr ss : [esp+0x20]
        jmp public_419594
        public_41955a : nop
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+4]
        fdiv dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        call dword ptr ds : [public_5c71c4]
        fsubr qword ptr ss : [esp+0x18]
        add esp, 8
        fabs 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        public_419594 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        call public_4194e0
        fld dword ptr ds : [edi+0x28]
        fsub dword ptr ds : [edi+0x24]
        fmulp 
        fadd dword ptr ds : [edi+0x24]
        jmp public_4195ba
        public_4195ad : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea ecx, ds:[edi+0x20]
        call public_419460
        public_4195ba : nop
        mov ecx, dword ptr ds : [edi+0x18]
        mov edi, dword ptr ds : [edi+0x1C]
        fcom dword ptr ds : [edi]
        xor esi, esi
        dec ecx
        fnstsw ax
        test ah, 0x41
        jp public_4195d0
        xor ecx, ecx
        jmp public_419606
        public_4195d0 : nop
        fcom dword ptr ds : [edi+ecx*8]
        fnstsw ax
        test ah, 1
        jne public_4195de
        mov esi, ecx
        jmp public_419606
        public_4195de : nop
        cmp ecx, 1
        jle public_419606
        public_4195e3 : nop
        lea eax, ds:[ecx+esi]
        cdq 
        sub eax, edx
        mov edx, eax
        sar edx, 1
        fcom dword ptr ds : [edi+edx*8]
        fnstsw ax
        test ah, 5
        jp public_4195fb
        mov ecx, edx
        jmp public_4195fd
        public_4195fb : nop
        mov esi, edx
        public_4195fd : nop
        mov edx, ecx
        sub edx, esi
        cmp edx, 1
        jg public_4195e3
        public_419606 : nop
        cmp byte ptr ds : [public_61065c], bl
        lea edx, ds:[edi+esi*8]
        lea ecx, ds:[edi+ecx*8]
        jne public_41962b
        fld st(0)
        fsub dword ptr ds : [edx]
        fld dword ptr ds : [ecx]
        fsub st, st(2)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_419629
        mov ecx, edx
        jmp public_41962b
        public_419629 : nop
        mov edx, ecx
        public_41962b : nop
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [edx]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_419644
        fxch 
        fsub dword ptr ds : [edx]
        fdivrp 
        jmp public_41964e
        public_419644 : nop
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_41964e : nop
        mov edi, dword ptr ds : [ecx+4]
        fld dword ptr ds : [public_5c75dc]
        mov esi, dword ptr ds : [edx+4]
        fsub st, st(1)
        mov eax, edi
        shr eax, 0x10
        and eax, 0xFF
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        mov ecx, esi
        shr ecx, 0x10
        and ecx, 0xFF
        fmul st, st(1)
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        fmul st, st(3)
        faddp 
        call public_5b7ec0
        mov edx, edi
        mov ebp, eax
        shr edx, 0x18
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        mov eax, esi
        shr eax, 0x18
        mov dword ptr ss : [esp+0x10], eax
        fmul st, st(1)
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        and ebp, 0xFF
        fmul st, st(3)
        faddp 
        call public_5b7ec0
        mov ecx, edi
        shr ecx, 8
        and ecx, 0xFF
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        mov edx, esi
        shr edx, 8
        and edx, 0xFF
        fmul st, st(1)
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        shl eax, 8
        or ebp, eax
        shl ebp, 8
        fmul st, st(3)
        faddp 
        call public_5b7ec0
        and edi, 0xFF
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        and esi, 0xFF
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], ebx
        fmul st, st(1)
        and eax, 0xFF
        fild qword ptr ss : [esp+0x10]
        or ebp, eax
        shl ebp, 8
        fmul st, st(3)
        faddp 
        call public_5b7ec0
        fstp st(0)
        pop edi
        fstp st(0)
        and eax, 0xFF
        pop esi
        or eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x419500)
    }
}

#undef public_419538
#undef public_419554
#undef public_41955a
#undef public_419594
#undef public_4195ad
#undef public_4195ba
#undef public_4195d0
#undef public_4195de
#undef public_4195e3
#undef public_4195fb
#undef public_4195fd
#undef public_419606
#undef public_419629
#undef public_41962b
#undef public_419644
#undef public_41964e
