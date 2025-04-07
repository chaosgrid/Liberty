#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee54e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee60e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);

#define public_6ee6138 _public_6ee6138
#define public_6ee6158 _public_6ee6158
#define public_6ee616a _public_6ee616a
#define public_6ee61ec _public_6ee61ec
#define public_6ee61ef _public_6ee61ef
#define public_6ee61f2 _public_6ee61f2
#define public_6ee6216 _public_6ee6216
#define public_6ee6257 _public_6ee6257
#define public_6ee626a _public_6ee626a
#define public_6ee6289 _public_6ee6289
#define public_6ee6378 _public_6ee6378
#define public_6ee6387 _public_6ee6387
#define public_6ee63c6 _public_6ee63c6
#define public_6ee63fc _public_6ee63fc

PROC_DECLARE(0x6ee60e0, internal_6ee60e0, public_6ee60e0);
extern "C" NAKED register_t __cdecl internal_6ee60e0()
{
    __asm
    {
        mov eax, 0x2020
        call public_6ee8da0
        push ebx
        mov ebx, dword ptr ss : [esp+0x2028]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x14]
        mov esi, eax
        push ecx
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], esi
        call public_6ee31d0
        test al, al
        je public_6ee63c6
        mov esi, dword ptr ss : [esp+0x2038]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6ee6138
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], 0
        public_6ee6138 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        lea ebp, ds:[esi+4]
        je public_6ee6158
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp], 0
        public_6ee6158 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ee616a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ee616a : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x12C]
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jl public_6ee6387
        mov dword ptr ds : [esi], ebx
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+4]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x1C], 0x14
        mov eax, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        test al, 0x10
        mov dword ptr ds : [esi+0x20], eax
        je public_6ee61f2
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        lea ebx, ds:[esi+8]
        push ebx
/*FIXUP push offset public_6ee919c @0x6ee61d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee919c
        push eax
        call dword ptr ds : [edx]
        cmp dword ptr ds : [ebx], 0
        mov eax, dword ptr ds : [esi+0x1C]
        je public_6ee61ec
        or eax, 0x10
        mov byte ptr ds : [esi+0x50], 1
        jmp public_6ee61ef
        public_6ee61ec : nop
        and eax, 0xFFFFFFEF
        public_6ee61ef : nop
        mov dword ptr ds : [esi+0x1C], eax
        public_6ee61f2 : nop
        mov al, byte ptr ds : [esi+0x20]
        mov ebx, 0x20
        test bl, al
        je public_6ee6257
        mov ebp, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        call dword ptr ds : [eax+0x20]
        test eax, eax
        jl public_6ee6216
        or dword ptr ds : [esi+0x1C], ebx
        jmp public_6ee6257
        public_6ee6216 : nop
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee6257
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+0x34]
/*FIXUP push offset public_6eeabec @0x6ee622b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeabec
        push eax
        call public_6ee71c0
        push eax
        push 0xCC1
/*FIXUP push offset public_6eea070 @0x6ee623c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee6246*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x20
        public_6ee6257 : nop
        mov eax, dword ptr ds : [esi+0x20]
        test al, 8
        je public_6ee626a
        mov edx, dword ptr ds : [esi+0x1C]
        and edx, 0xFFFFFFF7
        or edx, 4
        mov dword ptr ds : [esi+0x1C], edx
        public_6ee626a : nop
        test ah, 1
        je public_6ee6289
        movzx eax, word ptr ds : [edi+0xA]
        mov ecx, dword ptr ds : [edi+0xC]
        imul ecx, eax
        mov dword ptr ds : [esi+0x10], ecx
        movzx edx, word ptr ds : [edi+0xA]
        mov eax, dword ptr ds : [edi+0x10]
        imul eax, edx
        mov dword ptr ds : [esi+0x14], eax
        public_6ee6289 : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        test al, al
        je public_6ee6378
        mov eax, dword ptr ss : [esp+0x10]
        lea ebx, ds:[eax+0xCC]
        lea edi, ds:[esi+0x38]
        mov ecx, ebx
        mov eax, dword ptr ds : [ecx]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi]
        lea ebp, ds:[esi+0x30]
        push edi
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ss : [ebp], 0x41200000
        mov dword ptr ds : [esi+0x28], 0x43FA0000
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ss : [esp+0x10]
        fild dword ptr ds : [edx+0xA4]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fmul dword ptr ds : [esi+0x40]
        fstp dword ptr ds : [esi+0x40]
        fld dword ptr ds : [esi+0x28]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+0x2C]
        fstp st(0)
        fld dword ptr ss : [ebp]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+0x34]
        fstp st(0)
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_6ee54e0
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+0x44]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+8], edx
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
        fstp dword ptr ds : [esi+0x24]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_6ee6378 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 8
        public_6ee6387 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+0x34]
/*FIXUP push offset public_6eeabb8 @0x6ee6390*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeabb8
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xCDD
/*FIXUP push offset public_6eea070 @0x6ee63a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee63b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi]
        add esp, 0x20
        push edi
        call dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x18]
        public_6ee63c6 : nop
        cmp esi, 0xFFFFFFFF
        je public_6ee63fc
        push esi
        lea ecx, ss:[esp+0x34]
/*FIXUP push offset public_6eeab80 @0x6ee63d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeab80
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xCE5
/*FIXUP push offset public_6eea070 @0x6ee63e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee63f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        public_6ee63fc : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2020
        ret 8
        UNREACHABLE_TRAP(0x6ee60e0)
    }
}

#undef public_6ee6138
#undef public_6ee6158
#undef public_6ee616a
#undef public_6ee61ec
#undef public_6ee61ef
#undef public_6ee61f2
#undef public_6ee6216
#undef public_6ee6257
#undef public_6ee626a
#undef public_6ee6289
#undef public_6ee6378
#undef public_6ee6387
#undef public_6ee63c6
#undef public_6ee63fc
