#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81180);
CLANG_FORWARD_PROC_SYMBOL(public_6f81a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f81a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f82920);
CLANG_FORWARD_PROC_SYMBOL(public_6f82940);
CLANG_FORWARD_PROC_SYMBOL(public_6f82950);

#define public_6f81287 _public_6f81287
#define public_6f812a0 _public_6f812a0
#define public_6f81349 _public_6f81349
#define public_6f813df _public_6f813df
#define public_6f81423 _public_6f81423
#define public_6f81475 _public_6f81475
#define public_6f8148a _public_6f8148a
#define public_6f814c0 _public_6f814c0
#define public_6f8151e _public_6f8151e
#define public_6f81545 _public_6f81545
#define public_6f8156e _public_6f8156e
#define public_6f815c3 _public_6f815c3
#define public_6f815ea _public_6f815ea
#define public_6f81614 _public_6f81614
#define public_6f81665 _public_6f81665
#define public_6f8169a _public_6f8169a
#define public_6f816fd _public_6f816fd
#define public_6f81765 _public_6f81765
#define public_6f81791 _public_6f81791
#define public_6f817bd _public_6f817bd
#define public_6f8180d _public_6f8180d
#define public_6f8180f _public_6f8180f
#define public_6f81886 _public_6f81886
#define public_6f818e5 _public_6f818e5
#define public_6f81900 _public_6f81900
#define public_6f8190f _public_6f8190f
#define public_6f819b7 _public_6f819b7
#define public_6f819be _public_6f819be
#define public_6f819ef _public_6f819ef

