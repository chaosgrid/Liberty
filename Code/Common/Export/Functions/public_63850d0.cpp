#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6381f00);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);
CLANG_FORWARD_PROC_SYMBOL(public_6383af0);
CLANG_FORWARD_PROC_SYMBOL(public_6384060);
CLANG_FORWARD_PROC_SYMBOL(public_63840b0);
CLANG_FORWARD_PROC_SYMBOL(public_6384150);
CLANG_FORWARD_PROC_SYMBOL(public_63850d0);

#define public_6385107 _public_6385107
#define public_6385124 _public_6385124
#define public_6385140 _public_6385140
#define public_6385157 _public_6385157
#define public_6385174 _public_6385174
#define public_6385184 _public_6385184
#define public_638518d _public_638518d
#define public_6385192 _public_6385192
#define public_638519c _public_638519c
#define public_63851b2 _public_63851b2
#define public_63851d6 _public_63851d6
#define public_6385230 _public_6385230
#define public_638524a _public_638524a
#define public_6385275 _public_6385275
#define public_638527f _public_638527f
#define public_638528b _public_638528b
#define public_638529f _public_638529f
#define public_63852b4 _public_63852b4
#define public_63852c9 _public_63852c9
#define public_63852df _public_63852df
#define public_63852e8 _public_63852e8
#define public_6385325 _public_6385325
#define public_63853a3 _public_63853a3
#define public_63853d9 _public_63853d9
#define public_63853e6 _public_63853e6
#define public_63853fc _public_63853fc

PROC_DECLARE(0x63850d0, internal_63850d0, public_63850d0);
extern "C" NAKED register_t __cdecl internal_63850d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x2C
        mov eax, dword ptr ds : [public_658b808]
        push ebx
        push esi
        push edi
        push eax
        call public_6377e60
        mov esi, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_636ec10
        mov edi, dword ptr ss : [ebp+8]
        lea ecx, ds:[edi+1]
        add esp, 8
        cmp eax, ecx
        jne public_6385107
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6385140
        public_6385107 : nop
        push ecx
        jge public_6385124
