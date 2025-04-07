#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f040);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f818);
CLANG_FORWARD_PROC_SYMBOL(public_6d1fa33);
CLANG_FORWARD_PROC_SYMBOL(public_6d1fc57);
CLANG_FORWARD_PROC_SYMBOL(public_6d1fe6f);
CLANG_FORWARD_PROC_SYMBOL(public_6d20138);
CLANG_FORWARD_PROC_SYMBOL(public_6d20409);
CLANG_FORWARD_PROC_SYMBOL(public_6d20754);
CLANG_FORWARD_PROC_SYMBOL(public_6d21450);
CLANG_FORWARD_PROC_SYMBOL(public_6d21be9);
CLANG_FORWARD_PROC_SYMBOL(public_6d21ea6);
CLANG_FORWARD_PROC_SYMBOL(public_6d220df);
CLANG_FORWARD_PROC_SYMBOL(public_6d2230f);

#define public_6d1f083 _public_6d1f083
#define public_6d1f0a0 _public_6d1f0a0
#define public_6d1f0c7 _public_6d1f0c7
#define public_6d1f0ee _public_6d1f0ee
#define public_6d1f115 _public_6d1f115
#define public_6d1f131 _public_6d1f131
#define public_6d1f136 _public_6d1f136
#define public_6d1f15a _public_6d1f15a
#define public_6d1f182 _public_6d1f182
#define public_6d1f1c0 _public_6d1f1c0
#define public_6d1f1e6 _public_6d1f1e6
#define public_6d1f207 _public_6d1f207
#define public_6d1f224 _public_6d1f224
#define public_6d1f23a _public_6d1f23a
#define public_6d1f24e _public_6d1f24e
#define public_6d1f268 _public_6d1f268
#define public_6d1f282 _public_6d1f282
#define public_6d1f298 _public_6d1f298
#define public_6d1f2b6 _public_6d1f2b6
#define public_6d1f2bf _public_6d1f2bf
#define public_6d1f2ef _public_6d1f2ef
#define public_6d1f2fa _public_6d1f2fa
#define public_6d1f305 _public_6d1f305
#define public_6d1f310 _public_6d1f310
#define public_6d1f319 _public_6d1f319
#define public_6d1f31b _public_6d1f31b
#define public_6d1f378 _public_6d1f378
#define public_6d1f3af _public_6d1f3af
#define public_6d1f3c1 _public_6d1f3c1
#define public_6d1f3eb _public_6d1f3eb
#define public_6d1f415 _public_6d1f415
#define public_6d1f43f _public_6d1f43f
#define public_6d1f469 _public_6d1f469
#define public_6d1f490 _public_6d1f490
#define public_6d1f4b7 _public_6d1f4b7
#define public_6d1f4de _public_6d1f4de
#define public_6d1f4fa _public_6d1f4fa
#define public_6d1f4ff _public_6d1f4ff
#define public_6d1f522 _public_6d1f522
#define public_6d1f54a _public_6d1f54a
#define public_6d1f588 _public_6d1f588
#define public_6d1f5ab _public_6d1f5ab
#define public_6d1f5c7 _public_6d1f5c7

PROC_DECLARE(0x6d1f040, internal_6d1f040, public_6d1f040);
extern "C" NAKED register_t __cdecl internal_6d1f040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x4C
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x68]
        sub ecx, dword ptr ss : [ebp+0xC]
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx]
        and eax, 6
        mov ecx, dword ptr ss : [ebp-4]
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x40], edx
        cmp dword ptr ss : [ebp-0x40], 7
        ja public_6d1f5c7
        mov eax, dword ptr ss : [ebp-0x40]