PROC_DECLARE(0x6f81180, internal_6f81180, public_6f81180);
extern "C" NAKED register_t __cdecl internal_6f81180()
{
    __asm
    {
        mov eax, 0x2020
        call public_6f82950
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ds:[esi+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2038]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [edx+0xB0]
        test eax, eax
        jl public_6f81900
        mov ebx, dword ptr ss : [esp+0x2040]
        mov ecx, dword ptr ds : [esi+0x3C]
        xor edx, edx
        mov eax, ebx
        div ecx
        mov edi, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0x20], ebx
        mov ecx, edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x2044]
        xor edx, edx
        div edi
        mov ebp, eax
        xor eax, eax
        test edx, edx
        setne al
        xor edx, edx
        mov dword ptr ss : [esp+0x1C], ebp
        add eax, ebp
        test ecx, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        setne dl
        add edx, ecx
        mov ecx, dword ptr ss : [esp+0x2038]
        imul eax, edx
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ss : [esp+0x2044]
        mov dword ptr ds : [esi+0x24], eax
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_6f82920
        mov eax, dword ptr ds : [eax+4]
        add eax, 7
        shr eax, 3
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 4
        test eax, eax
        je public_6f819ef
        shl eax, 2
        shl eax, 3
        push eax
        call public_6f82940
        mov ecx, dword ptr ds : [esi+0x14]
        shl ecx, 2
        push ecx
        mov dword ptr ds : [esi+0x10], eax
        call public_6f82940
        mov ecx, dword ptr ds : [esi+0x14]
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        xor eax, eax
        mov dword ptr ds : [esi+0xC], edi
        rep stosd
        mov ecx, edx
        xor ebx, ebx
        and ecx, 3
        add esp, 8
        test ebp, ebp
        mov ebp, dword ptr ss : [esp+0x2048]
        rep stosb
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        jle public_6f8148a
        public_6f81287 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        jle public_6f81349
        nop 
        lea esp, ss:[esp]
        public_6f812a0 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edi, eax
        imul edi, dword ptr ss : [esp+0x24]
        imul edi, dword ptr ss : [esp+0x10]
        mov edx, ecx
        imul edx, dword ptr ss : [esp+0x18]
        imul edx, ebp
        add edi, edx
        mov edx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0xC]
        shl ebx, 2
        add edx, ebx
        push edx
        push 0
        push 1
        lea edx, ds:[esi+0x30]
        push edx
        push ecx
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ss : [ebp+0xB4]
        test eax, eax
        jne public_6f8151e
        mov edx, dword ptr ss : [esp+0x203C]
        mov ebp, dword ptr ss : [esp+0x2048]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        add edi, edx
        mov edx, dword ptr ss : [esp+0x2040]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+0x40]
        push ebp
        push edx
        mov edx, dword ptr ds : [esi+0x3C]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ebx+edx]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xD4]
        test eax, eax
        jne public_6f8156e
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        inc ebx
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6f812a0
        public_6f81349 : nop
        mov edi, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0x2040]
        xor edx, edx
        div edi
        test edx, edx
        mov dword ptr ss : [esp+0x2C], edx
        je public_6f81475
        mov eax, dword ptr ds : [esi+0x40]
        imul edi, dword ptr ss : [esp+0x24]
        imul edi, dword ptr ss : [esp+0x10]
        mov ecx, eax
        imul ecx, dword ptr ss : [esp+0x18]
        imul ecx, ebp
        add edi, ecx
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        mov ecx, dword ptr ds : [esi+4]
        je public_6f813df
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0xC]
        lea eax, ds:[ebx*4]
        add ecx, eax
        push ecx
        push 0
        push 1
        lea eax, ds:[esi+0x30]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [edx+0xB4]
        test eax, eax
        je public_6f81423
        mov eax, dword ptr ss : [esp+0x2044]
        mov ecx, dword ptr ss : [esp+0x2040]
        push 0x10
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
/*FIXUP push offset public_6f840a4 @0x6f813c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840a4
        push edx
        call public_6f81a40
        push eax
        push 0x18F
        jmp public_6f81545
        public_6f813df : nop
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ds:[ebx*4]
        add ecx, edx
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        push 0
        push 1
        lea ecx, ds:[esi+0x30]
        push ecx
        push eax
        push edx
        call public_6f81a10
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        call dword ptr ss : [ebp+0xB4]
        test eax, eax
        jne public_6f815c3
        mov ebp, dword ptr ss : [esp+0x2048]
        public_6f81423 : nop
        mov edx, dword ptr ss : [esp+0x203C]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        add edi, edx
        mov edx, dword ptr ss : [esp+0x2040]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+0x40]
        push ebp
        push edx
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0x2058]
        xor edx, edx
        div dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [eax+ebx*4]
        mov eax, dword ptr ss : [esp+0x48]
        push 0
        push edx
        push ecx
        call dword ptr ds : [eax+0xD4]
        test eax, eax
        jne public_6f81614
        inc ebx
        mov dword ptr ss : [esp+0x14], ebx
        public_6f81475 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_6f81287
        public_6f8148a : nop
        mov eax, dword ptr ss : [esp+0x2044]
        xor edx, edx
        div dword ptr ds : [esi+0x40]
        test edx, edx
        je public_6f819b7
        push edx
        call public_6f81a10
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        jle public_6f816fd
        nop 
        public_6f814c0 : nop
        mov edi, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi+0x40]
        imul edi, dword ptr ss : [esp+0x24]
        imul eax, dword ptr ss : [esp+0x18]
        imul edi, dword ptr ss : [esp+0x10]
        imul eax, ebp
        add edi, eax
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6f81665
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx]
        lea eax, ds:[ebx*4]
        add edx, eax
        push edx
        push 0
        push 1
        lea eax, ds:[esi+0x30]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [ecx+0xB4]
        test eax, eax
        jne public_6f81765
        jmp public_6f8169a
        public_6f8151e : nop
        mov eax, dword ptr ss : [esp+0x2044]
        mov ecx, dword ptr ss : [esp+0x2040]
        push 0x10
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
/*FIXUP push offset public_6f840a4 @0x6f81534*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840a4
        push edx
        call public_6f81a40
        push eax
        push 0x179
        public_6f81545 : nop
        mov eax, dword ptr ds : [public_6f83004]
/*FIXUP push offset public_6f84060 @0x6f8154a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov ecx, 0x100002
/*FIXUP push offset public_6f84040 @0x6f81554*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x28
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f8156e : nop
        mov ecx, dword ptr ds : [public_6f83004]
/*FIXUP push offset public_6f8401c @0x6f81574*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x17F
/*FIXUP push offset public_6f84060 @0x6f8157e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov eax, 0x100002
/*FIXUP push offset public_6f84040 @0x6f81588*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push eax
        call dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [ecx+edi*4]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        add esp, 0x14
        push ecx
        push eax
        call dword ptr ds : [edx+0xB8]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+edi*4], 0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f815c3 : nop
        mov ecx, dword ptr ss : [esp+0x2044]
        mov edx, dword ptr ss : [esp+0x2040]
        push 0x10
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_6f840a4 @0x6f815d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840a4
        push eax
        call public_6f81a40
        push eax
        push 0x197
/*FIXUP public_6f815ea : nop
        push offset public_6f84060 @0x6f815ea*/
  FIXUP public_6f815ea : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov ecx, 0x100002
