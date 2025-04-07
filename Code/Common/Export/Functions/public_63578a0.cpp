#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_6355020);
CLANG_FORWARD_PROC_SYMBOL(public_6356f30);
CLANG_FORWARD_PROC_SYMBOL(public_6356fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6357340);
CLANG_FORWARD_PROC_SYMBOL(public_6357400);
CLANG_FORWARD_PROC_SYMBOL(public_63578a0);
CLANG_FORWARD_PROC_SYMBOL(public_6358070);
CLANG_FORWARD_PROC_SYMBOL(public_6358350);
CLANG_FORWARD_PROC_SYMBOL(public_6358630);

#define public_6357ac6 _public_6357ac6
#define public_6357b3a _public_6357b3a
#define public_6357b9f _public_6357b9f
#define public_6357c53 _public_6357c53
#define public_6357c5d _public_6357c5d
#define public_6357c70 _public_6357c70
#define public_6357c7f _public_6357c7f
#define public_6357cb2 _public_6357cb2
#define public_6357cc3 _public_6357cc3
#define public_6357cc5 _public_6357cc5
#define public_6357cdd _public_6357cdd
#define public_6357cf1 _public_6357cf1
#define public_6357cf3 _public_6357cf3
#define public_6357d0b _public_6357d0b
#define public_6357d1f _public_6357d1f
#define public_6357d34 _public_6357d34
#define public_6357d7f _public_6357d7f
#define public_6357d81 _public_6357d81
#define public_6357dbc _public_6357dbc
#define public_6357de4 _public_6357de4
#define public_6357df5 _public_6357df5
#define public_6357df7 _public_6357df7
#define public_6357e0f _public_6357e0f
#define public_6357e23 _public_6357e23
#define public_6357e25 _public_6357e25
#define public_6357e3d _public_6357e3d
#define public_6357e51 _public_6357e51
#define public_6357e66 _public_6357e66
#define public_6357eb1 _public_6357eb1
#define public_6357eb3 _public_6357eb3
#define public_6357eea _public_6357eea
#define public_6358057 _public_6358057

