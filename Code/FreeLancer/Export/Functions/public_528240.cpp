#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4291c0);
CLANG_FORWARD_PROC_SYMBOL(public_528240);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_5282ed _public_5282ed
#define public_528320 _public_528320
#define public_52832f _public_52832f
#define public_528331 _public_528331
#define public_52833d _public_52833d
#define public_52833f _public_52833f
#define public_528359 _public_528359
#define public_52835b _public_52835b
#define public_528380 _public_528380
#define public_528382 _public_528382
#define public_52838e _public_52838e
#define public_528390 _public_528390
#define public_5283aa _public_5283aa
#define public_5283ac _public_5283ac
#define public_5283c4 _public_5283c4
#define public_5283d9 _public_5283d9
#define public_5283fc _public_5283fc
#define public_528418 _public_528418
#define public_52841a _public_52841a
#define public_528426 _public_528426
#define public_528428 _public_528428
#define public_528445 _public_528445
#define public_528447 _public_528447
#define public_52845d _public_52845d
#define public_528499 _public_528499
#define public_5284c3 _public_5284c3
#define public_5284dc _public_5284dc
#define public_528538 _public_528538
#define public_52853a _public_52853a
#define public_528551 _public_528551
#define public_528558 _public_528558

PROC_DECLARE(0x528240, internal_528240, public_528240);
extern "C" NAKED register_t __cdecl internal_528240()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        test al, al
        je public_528558
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [ecx+0x54]
        test al, al
        jne public_5284dc
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_5283d9
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+7]
        mov byte ptr ss : [esp+7], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x134]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+8]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 0x41
        jne public_5283c4
        mov al, byte ptr ss : [esp+7]
        test al, al
        jne public_5283c4
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_5282ed
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        public_5282ed : nop
        fld dword ptr ss : [esp+8]
        push 0x2D
        fdiv dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp+0xC]
        call public_5792b0
        add esp, 4
        cmp eax, 2
        jne public_528320
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_528320
        mov dword ptr ss : [esp+8], 0x3F800000
        public_528320 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_52832f
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx+4]
        jmp public_528331
        public_52832f : nop
        xor edx, edx
        public_528331 : nop
        test eax, eax
        je public_52833d
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        jmp public_52833f
        public_52833d : nop
        xor ecx, ecx
        public_52833f : nop
        mov edx, dword ptr ds : [edx+0x68]
        sub edx, dword ptr ds : [ecx+0x64]
        test eax, eax
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0xC]
        je public_528359
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_52835b
        public_528359 : nop
        xor eax, eax
        public_52835b : nop
        fmul dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x38]
        fiadd dword ptr ds : [eax+0x64]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x98]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_528380
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx+4]
        jmp public_528382
        public_528380 : nop
        xor edx, edx
        public_528382 : nop
        test eax, eax
        je public_52838e
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        jmp public_528390
        public_52838e : nop
        xor ecx, ecx
        public_528390 : nop
        mov edx, dword ptr ds : [edx+0x70]
        sub edx, dword ptr ds : [ecx+0x6C]
        test eax, eax
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0xC]
        je public_5283aa
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_5283ac
        public_5283aa : nop
        xor eax, eax
        public_5283ac : nop
        fmul dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x38]
        fiadd dword ptr ds : [eax+0x6C]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x80]
        jmp public_5283d9
        public_5283c4 : nop
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_5283d9
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_5283d9 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_528558
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_5283fc
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        public_5283fc : nop
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_52845d
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_528418
        mov edx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [edx+4]
        jmp public_52841a
        public_528418 : nop
        xor edx, edx
        public_52841a : nop
        test eax, eax
        je public_528426
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        jmp public_528428
        public_528426 : nop
        xor ecx, ecx
        public_528428 : nop
        mov edx, dword ptr ds : [edx+0x80]
        sub edx, dword ptr ds : [ecx+0x7C]
        test eax, eax
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0xC]
        je public_528445
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_528447
        public_528445 : nop
        xor eax, eax
        public_528447 : nop
        fmul dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0x40]
        fiadd dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x98]
        public_52845d : nop
        mov eax, dword ptr ds : [public_5c6848]
        fld dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_528499
        mov ecx, dword ptr ds : [public_5c6844]
        fmul dword ptr ds : [ecx]
        fadd dword ptr ds : [esi+0x2C]
        fst dword ptr ds : [esi+0x2C]
        fld dword ptr ds : [public_5c7474]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_5284c3
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        jmp public_5284c3
        public_528499 : nop
        mov edx, dword ptr ds : [public_5c6840]
        fmul dword ptr ds : [edx]
        fadd dword ptr ds : [esi+0x2C]
        fst dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [public_5c683c]
        fld dword ptr ds : [eax]
        fchs 
        fst dword ptr ss : [esp+0x24]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_5284c3
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        public_5284c3 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        fstp dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x80]
        pop esi
        add esp, 0x18
        ret 8
        public_5284dc : nop
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        je public_528551
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_528551
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], 0
        fadd dword ptr ds : [esi+0x28]
        fst dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [public_5c6838]
        fld st(0)
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_528538
        fsub dword ptr ds : [ecx]
        mov edx, dword ptr ds : [public_5c6834]
        mov eax, dword ptr ds : [public_5c6830]
        fmul dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax]
        fchs 
        fcom dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_528538
        fstp dword ptr ss : [esp+0x24]
        jmp public_52853a
        public_528538 : nop
        fstp st(0)
        public_52853a : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x80]
        pop esi
        add esp, 0x18
        ret 8
        public_528551 : nop
        mov dword ptr ds : [esi+0x28], 0
        public_528558 : nop
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x528240)
    }
}

#undef public_5282ed
#undef public_528320
#undef public_52832f
#undef public_528331
#undef public_52833d
#undef public_52833f
#undef public_528359
#undef public_52835b
#undef public_528380
#undef public_528382
#undef public_52838e
#undef public_528390
#undef public_5283aa
#undef public_5283ac
#undef public_5283c4
#undef public_5283d9
#undef public_5283fc
#undef public_528418
#undef public_52841a
#undef public_528426
#undef public_528428
#undef public_528445
#undef public_528447
#undef public_52845d
#undef public_528499
#undef public_5284c3
#undef public_5284dc
#undef public_528538
#undef public_52853a
#undef public_528551
#undef public_528558
