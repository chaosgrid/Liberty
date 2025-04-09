#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);
CLANG_FORWARD_PROC_SYMBOL(public_58a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_58b360);
CLANG_FORWARD_PROC_SYMBOL(public_5a0880);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_58b385 _public_58b385
#define public_58b3b3 _public_58b3b3
#define public_58b3dd _public_58b3dd
#define public_58b41e _public_58b41e
#define public_58b44f _public_58b44f
#define public_58b489 _public_58b489
#define public_58b4af _public_58b4af
#define public_58b519 _public_58b519
#define public_58b546 _public_58b546
#define public_58b570 _public_58b570
#define public_58b589 _public_58b589
#define public_58b59a _public_58b59a
#define public_58b5a8 _public_58b5a8
#define public_58b5dc _public_58b5dc
#define public_58b5f1 _public_58b5f1
#define public_58b5fb _public_58b5fb
#define public_58b60b _public_58b60b
#define public_58b629 _public_58b629
#define public_58b642 _public_58b642
#define public_58b660 _public_58b660
#define public_58b66e _public_58b66e
#define public_58b682 _public_58b682
#define public_58b68c _public_58b68c

PROC_DECLARE(0x58b360, internal_58b360, public_58b360);
extern "C" NAKED register_t __cdecl internal_58b360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[ecx-6]
        cmp eax, 0x4B
        push edi
        ja public_58b68c
