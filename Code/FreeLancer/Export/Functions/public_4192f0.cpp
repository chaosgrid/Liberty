#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419460);
CLANG_FORWARD_PROC_SYMBOL(public_4194e0);

#define public_419325 _public_419325
#define public_419341 _public_419341
#define public_419347 _public_419347
#define public_419381 _public_419381
#define public_41939a _public_41939a
#define public_4193a7 _public_4193a7
#define public_4193bd _public_4193bd
#define public_4193cb _public_4193cb
#define public_4193d0 _public_4193d0
#define public_4193e8 _public_4193e8
#define public_4193ea _public_4193ea
#define public_4193f3 _public_4193f3
#define public_419419 _public_419419
#define public_41941b _public_41941b
#define public_419436 _public_419436
#define public_419440 _public_419440

PROC_DECLARE(0x4192f0, internal_4192f0, public_4192f0);
extern "C" NAKED register_t __cdecl internal_4192f0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        push edi
        mov edi, ecx
        je public_41939a
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        cmp byte ptr ds : [esi], 0
        je public_419347
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_419325
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x18]
        public_419325 : nop
        fld dword ptr ds : [esi+8]
        fsub qword ptr ds : [public_5c75f8]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_419341
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        public_419341 : nop
        fstp dword ptr ss : [esp+0x18]
        jmp public_419381
        public_419347 : nop
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+4]
        fdiv dword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        call dword ptr ds : [public_5c71c4]
        fsubr qword ptr ss : [esp+0x10]
        add esp, 8
        fabs 
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        public_419381 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, esi
        call public_4194e0
        fld dword ptr ds : [edi+0x28]
        fsub dword ptr ds : [edi+0x24]
        fmulp 
        fadd dword ptr ds : [edi+0x24]
        jmp public_4193a7
        public_41939a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ds:[edi+0x20]
        call public_419460
        public_4193a7 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        mov edi, dword ptr ds : [edi+0x1C]
        fcom dword ptr ds : [edi]
        xor esi, esi
        dec ecx
        fnstsw ax
        test ah, 0x41
        jp public_4193bd
        xor ecx, ecx
        jmp public_4193f3
        public_4193bd : nop
        fcom dword ptr ds : [edi+ecx*8]
        fnstsw ax
        test ah, 1
        jne public_4193cb
        mov esi, ecx
        jmp public_4193f3
        public_4193cb : nop
        cmp ecx, 1
        jle public_4193f3
        public_4193d0 : nop
        lea eax, ds:[ecx+esi]
        cdq 
        sub eax, edx
        mov edx, eax
        sar edx, 1
        fcom dword ptr ds : [edi+edx*8]
        fnstsw ax
        test ah, 5
        jp public_4193e8
        mov ecx, edx
        jmp public_4193ea
        public_4193e8 : nop
        mov esi, edx
        public_4193ea : nop
        mov edx, ecx
        sub edx, esi
        cmp edx, 1
        jg public_4193d0
        public_4193f3 : nop
        mov al, byte ptr ds : [public_61065c]
        test al, al
        lea edx, ds:[edi+esi*8]
        lea ecx, ds:[edi+ecx*8]
        pop edi
        pop esi
        jne public_41941b
        fld st(0)
        fsub dword ptr ds : [edx]
        fld dword ptr ds : [ecx]
        fsub st, st(2)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_419419
        mov ecx, edx
        jmp public_41941b
        public_419419 : nop
        mov edx, ecx
        public_41941b : nop
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [edx]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_419436
        fld dword ptr ds : [ecx]
        fsubrp st(2), st
        fxch 
        fdivrp 
        jmp public_419440
        public_419436 : nop
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_419440 : nop
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(1)
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+4]
        fmul st, st(2)
        faddp 
        fstp st(1)
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4192f0)
    }
}

#undef public_419325
#undef public_419341
#undef public_419347
#undef public_419381
#undef public_41939a
#undef public_4193a7
#undef public_4193bd
#undef public_4193cb
#undef public_4193d0
#undef public_4193e8
#undef public_4193ea
#undef public_4193f3
#undef public_419419
#undef public_41941b
#undef public_419436
#undef public_419440