/*FIXUP push offset public_6f84040 @0x6f815f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push ecx
        mov ecx, dword ptr ds : [public_6f83004]
        call dword ptr ds : [ecx]
        add esp, 0x28
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f81614 : nop
        mov edx, dword ptr ds : [public_6f83004]
/*FIXUP push offset public_6f8401c @0x6f8161a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x19F
/*FIXUP push offset public_6f84060 @0x6f81624*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov eax, 0x100002
/*FIXUP push offset public_6f84040 @0x6f8162e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push eax
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edx+ebx*4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        push edx
        push eax
        call dword ptr ds : [ecx+0xB8]
        mov eax, dword ptr ds : [esi+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [eax+ebx*4], 0
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f81665 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ds:[ebx*4]
        add eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push 0
        push 1
        lea eax, ds:[esi+0x30]
        push eax
        mov eax, dword ptr ds : [esi+0x3C]
        push ecx
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [edx+0xB4]
        test eax, eax
        jne public_6f81791
        public_6f8169a : nop
        mov edx, dword ptr ss : [esp+0x203C]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        add edi, edx
        mov edx, dword ptr ss : [esp+0x2040]
        push edi
        push edx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x2054]
        xor edx, edx
        div dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [esi+0x3C]
        push ebp
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        mov eax, dword ptr ds : [edx+ebx*4]
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push ecx
        call dword ptr ds : [eax+0xD4]
        test eax, eax
        jne public_6f817bd
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        inc ebx
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6f814c0
        public_6f816fd : nop
        mov edi, dword ptr ss : [esp+0x2040]
        mov ecx, dword ptr ds : [esi+0x3C]
        xor edx, edx
        mov eax, edi
        div ecx
        test edx, edx
        je public_6f819be
        imul ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x40]
        imul ecx, dword ptr ss : [esp+0x10]
        imul eax, dword ptr ss : [esp+0x18]
        imul eax, ebp
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f81886
        push edx
        call public_6f81a10
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp eax, ecx
        jle public_6f8180d
        xor edx, edx
        mov eax, edi
        div dword ptr ds : [esi+0x3C]
        push edx
        call public_6f81a10
        add esp, 4
        jmp public_6f8180f
        public_6f81765 : nop
        mov ecx, dword ptr ss : [esp+0x2044]
        mov edx, dword ptr ss : [esp+0x2040]
        push 0x10
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_6f840a4 @0x6f8177b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840a4
        push eax
        call public_6f81a40
        push eax
        push 0x1B6
        jmp public_6f815ea
        public_6f81791 : nop
        mov edx, dword ptr ss : [esp+0x2044]
        mov eax, dword ptr ss : [esp+0x2040]
        push 0x10
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
/*FIXUP push offset public_6f840a4 @0x6f817a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840a4
        push ecx
        call public_6f81a40
        push eax
        push 0x1BE
        jmp public_6f818e5
/*FIXUP public_6f817bd : nop
        push offset public_6f8401c @0x6f817bd*/
  FIXUP public_6f817bd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x1C5