/*FIXUP jmp dword ptr ds : [eax*4+public_6d1f5cd] @0x6d1f07c*/
  JMPTB cmp eax, 0
  JMPTB je public_6d1f083
  JMPTB cmp eax, 1
  JMPTB je public_6d1f136
  JMPTB cmp eax, 2
  JMPTB je public_6d1f1e6
  JMPTB cmp eax, 3
  JMPTB je public_6d1f207
  JMPTB cmp eax, 4
  JMPTB je public_6d1f378
  JMPTB cmp eax, 5
  JMPTB je public_6d1f4ff
  JMPTB cmp eax, 6
  JMPTB je public_6d1f5c7
  JMPTB cmp eax, 7
  JMPTB je public_6d1f5ab
  JMPTB int 3
        public_6d1f083 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x68]
        mov dword ptr ss : [ebp-0x44], edx
        cmp dword ptr ss : [ebp-0x44], 0x112
        je public_6d1f0a0
        cmp dword ptr ss : [ebp-0x44], 0x212
        je public_6d1f0ee
        jmp public_6d1f115
        public_6d1f0a0 : nop
        cmp dword ptr ss : [ebp+0xC], 0x252
        jne public_6d1f0c7
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6d21ea6
        add esp, 0x14
        jmp public_6d1f131
        public_6d1f0c7 : nop
        cmp dword ptr ss : [ebp+0xC], 0x212
        jne public_6d1f0ee
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d220df
        add esp, 0x14
        jmp public_6d1f131
        public_6d1f0ee : nop
        cmp dword ptr ss : [ebp+0xC], 0x252
        jne public_6d1f115
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d21be9
        add esp, 0x14
        jmp public_6d1f131
        public_6d1f115 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6d2230f
        add esp, 0x14
        public_6d1f131 : nop
        jmp public_6d1f5c7
        public_6d1f136 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0xF00
        shr edx, 8
        cmp edx, 2
        jbe public_6d1f15a
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 4
        test eax, eax
        jne public_6d1f15a
        mov dword ptr ss : [ebp-4], 0x40
        jmp public_6d1f1c0
        public_6d1f15a : nop
        mov dword ptr ss : [ebp-0x1C], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        shr ecx, 8
        and ecx, 3
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x1C]
        or edx, ecx
        mov dword ptr ss : [ebp-0x1C], edx
        cmp dword ptr ss : [ebp-0x1C], 0x20
        jne public_6d1f182
        mov dword ptr ss : [ebp-0x1C], 0x30
        public_6d1f182 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        shr eax, 6
        and eax, 3
        shl eax, 2
        mov ecx, dword ptr ss : [ebp-0x1C]
        or ecx, eax
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        shr edx, 4
        and edx, 1
        shl edx, 1
        mov eax, dword ptr ss : [ebp-0x1C]
        or eax, edx
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        shr ecx, 2
        and ecx, 1
        mov edx, dword ptr ss : [ebp-0x1C]
        or edx, ecx
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-4], eax
        public_6d1f1c0 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        mov eax, dword ptr ss : [ebp-4]
        call dword ptr ds : [eax*8+public_6d6ba60]
        add esp, 0x14
        jmp public_6d1f5c7
        public_6d1f1e6 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d2230f
        add esp, 0x14
        jmp public_6d1f5c7
        public_6d1f207 : nop
        mov dword ptr ss : [ebp-0x20], 0
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0xC
        cmp eax, 0xC
        jne public_6d1f224
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x1C
        mov dword ptr ss : [ebp-0x20], ecx
        jmp public_6d1f24e
        public_6d1f224 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 4
        cmp edx, 4
        jne public_6d1f23a
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x20], eax
        jmp public_6d1f24e
        public_6d1f23a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 2
        cmp ecx, 2
        jne public_6d1f24e
        mov edx, dword ptr ss : [ebp-0x20]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x20], edx
        public_6d1f24e : nop
        mov dword ptr ss : [ebp-0x24], 0
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0x10
        test eax, eax
        je public_6d1f268
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d1f268 : nop
        mov dword ptr ss : [ebp-0x28], 0
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0x40
        test edx, edx
        je public_6d1f282
        mov eax, dword ptr ss : [ebp-0x28]
        add eax, 4
        mov dword ptr ss : [ebp-0x28], eax
        public_6d1f282 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0x80
        test ecx, ecx
        je public_6d1f298
        mov edx, dword ptr ss : [ebp-0x28]
        add edx, 4
        mov dword ptr ss : [ebp-0x28], edx
        public_6d1f298 : nop
        mov dword ptr ss : [ebp-0x2C], 0
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0xF00
        shr eax, 8
        mov dword ptr ss : [ebp-0x34], eax
        mov dword ptr ss : [ebp-0x30], 0
        jmp public_6d1f2bf
        public_6d1f2b6 : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        add ecx, 1
        mov dword ptr ss : [ebp-0x30], ecx
        public_6d1f2bf : nop
        mov edx, dword ptr ss : [ebp-0x30]
        cmp edx, dword ptr ss : [ebp-0x34]
        jge public_6d1f31b
        mov eax, dword ptr ss : [ebp-0x30]
        lea ecx, ds:[eax+eax+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        shr edx, cl
        and edx, 3
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x48], eax
        cmp dword ptr ss : [ebp-0x48], 3
        ja public_6d1f319
        mov ecx, dword ptr ss : [ebp-0x48]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d1f5ed] @0x6d1f2e8*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d1f2fa
  JMPTB cmp ecx, 1
  JMPTB je public_6d1f305
  JMPTB cmp ecx, 2
  JMPTB je public_6d1f310
  JMPTB cmp ecx, 3
  JMPTB je public_6d1f2ef
  JMPTB int 3
        public_6d1f2ef : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        add edx, 4
        mov dword ptr ss : [ebp-0x2C], edx
        jmp public_6d1f319
        public_6d1f2fa : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        add eax, 8
        mov dword ptr ss : [ebp-0x2C], eax
        jmp public_6d1f319
        public_6d1f305 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x2C], ecx
        jmp public_6d1f319
        public_6d1f310 : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x2C], edx
        public_6d1f319 : nop
        jmp public_6d1f2b6
        public_6d1f31b : nop
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, dword ptr ss : [ebp-0x24]
        add eax, dword ptr ss : [ebp-0x28]
        add eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        imul ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        imul edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+8]
        add eax, edx
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        add eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp-0xC]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6d1f5c7
        public_6d1f378 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x68]
        mov dword ptr ss : [ebp-0x4C], ecx
        cmp dword ptr ss : [ebp-0x4C], 0x152
        ja public_6d1f3af
        cmp dword ptr ss : [ebp-0x4C], 0x152
        je public_6d1f490
        cmp dword ptr ss : [ebp-0x4C], 0x12
        je public_6d1f3c1
        cmp dword ptr ss : [ebp-0x4C], 0x112
        je public_6d1f43f
        jmp public_6d1f4de
        public_6d1f3af : nop
        cmp dword ptr ss : [ebp-0x4C], 0x212
        je public_6d1f4b7
        jmp public_6d1f4de
        public_6d1f3c1 : nop
        cmp dword ptr ss : [ebp+0xC], 0x252
        jne public_6d1f3eb
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d1fa33
        add esp, 0x14
        jmp public_6d1f4fa
        public_6d1f3eb : nop
        cmp dword ptr ss : [ebp+0xC], 0x212
        jne public_6d1f415
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d1f818
        add esp, 0x14
        jmp public_6d1f4fa
        public_6d1f415 : nop
        cmp dword ptr ss : [ebp+0xC], 0x112
        jne public_6d1f43f
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6d1fc57
        add esp, 0x14
        jmp public_6d1f4fa
        public_6d1f43f : nop
        cmp dword ptr ss : [ebp+0xC], 0x252
        jne public_6d1f469
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d20138
        add esp, 0x14
        jmp public_6d1f4fa
        public_6d1f469 : nop
        cmp dword ptr ss : [ebp+0xC], 0x212
        jne public_6d1f490
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d1fe6f
        add esp, 0x14
        jmp public_6d1f4fa
        public_6d1f490 : nop
        cmp dword ptr ss : [ebp+0xC], 0x252
        jne public_6d1f4b7
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6d20409
        add esp, 0x14
        jmp public_6d1f4fa
        public_6d1f4b7 : nop
        cmp dword ptr ss : [ebp+0xC], 0x252
        jne public_6d1f4de
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d20754
        add esp, 0x14
        jmp public_6d1f4fa
        public_6d1f4de : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d21450
        add esp, 0x14
        public_6d1f4fa : nop
        jmp public_6d1f5c7
        public_6d1f4ff : nop
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0xF00
        shr eax, 8
        cmp eax, 2
        jbe public_6d1f522
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 4
        test ecx, ecx
        jne public_6d1f522
        mov dword ptr ss : [ebp-4], 0x40
        jmp public_6d1f588
        public_6d1f522 : nop
        mov dword ptr ss : [ebp-0x3C], 0
        mov edx, dword ptr ss : [ebp+0xC]
        shr edx, 8
        and edx, 3
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x3C]
        or eax, edx
        mov dword ptr ss : [ebp-0x3C], eax
        cmp dword ptr ss : [ebp-0x3C], 0x20
        jne public_6d1f54a
        mov dword ptr ss : [ebp-0x3C], 0x30
        public_6d1f54a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        shr ecx, 6
        and ecx, 3
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x3C]
        or edx, ecx
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp+0xC]
        shr eax, 4
        and eax, 1
        shl eax, 1
        mov ecx, dword ptr ss : [ebp-0x3C]
        or ecx, eax
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        shr edx, 2
        and edx, 1
        mov eax, dword ptr ss : [ebp-0x3C]
        or eax, edx
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-4], ecx
        public_6d1f588 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [ecx*8+public_6d6b858]
        add esp, 0x14
        jmp public_6d1f5c7
        public_6d1f5ab : nop
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d21450
        add esp, 0x14
        public_6d1f5c7 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1f040)
        ASM_EXPORT_ENTRY_FIRST(0x6d1f083, public_6d1f083)
        ASM_EXPORT_ENTRY(0x6d1f136, public_6d1f136)
        ASM_EXPORT_ENTRY(0x6d1f1e6, public_6d1f1e6)
        ASM_EXPORT_ENTRY(0x6d1f207, public_6d1f207)
        ASM_EXPORT_ENTRY(0x6d1f2ef, public_6d1f2ef)
        ASM_EXPORT_ENTRY(0x6d1f2fa, public_6d1f2fa)
        ASM_EXPORT_ENTRY(0x6d1f305, public_6d1f305)
        ASM_EXPORT_ENTRY(0x6d1f310, public_6d1f310)
        ASM_EXPORT_ENTRY(0x6d1f378, public_6d1f378)
        ASM_EXPORT_ENTRY(0x6d1f4ff, public_6d1f4ff)
        ASM_EXPORT_ENTRY(0x6d1f5ab, public_6d1f5ab)
        ASM_EXPORT_ENTRY_LAST(0x6d1f5c7, public_6d1f5c7)
    }
}