/*FIXUP movzx eax, byte ptr ds : [eax+public_58b6e0] @0x58b377*/
/*FIXUP jmp dword ptr ds : [eax*4+public_58b6a8] @0x58b37e*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000d371
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d371 : nop
        je public_58b4af
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000d36d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d36d : nop
        je public_58b68c
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000d369
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d369 : nop
        je public_58b68c
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000d365
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d365 : nop
        je public_58b68c
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000d361
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d361 : nop
        je public_58b68c
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000d35d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d35d : nop
        je public_58b68c
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000d359
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d359 : nop
        je public_58b629
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000d355
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d355 : nop
        je public_58b68c
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000d351
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d351 : nop
        je public_58b68c
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000d34d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d34d : nop
        je public_58b68c
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000d349
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d349 : nop
        je public_58b68c
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000d345
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d345 : nop
        je public_58b68c
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000d341
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d341 : nop
        je public_58b68c
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000d33d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d33d : nop
        je public_58b68c
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000d339
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d339 : nop
        je public_58b68c
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000d335
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d335 : nop
        je public_58b68c
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000d331
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d331 : nop
        je public_58b68c
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000d32d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d32d : nop
        je public_58b68c
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000d329
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d329 : nop
        je public_58b68c
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000d325
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d325 : nop
        je public_58b68c
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000d321
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d321 : nop
        je public_58b68c
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000d31d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d31d : nop
        je public_58b68c
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000d319
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d319 : nop
        je public_58b68c
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000d315
  JMPTB mov eax, 2
  JMPTB public_4c0000000000d315 : nop
        je public_58b5a8
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000d311
  JMPTB mov eax, 3
  JMPTB public_4c0000000000d311 : nop
        je public_58b59a
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000d30d
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d30d : nop
        je public_58b5fb
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000d309
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d309 : nop
        je public_58b60b
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000d305
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d305 : nop
        je public_58b660
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000d301
  JMPTB mov eax, 7
  JMPTB public_4c0000000000d301 : nop
        je public_58b642
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000d2fd
  JMPTB mov eax, 8
  JMPTB public_4c0000000000d2fd : nop
        je public_58b66e
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000d2f9
  JMPTB mov eax, 9
  JMPTB public_4c0000000000d2f9 : nop
        je public_58b570
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000d2f5
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2f5 : nop
        je public_58b68c
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000d2f1
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2f1 : nop
        je public_58b68c
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000d2ed
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2ed : nop
        je public_58b68c
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000d2e9
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2e9 : nop
        je public_58b68c
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000d2e5
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2e5 : nop
        je public_58b68c
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000d2e1
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2e1 : nop
        je public_58b68c
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000d2dd
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2dd : nop
        je public_58b68c
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000d2d9
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2d9 : nop
        je public_58b68c
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000d2d5
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2d5 : nop
        je public_58b68c
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000d2d1
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2d1 : nop
        je public_58b68c
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000d2cd
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2cd : nop
        je public_58b68c
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000d2c9
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2c9 : nop
        je public_58b68c
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000d2c5
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2c5 : nop
        je public_58b68c
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000d2c1
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2c1 : nop
        je public_58b68c
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000d2bd
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000d2bd : nop
        je public_58b489
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000d2b9
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2b9 : nop
        je public_58b68c
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000d2b5
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2b5 : nop
        je public_58b68c
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000d2b1
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2b1 : nop
        je public_58b68c
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000d2ad
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2ad : nop
        je public_58b68c
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000d2a9
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2a9 : nop
        je public_58b68c
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000d2a5
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2a5 : nop
        je public_58b68c
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000d2a1
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d2a1 : nop
        je public_58b68c
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000d29d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d29d : nop
        je public_58b68c
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000d299
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d299 : nop
        je public_58b68c
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000d295
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d295 : nop
        je public_58b68c
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000d291
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d291 : nop
        je public_58b68c
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000d28d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d28d : nop
        je public_58b68c
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000d289
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d289 : nop
        je public_58b68c
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000d285
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d285 : nop
        je public_58b68c
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000d281
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d281 : nop
        je public_58b68c
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000d27d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d27d : nop
        je public_58b68c
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000d279
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d279 : nop
        je public_58b68c
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000d275
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d275 : nop
        je public_58b68c
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c0000000000d271
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d271 : nop
        je public_58b68c
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c0000000000d26d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d26d : nop
        je public_58b68c
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c0000000000d269
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d269 : nop
        je public_58b68c
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c0000000000d265
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d265 : nop
        je public_58b68c
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c0000000000d261
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d261 : nop
        je public_58b68c
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c0000000000d25d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d25d : nop
        je public_58b68c
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c0000000000d259
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d259 : nop
        je public_58b68c
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c0000000000d255
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d255 : nop
        je public_58b68c
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c0000000000d251
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d251 : nop
        je public_58b68c
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c0000000000d24d
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000d24d : nop
        je public_58b68c
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c0000000000d249
  JMPTB mov eax, 0xB
  JMPTB public_4c0000000000d249 : nop
        je public_58b3b3
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c0000000000d245
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000d245 : nop
        je public_58b385
  JMPTB int 3
        public_58b385 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        mov byte ptr ds : [esi+0x379], 0
        je public_58b682
        mov ecx, 1
        pop edi
        mov byte ptr ds : [esi+0x379], cl
        mov byte ptr ds : [esi+0x35D], cl
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b3b3 : nop
        mov al, byte ptr ds : [esi+0x389]
        test al, al
        je public_58b41e
        mov byte ptr ds : [esi+0x389], 0
        mov eax, dword ptr ds : [public_67d8c8]
        dec eax
        test eax, eax
        mov dword ptr ds : [public_67d8c8], eax
        jg public_58b3dd
        push 0xB
        call public_5646e0
        add esp, 4
        public_58b3dd : nop
        mov edi, dword ptr ds : [esi+0x370]
        lea ecx, ds:[esi+0xA8]
        push ecx
        lea edx, ds:[esi+0x60]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [esi+0x32C]
        add esp, 0xC
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        push edx
        call public_4145d0
        mov ecx, dword ptr ds : [esi+0x334]
        push edi
        call public_415860
        public_58b41e : nop
        mov ecx, 1
        mov byte ptr ds : [esi+0x362], 0
        mov dword ptr ds : [esi+0x364], ecx
        mov dword ptr ds : [esi+0x368], 0
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        je public_58b44f
        cmp word ptr ds : [eax], 0
        je public_58b44f
        mov word ptr ds : [eax], 0
        public_58b44f : nop
        cmp dword ptr ss : [esp+0x34], ecx
        jne public_58b682
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        pop edi
        mov byte ptr ds : [esi+0x362], cl
        fmul dword ptr ds : [public_5d1494]
        xor eax, eax
        fstp dword ptr ds : [esi+0x36C]
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b489 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ecx]
        cmp eax, 1
        sete al
        mov byte ptr ds : [esi+0x35D], al
        pop edi
        mov dword ptr ds : [esi+0x35E], edx
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b4af : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx]
        lea edi, ds:[esi+0xA8]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        cmp dword ptr ds : [esi+0x84], 0xFFFFFFFF
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        je public_58b682
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xA4]
        mov al, byte ptr ds : [esi+0x378]
        test al, al
        jne public_58b519
        fld dword ptr ds : [esi+0x32C]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x330]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        public_58b519 : nop
        test byte ptr ds : [esi+0x2F4], 1
        je public_58b546
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edi+8]
        lea edi, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        public_58b546 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        call public_5a0880
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b570 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        jne public_58b589
        pop edi
        mov byte ptr ds : [esi+0x35C], 0
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b589 : nop
        pop edi
        mov byte ptr ds : [esi+0x35C], 1
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b59a : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov ecx, esi
        call public_58a5f0
        jmp public_58b5dc
        public_58b5a8 : nop
        fld dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0x32C]
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        call public_4145d0
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+0x334]
        push edx
        call public_415860
        public_58b5dc : nop
        mov esi, dword ptr ds : [esi+0x370]
        test esi, esi
        je public_58b5f1
        cmp word ptr ds : [esi], 0
        je public_58b5f1
        mov word ptr ds : [esi], 0
        public_58b5f1 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b5fb : nop
        mov eax, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b60b : nop
        mov esi, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_58b682
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        pop edi
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b629 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        setne cl
        pop edi
        mov byte ptr ds : [esi+0x354], cl
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b642 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x33C], eax
        pop edi
        mov dword ptr ds : [esi+0x338], edx
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b660 : nop
        mov eax, dword ptr ds : [esi+0x340]
        pop edi
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b66e : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+0x34C], ecx
        mov dword ptr ds : [esi+0x350], edx
        public_58b682 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xC
        public_58b68c : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        push edx
        push ecx
        mov ecx, esi
        call public_5a13c0
        pop edi
        pop esi
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x58b360)
        ASM_EXPORT_ENTRY_SINGLE(0x58b68c, public_58b68c)
    }
}

#undef public_58b385
#undef public_58b3b3
#undef public_58b3dd
#undef public_58b41e
#undef public_58b44f
#undef public_58b489
#undef public_58b4af
#undef public_58b519
#undef public_58b546
#undef public_58b570
#undef public_58b589
#undef public_58b59a
#undef public_58b5a8
#undef public_58b5dc
#undef public_58b5f1
#undef public_58b5fb
#undef public_58b60b
#undef public_58b629
#undef public_58b642
#undef public_58b660
#undef public_58b66e
#undef public_58b682
#undef public_58b68c

#pragma init_seg(compiler)
extern "C" void const* const public_58b68c = __AsmFindLabelExport(&internal_58b360, 0x58b68c);
