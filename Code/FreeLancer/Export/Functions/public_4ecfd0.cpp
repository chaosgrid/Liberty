#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4ecfd0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4ecff9 _public_4ecff9
#define public_4ed06f _public_4ed06f
#define public_4ed082 _public_4ed082
#define public_4ed084 _public_4ed084
#define public_4ed09f _public_4ed09f
#define public_4ed0b4 _public_4ed0b4
#define public_4ed0b6 _public_4ed0b6
#define public_4ed0c2 _public_4ed0c2
#define public_4ed131 _public_4ed131
#define public_4ed150 _public_4ed150
#define public_4ed152 _public_4ed152
#define public_4ed15e _public_4ed15e

PROC_DECLARE(0x4ecfd0, internal_4ecfd0, public_4ecfd0);
extern "C" NAKED register_t __cdecl internal_4ecfd0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        call public_40f130
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x40]
        mov esi, eax
        mov eax, dword ptr ds : [public_674b6c]
        test eax, eax
        jne public_4ecff9
        call public_5b73e0
        mov dword ptr ds : [public_674b6c], eax
        public_4ecff9 : nop
        mov ebp, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        fchs 
        push edi
        fstp dword ptr ss : [esp+0x44]
        xor bl, bl
        call dword ptr ds : [eax+0x20]
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jp public_4ed0c2
        mov esi, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [edi]
        push ebp
        push esi
        push edi
        call dword ptr ds : [ecx+0x44]
        test al, al
        je public_4ed0c2
        fld dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_610850]
        mov eax, dword ptr ds : [public_610854]
        fcomp dword ptr ds : [public_5c7474]
        dec edx
        dec eax
        mov dword ptr ss : [esp+0x28], eax
        fnstsw ax
        xor cl, cl
        mov dword ptr ss : [esp+0x24], edx
        test ah, 5
        jp public_4ed06f
        mov dword ptr ds : [esi], 0
        mov cl, 1
        jmp public_4ed084
        public_4ed06f : nop
        fild dword ptr ss : [esp+0x24]
        fcom dword ptr ds : [esi]
        fnstsw ax
        test ah, 5
        jp public_4ed082
        fstp dword ptr ds : [esi]
        mov cl, 1
        jmp public_4ed084
        public_4ed082 : nop
        fstp st(0)
        public_4ed084 : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4ed09f
        mov dword ptr ds : [esi+4], 0
        mov cl, 1
        jmp public_4ed0b6
        public_4ed09f : nop
        fild dword ptr ss : [esp+0x28]
        fcom dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_4ed0b4
        fstp dword ptr ds : [esi+4]
        mov cl, 1
        jmp public_4ed0b6
        public_4ed0b4 : nop
        fstp st(0)
        public_4ed0b6 : nop
        test cl, cl
        sete bl
        mov dword ptr ds : [esi+8], 0
        public_4ed0c2 : nop
        call public_54baf0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        test bl, bl
        fsub dword ptr ss : [ebp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [ebp+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [ebp+8]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        fld st(0)
        fstp dword ptr ds : [eax]
        je public_4ed150
        fdiv dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_5d49b0]
        fld dword ptr ds : [public_5d95a8]
        fld st(1)
        fcomp dword ptr ds : [public_5ca230]
        fnstsw ax
        test ah, 5
        jp public_4ed131
        fstp st(0)
        fld qword ptr ds : [public_5c9ce8]
        fmul st, st(1)
        fadd qword ptr ds : [public_5d95a0]
        public_4ed131 : nop
        fdivrp 
        mov ecx, dword ptr ss : [esp+0x4C]
        fld st(0)
        fstp dword ptr ds : [ecx]
        fcom dword ptr ds : [public_5d8ee8]
        fnstsw ax
        test ah, 5
        jp public_4ed15e
        mov edx, dword ptr ds : [public_5d8ee8]
        mov dword ptr ds : [ecx], edx
        public_4ed150 : nop
        fstp st(0)
        public_4ed152 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x2C
        ret 0x14
        public_4ed15e : nop
        fcomp dword ptr ds : [public_5d8eec]
        fnstsw ax
        test ah, 0x41
        jne public_4ed152
        mov eax, dword ptr ds : [public_5d8eec]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x2C
        ret 0x14
        UNREACHABLE_TRAP(0x4ecfd0)
    }
}

#undef public_4ecff9
#undef public_4ed06f
#undef public_4ed082
#undef public_4ed084
#undef public_4ed09f
#undef public_4ed0b4
#undef public_4ed0b6
#undef public_4ed0c2
#undef public_4ed131
#undef public_4ed150
#undef public_4ed152
#undef public_4ed15e