#undef public_6d1f083
#undef public_6d1f0a0
#undef public_6d1f0c7
#undef public_6d1f0ee
#undef public_6d1f115
#undef public_6d1f131
#undef public_6d1f136
#undef public_6d1f15a
#undef public_6d1f182
#undef public_6d1f1c0
#undef public_6d1f1e6
#undef public_6d1f207
#undef public_6d1f224
#undef public_6d1f23a
#undef public_6d1f24e
#undef public_6d1f268
#undef public_6d1f282
#undef public_6d1f298
#undef public_6d1f2b6
#undef public_6d1f2bf
#undef public_6d1f2ef
#undef public_6d1f2fa
#undef public_6d1f305
#undef public_6d1f310
#undef public_6d1f319
#undef public_6d1f31b
#undef public_6d1f378
#undef public_6d1f3af
#undef public_6d1f3c1
#undef public_6d1f3eb
#undef public_6d1f415
#undef public_6d1f43f
#undef public_6d1f469
#undef public_6d1f490
#undef public_6d1f4b7
#undef public_6d1f4de
#undef public_6d1f4fa
#undef public_6d1f4ff
#undef public_6d1f522
#undef public_6d1f54a
#undef public_6d1f588
#undef public_6d1f5ab
#undef public_6d1f5c7

#pragma init_seg(compiler)
extern "C" void const* const public_6d1f083 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f083);
extern "C" void const* const public_6d1f136 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f136);
extern "C" void const* const public_6d1f1e6 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f1e6);
extern "C" void const* const public_6d1f207 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f207);
extern "C" void const* const public_6d1f2ef = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f2ef);
extern "C" void const* const public_6d1f2fa = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f2fa);
extern "C" void const* const public_6d1f305 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f305);
extern "C" void const* const public_6d1f310 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f310);
extern "C" void const* const public_6d1f378 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f378);
extern "C" void const* const public_6d1f4ff = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f4ff);
extern "C" void const* const public_6d1f5ab = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f5ab);
extern "C" void const* const public_6d1f5c7 = __AsmFindLabelExport(&internal_6d1f040, 0x6d1f5c7);