/*FIXUP push offset public_63f7854 @0x638510a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7854
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x14
        jmp public_6385140
        public_6385124 : nop
        call public_636ec70
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0
        push 0
        push esi
        push edi
        mov dword ptr ss : [esp+0x28], eax
        call public_6383af0
        add esp, 0x18
        public_6385140 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [public_658b904]
        xor edx, edx
        test edi, edi
        mov dword ptr ss : [esp+0x18], ebx
        jle public_6385192
        public_6385157 : nop
        mov eax, dword ptr ds : [public_658b908]
        mov dword ptr ds : [eax+edx*4], esi
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_638518d
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        test eax, eax
        je public_638518d
        public_6385174 : nop
        cmp eax, ebx
        je public_6385184
        fld qword ptr ds : [eax+edx*8]
        add esi, 8
        fsub qword ptr ds : [ebx+edx*8]
        fstp qword ptr ds : [esi-8]
        public_6385184 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6385174
        public_638518d : nop
        inc edx
        cmp edx, edi
        jl public_6385157
        public_6385192 : nop
        xor ebx, ebx
        test edi, edi
        mov dword ptr ss : [esp+0x20], esi
        jle public_63851d6
        public_638519c : nop
        fld qword ptr ds : [public_63a58b0]
        mov ecx, dword ptr ds : [public_658b908]
        mov edx, dword ptr ss : [ebp+8]
        lea edi, ds:[ebx*8]
        public_63851b2 : nop
        mov eax, dword ptr ds : [ecx]
        fld qword ptr ds : [eax+edi]
        add eax, edi
        fld st(0)
        add ecx, 4
        dec edx
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        jne public_63851b2
        mov eax, dword ptr ss : [ebp+8]
        fstp qword ptr ds : [esi]
        add esi, 8
        inc ebx
        cmp ebx, eax
        jl public_638519c
        mov edi, eax
        public_63851d6 : nop
        mov edx, dword ptr ds : [public_658b908]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edi
        push edx
        call public_6381f00
        fstp qword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [public_658b6d4]
        mov edx, dword ptr ds : [public_658b6d0]
        lea eax, ss:[esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        push ecx
        push 0x3FE00000
        push 0
        call public_63829d0
        fstp qword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0x28
        test eax, eax
        je public_6385275
        test edi, edi
        lea eax, ds:[edi-1]
        je public_638524a
        mov ecx, 0xC02433B6
        public_6385230 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+eax*8], 0x45A1CAC1
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+eax*8+4], ecx
        mov edx, eax
        dec eax
        test edx, edx
        jne public_6385230
        public_638524a : nop
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_63853e6
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f7830 @0x6385262*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7830
        push ecx
        call public_6384150
        add esp, 0xC
        jmp public_63853e6
        public_6385275 : nop
        xor ebx, ebx
        test edi, edi
        jle public_6385325
        public_638527f : nop
        mov ecx, dword ptr ds : [public_658b904]
        mov edi, dword ptr ss : [esp+0x20]
        xor esi, esi
        public_638528b : nop
        cmp esi, ebx
        mov edx, dword ptr ds : [public_658b908]
        mov dword ptr ds : [edx+esi*4], ecx
        jne public_63852b4
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_63852e8
        public_638529f : nop
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        add ecx, 8
        add edi, 8
        dec eax
        jne public_638529f
        jmp public_63852e8
        public_63852b4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        je public_63852e8
        mov eax, dword ptr ds : [edx+4]
        add edx, 4
        add edx, 4
        test eax, eax
        je public_63852e8
        public_63852c9 : nop
        cmp eax, dword ptr ss : [esp+0x18]
        je public_63852df
        fld qword ptr ds : [eax+esi*8]
        mov eax, dword ptr ss : [esp+0x18]
        fsub qword ptr ds : [eax+esi*8]
        add ecx, 8
        fstp qword ptr ds : [ecx-8]
        public_63852df : nop
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        jne public_63852c9
        public_63852e8 : nop
        mov eax, dword ptr ss : [ebp+8]
        inc esi
        cmp esi, eax
        jl public_638528b
        mov edx, dword ptr ds : [public_658b908]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov esi, eax
        push esi
        push edx
        call public_6381f00
        fmul qword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        fadd qword ptr ds : [eax+ebx*8]
        add esp, 0xC
        inc ebx
        cmp ebx, esi
        fstp qword ptr ds : [ecx+ebx*8-8]
        jl public_638527f
        mov edi, esi
        public_6385325 : nop
        cmp dword ptr ds : [public_658b078], 3
        jl public_63853e6
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_63f7804 @0x6385346*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7804
        call public_6356960
        mov ecx, dword ptr ds : [public_658b7fc]
        push edi
        push 1
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_63f77fc @0x638535e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f77fc
        push ecx
        call public_63840b0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x28
        cmp eax, 5
        jl public_63853e6
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63f2424 @0x6385380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2424
        push eax
        call public_6384150
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        test edi, edi
        je public_63853d9
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test esi, esi
        je public_63853d9
        public_63853a3 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push esi
        call public_6384060
        fstp qword ptr ss : [esp+4]
        add esp, 4
        push esi
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f77ec @0x63853c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f77ec
        call public_6356960
        mov esi, dword ptr ds : [edi]
        add esp, 0x10
        add edi, 4
        test esi, esi
        jne public_63853a3
/*FIXUP public_63853d9 : nop
        push offset public_63edccc @0x63853d9*/
  FIXUP public_63853d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        public_63853e6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [esp+0x10], eax
        je public_63853fc
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        add esp, 4
        public_63853fc : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63850d0)
    }
}

#undef public_6385107
#undef public_6385124
#undef public_6385140
#undef public_6385157
#undef public_6385174
#undef public_6385184
#undef public_638518d
#undef public_6385192
#undef public_638519c
#undef public_63851b2
#undef public_63851d6
#undef public_6385230
#undef public_638524a
#undef public_6385275
#undef public_638527f
#undef public_638528b
#undef public_638529f
#undef public_63852b4
#undef public_63852c9
#undef public_63852df
#undef public_63852e8
#undef public_6385325
#undef public_63853a3
#undef public_63853d9
#undef public_63853e6
#undef public_63853fc