PROC_DECLARE(0x63578a0, internal_63578a0, public_63578a0);
extern "C" NAKED register_t __cdecl internal_63578a0()
{
    __asm
    {
        sub esp, 0x1C
        fild dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        fst dword ptr ss : [esp+8]
        push esi
        fmul dword ptr ds : [public_63a5460]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        push edi
        fadd dword ptr ds : [public_63a53d0]
        lea edi, ds:[esi+0x24]
        lea ebx, ds:[esi+0x34]
        fdivr dword ptr ds : [public_63a53d0]
        fld dword ptr ds : [public_63a53d0]
        fsub dword ptr ds : [esi+0xFC]
        fmulp 
        fsubr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_658ab38]
        mov dword ptr ds : [esi+0xC], eax
        fadd dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_63a5668]
        fstp dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+0xF0]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [esi+0xEC]
        mov eax, dword ptr ds : [eax+0xC]
        inc dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [esi+0xEC]
        mov edx, dword ptr ds : [esi+0xF0]
        lea ecx, ds:[eax+0xF4]
        mov dword ptr ds : [esi+0x1C], ecx
        add edx, 0xF4
        mov dword ptr ds : [esi+0x20], edx
        fld dword ptr ds : [eax+0x98]
        fadd dword ptr ds : [eax+0x78]
        fld dword ptr ds : [eax+0x9C]
        fadd dword ptr ds : [eax+0x7C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax+0x74]
        fadd dword ptr ds : [eax+0x94]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi+8], eax
        fstp dword ptr ds : [edi]
        fstp dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+0xEC]
        fld dword ptr ds : [eax+0xA8]
        fadd dword ptr ds : [eax+0x88]
        fld dword ptr ds : [eax+0xAC]
        fadd dword ptr ds : [eax+0x8C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax+0xA4]
        mov ecx, dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [eax+0x84]
        mov dword ptr ds : [esi+0x4C], ecx
        fstp dword ptr ds : [esi+0x44]
        fstp dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [esi+0xF0]
        fld dword ptr ds : [eax+0x98]
        fadd dword ptr ds : [eax+0x78]
        fld dword ptr ds : [eax+0x9C]
        fadd dword ptr ds : [eax+0x7C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax+0x94]
        mov edx, dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [eax+0x74]
        mov dword ptr ds : [ebx+8], edx
        fstp dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi+0xF0]
        fld dword ptr ds : [eax+0xA8]
        xor ebp, ebp
        fadd dword ptr ds : [eax+0x88]
        mov ecx, esi
        fld dword ptr ds : [eax+0xAC]
        fadd dword ptr ds : [eax+0x8C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax+0xA4]
        fadd dword ptr ds : [eax+0x84]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+0x5C], eax
        fstp dword ptr ds : [esi+0x54]
        fstp dword ptr ds : [esi+0x58]
        mov dword ptr ds : [esi+0x18], ebp
        call public_6356f30
        fld dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [esi+0xA4]
        mov eax, dword ptr ds : [esi+0x10C]
        fstp dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edx, ecx
        fstp dword ptr ds : [eax+4]
        mov ecx, esi
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ss : [esp+0x3C], ebp
        call public_6358630
        fmul dword ptr ds : [public_63a5464]
        mov ecx, dword ptr ds : [esi+0x108]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [esi+0xA8]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [esi+0xA4]
        faddp 
        fcomp dword ptr ds : [public_63a5664]
        fnstsw ax
        test ah, 0x41
        jne public_6357ac6
        fld dword ptr ds : [ecx+4]
        push 1
        fchs 
        fld dword ptr ds : [ecx+8]
        fchs 
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x40]
        fchs 
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        call public_6357400
        cmp dword ptr ss : [esp+0x38], 0xA
        jle public_6357c7f
        mov dword ptr ds : [esi+0xC], ebp
        jmp public_6357c7f
        public_6357ac6 : nop
        mov ecx, esi
        call public_6356fb0
        mov dword ptr ds : [esi+0xC4], ebp
        mov dword ptr ds : [esi+0xC8], ebp
        mov dword ptr ds : [esi+0xCC], ebp
        fld dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [esi+0x108]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [esi+0xA4]
        fmul dword ptr ds : [eax]
        faddp 
        fchs 
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x14]
        fsqrt 
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x10]
        fsqrt 
        fxch 
        fxch 
        fmul dword ptr ds : [public_63a5404]
        faddp 
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6357b9f
        public_6357b3a : nop
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, 0x64
        jge public_6357b9f
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        inc ecx
        mov dword ptr ss : [esp+0x3C], ecx
        push edx
        mov ecx, esi
        call public_6358350
        mov ecx, esi
        call public_6356f30
        fld dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [esi+0x108]
        fmul dword ptr ds : [eax+8]
        mov ecx, esi
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [esi+0xA4]
        fmul dword ptr ds : [eax]
        faddp 
        fchs 
        fstp dword ptr ss : [esp+0x38]
        call public_6356fb0
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_6357b3a
        public_6357b9f : nop
        mov eax, dword ptr ds : [esi+0x108]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x34]
        fst dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ds : [esi+0xBC], eax
        fstp dword ptr ds : [esi+0xB4]
        fstp dword ptr ds : [esi+0xB8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6357c70
        cmp dword ptr ss : [esp+0x3C], 0x64
        je public_6357c70
        push 0x3F800000
        mov ecx, esi
        call public_6358350
        mov ecx, esi
        call public_6356f30
        fld dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [esi+0x108]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+0xA8]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [esi+0xA4]
        faddp 
        fadd dword ptr ss : [esp+0x38]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [public_63a547c]
        fnstsw ax
        test ah, 0x41
        jne public_6357c53
        fld dword ptr ss : [esp+0x34]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        jmp public_6357c5d
        public_6357c53 : nop
        fstp st(0)
        mov dword ptr ss : [esp+0x38], 0
        public_6357c5d : nop
        mov ecx, esi
        call public_6357340
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, esi
        call public_6358350
        public_6357c70 : nop
        push ebp
        lea eax, ds:[esi+0xB4]
        push eax
        mov ecx, esi
        call public_6357400
        public_6357c7f : nop
        mov edx, dword ptr ds : [esi+0xEC]
        mov ecx, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [ecx+0x24]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [edx+0x4C]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x34], edx
        je public_6357d1f
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [eax]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ds : [edx+0x4C]
        jne public_6357cb2
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        jmp public_6357cc5
        public_6357cb2 : nop
        fld dword ptr ds : [eax]
        fchs 
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jne public_6357cc3
        fstp dword ptr ds : [edi]
        jmp public_6357cc5
        public_6357cc3 : nop
        fstp st(0)
        public_6357cc5 : nop
        mov ecx, dword ptr ds : [edx+0x4C]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x41
        jne public_6357cdd
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], eax
        jmp public_6357cf3
        public_6357cdd : nop
        fld dword ptr ds : [ecx+4]
        fchs 
        fcom dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x41
        jne public_6357cf1
        fstp dword ptr ds : [edi+4]
        jmp public_6357cf3
        public_6357cf1 : nop
        fstp st(0)
        public_6357cf3 : nop
        mov edx, dword ptr ds : [edx+0x4C]
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 0x41
        jne public_6357d0b
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ecx
        jmp public_6357d81
        public_6357d0b : nop
        fld dword ptr ds : [edx+8]
        fchs 
        fcom dword ptr ds : [edi+8]
        fnstsw ax
        test ah, 0x41
        jne public_6357d7f
        fstp dword ptr ds : [edi+8]
        jmp public_6357d81
        public_6357d1f : nop
        cmp dword ptr ds : [edx+0x10], ebp
        je public_6357d34
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6357d81
        public_6357d34 : nop
        fld dword ptr ds : [ecx+0xB0]
        mov eax, dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [eax+0x10]
        fld dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        fld st(2)
        fmul st, st(3)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(4)
        fmul st, st(5)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        je public_6357d81
        mov ecx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        call dword ptr ds : [eax+4]
        jmp public_6357d81
        public_6357d7f : nop
        fstp st(0)
        public_6357d81 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x3C], ecx
        lea edi, ds:[esi+0x44]
        mov ecx, edi
        call public_62c4780
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6357dbc
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        call dword ptr ds : [edx]
        public_6357dbc : nop
        mov edi, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [edi+0x4C]
        cmp edx, ebp
        je public_6357e51
        fld dword ptr ds : [ebx]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_6357de4
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ebx], eax
        jmp public_6357df7
        public_6357de4 : nop
        fld dword ptr ds : [edx]
        fchs 
        fcom dword ptr ds : [ebx]
        fnstsw ax
        test ah, 0x41
        jne public_6357df5
        fstp dword ptr ds : [ebx]
        jmp public_6357df7
        public_6357df5 : nop
        fstp st(0)
        public_6357df7 : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x41
        jne public_6357e0f
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ebx+4], ecx
        jmp public_6357e25
        public_6357e0f : nop
        fld dword ptr ds : [ecx+4]
        fchs 
        fcom dword ptr ds : [ebx+4]
        fnstsw ax
        test ah, 0x41
        jne public_6357e23
        fstp dword ptr ds : [ebx+4]
        jmp public_6357e25
        public_6357e23 : nop
        fstp st(0)
        public_6357e25 : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        fld dword ptr ds : [ebx+8]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x41
        jne public_6357e3d
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ebx+8], edx
        jmp public_6357eb3
        public_6357e3d : nop
        fld dword ptr ds : [ecx+8]
        fchs 
        fcom dword ptr ds : [ebx+8]
        fnstsw ax
        test ah, 0x41
        jne public_6357eb1
        fstp dword ptr ds : [ebx+8]
        jmp public_6357eb3
        public_6357e51 : nop
        cmp dword ptr ds : [edi+0x10], ebp
        je public_6357e66
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6357eb3
        public_6357e66 : nop
        fld dword ptr ds : [ecx+0xB0]
        mov eax, dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [eax+0x10]
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
        fld st(2)
        fmul st, st(3)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(4)
        fmul st, st(5)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        je public_6357eb3
        mov ecx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        push eax
        call dword ptr ds : [edx+4]
        jmp public_6357eb3
        public_6357eb1 : nop
        fstp st(0)
        public_6357eb3 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx+8]
        lea ebx, ds:[esi+0x54]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x3C], edx
        call public_62c4780
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6357eea
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        push eax
        call dword ptr ds : [edx]
        public_6357eea : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, esi
        call public_6358070
        mov eax, dword ptr ds : [esi+0xEC]
        mov edx, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [edx+0x60]
        or ecx, dword ptr ds : [eax+0x60]
        test ch, 0xFF
        je public_6358057
        mov eax, dword ptr ds : [eax+0xC]
        inc dword ptr ds : [eax+0x64]
        mov edi, dword ptr ds : [esi+0xEC]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+0x60]
        shl edx, 0x1C
        sar edx, 0x1E
        shl edx, 8
        mov ecx, 0x100
        sub ecx, edx
        xor ecx, eax
        and ecx, 0xFF00
        xor ecx, eax
        mov dword ptr ds : [edi+0x60], ecx
        lea ebx, ds:[edi+0xA4]
        lea ecx, ds:[edi+0x84]
        push ebx
        push ecx
        call public_6355020
        fld dword ptr ds : [edi+0x98]
        fadd dword ptr ds : [edi+0x78]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi+0x9C]
        fadd dword ptr ds : [edi+0x7C]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi+0x74]
        mov edx, dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [edi+0x94]
        mov dword ptr ds : [edi+0x7C], edx
        fstp dword ptr ds : [edi+0x74]
        fstp dword ptr ds : [edi+0x78]
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [edi+0x94], ebp
        mov dword ptr ds : [edi+0x98], ebp
        mov dword ptr ds : [edi+0x9C], ebp
        mov dword ptr ds : [ecx], edi
        mov esi, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x60]
        shl edx, 0x1C
        sar edx, 0x1E
        shl edx, 8
        mov edi, 0x100
        sub edi, edx
        xor edi, eax
        and edi, 0xFF00
        xor edi, eax
        mov dword ptr ds : [esi+0x60], edi
        fld dword ptr ds : [esi+0xA8]
        fadd dword ptr ds : [esi+0x88]
        fld dword ptr ds : [esi+0xAC]
        fadd dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0xA4]
        mov eax, dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+0x84]
        mov dword ptr ds : [esi+0x8C], eax
        fstp dword ptr ds : [esi+0x84]
        fstp dword ptr ds : [esi+0x88]
        fld dword ptr ds : [esi+0x98]
        fadd dword ptr ds : [esi+0x78]
        fld dword ptr ds : [esi+0x9C]
        fadd dword ptr ds : [esi+0x7C]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x94]
        mov edx, dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+0x74]
        mov dword ptr ds : [esi+0x7C], edx
        fstp dword ptr ds : [esi+0x74]
        fstp dword ptr ds : [esi+0x78]
        mov dword ptr ds : [esi+0xA4], ebp
        mov dword ptr ds : [esi+0xA8], ebp
        mov dword ptr ds : [esi+0xAC], ebp
        mov dword ptr ds : [esi+0x94], ebp
        mov dword ptr ds : [esi+0x98], ebp
        mov dword ptr ds : [esi+0x9C], ebp
        mov dword ptr ds : [ecx+4], esi
        public_6358057 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x63578a0)
    }
}

#undef public_6357ac6
#undef public_6357b3a
#undef public_6357b9f
#undef public_6357c53
#undef public_6357c5d
#undef public_6357c70
#undef public_6357c7f
#undef public_6357cb2
#undef public_6357cc3
#undef public_6357cc5
#undef public_6357cdd
#undef public_6357cf1
#undef public_6357cf3
#undef public_6357d0b
#undef public_6357d1f
#undef public_6357d34
#undef public_6357d7f
#undef public_6357d81
#undef public_6357dbc
#undef public_6357de4
#undef public_6357df5
#undef public_6357df7
#undef public_6357e0f
#undef public_6357e23
#undef public_6357e25
#undef public_6357e3d
#undef public_6357e51
#undef public_6357e66
#undef public_6357eb1
#undef public_6357eb3
#undef public_6357eea
#undef public_6358057