/*FIXUP push offset public_6f84060 @0x6f817c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov eax, 0x100002
/*FIXUP push offset public_6f84040 @0x6f817d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push eax
        mov eax, dword ptr ds : [public_6f83004]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edx+ebx*4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        push edx
        push eax
        call dword ptr ds : [ecx+0xB8]
        mov eax, dword ptr ds : [esi+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [eax+ebx*4], 0
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f8180d : nop
        mov eax, ecx
        public_6f8180f : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ecx]
        shl ebx, 2
        add edx, ebx
        push edx
        push 0
        push 1
        lea edx, ds:[esi+0x30]
        push edx
        push eax
        push eax
        push ecx
        call dword ptr ds : [edi+0xB4]
        test eax, eax
        je public_6f8190f
        mov eax, dword ptr ss : [esp+0x2044]
        mov ecx, dword ptr ss : [esp+0x2040]
        push 0x10
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
/*FIXUP push offset public_6f840a4 @0x6f8184c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840a4
        push edx
        call public_6f81a40
        push eax
        mov eax, dword ptr ds : [public_6f83004]
        push 0x1E1
/*FIXUP push offset public_6f84060 @0x6f81862*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov ecx, 0x100002
/*FIXUP push offset public_6f84040 @0x6f8186c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x28
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f81886 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        shl ebx, 2
        add ecx, ebx
        push ecx
        push 0
        mov dword ptr ss : [esp+0x30], eax
        push 1
        lea eax, ds:[esi+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push edx
        call public_6f81a10
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 4
        push eax
        push ecx
        call dword ptr ds : [edi+0xB4]
        test eax, eax
        je public_6f8190f
        mov edx, dword ptr ss : [esp+0x2044]
        mov eax, dword ptr ss : [esp+0x2040]
        push 0x10
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
/*FIXUP push offset public_6f840a4 @0x6f818d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840a4
        push ecx
        call public_6f81a40
        push eax
        push 0x1E9
        public_6f818e5 : nop
        mov edx, dword ptr ds : [public_6f83004]
/*FIXUP push offset public_6f84060 @0x6f818eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov ecx, 0x100002
/*FIXUP push offset public_6f84040 @0x6f818f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x28
        public_6f81900 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f8190f : nop
        mov edx, dword ptr ss : [esp+0x203C]
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        add edi, edx
        mov edx, dword ptr ss : [esp+0x2040]
        push edi
        push edx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x2054]
        xor edx, edx
        div dword ptr ds : [esi+0x40]
        mov edi, dword ptr ss : [esp+0x2050]
        push ebp
        mov eax, edi
        push edx
        xor edx, edx
        div dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [ebx+eax]
        mov eax, dword ptr ss : [esp+0x38]
        push 0
        push edx
        push ecx
        call dword ptr ds : [eax+0xD4]
        test eax, eax
        je public_6f819be
/*FIXUP push offset public_6f8401c @0x6f81967*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x1EF
/*FIXUP push offset public_6f84060 @0x6f81971*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov eax, 0x100002
/*FIXUP push offset public_6f84040 @0x6f8197b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84040
        push eax
        mov eax, dword ptr ds : [public_6f83004]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ebx+edx]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        push edx
        push eax
        call dword ptr ds : [ecx+0xB8]
        mov eax, dword ptr ds : [esi+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+eax], 0
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2020
        ret 0x18
        public_6f819b7 : nop
        mov edi, dword ptr ss : [esp+0x2040]
        public_6f819be : nop
        xor edx, edx
        mov eax, edi
        div dword ptr ds : [esi+0x3C]
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x2044]
        neg edx
        sbb edx, edx
        neg edx
        add edx, ebx
        mov dword ptr ds : [esi+0x18], edx
        xor edx, edx
        div dword ptr ds : [esi+0x40]
        mov eax, dword ptr ss : [esp+0x18]
        neg edx
        sbb edx, edx
        neg edx
        add edx, eax
        mov dword ptr ds : [esi+0x1C], edx
        public_6f819ef : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x2020
        ret 0x18
        UNREACHABLE_TRAP(0x6f81180)
    }
}

#undef public_6f81287
#undef public_6f812a0
#undef public_6f81349
#undef public_6f813df
#undef public_6f81423
#undef public_6f81475
#undef public_6f8148a
#undef public_6f814c0
#undef public_6f8151e
#undef public_6f81545
#undef public_6f8156e
#undef public_6f815c3
#undef public_6f815ea
#undef public_6f81614
#undef public_6f81665
#undef public_6f8169a
#undef public_6f816fd
#undef public_6f81765
#undef public_6f81791
#undef public_6f817bd
#undef public_6f8180d
#undef public_6f8180f
#undef public_6f81886
#undef public_6f818e5
#undef public_6f81900
#undef public_6f8190f
#undef public_6f819b7
#undef public_6f819be
#undef public_6f819ef
