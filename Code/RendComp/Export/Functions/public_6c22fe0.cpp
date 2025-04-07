#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27910);
CLANG_FORWARD_PROC_SYMBOL(public_6c29000);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c22ffd _public_6c22ffd
#define public_6c23016 _public_6c23016
#define public_6c23045 _public_6c23045
#define public_6c2305e _public_6c2305e
#define public_6c2308d _public_6c2308d
#define public_6c230b4 _public_6c230b4
#define public_6c230c2 _public_6c230c2
#define public_6c230f3 _public_6c230f3
#define public_6c230f7 _public_6c230f7
#define public_6c23112 _public_6c23112
#define public_6c23145 _public_6c23145
#define public_6c2316c _public_6c2316c
#define public_6c23180 _public_6c23180
#define public_6c231b1 _public_6c231b1
#define public_6c231b5 _public_6c231b5
#define public_6c231d0 _public_6c231d0
#define public_6c23203 _public_6c23203
#define public_6c2322a _public_6c2322a
#define public_6c23238 _public_6c23238
#define public_6c23269 _public_6c23269
#define public_6c2326d _public_6c2326d
#define public_6c23288 _public_6c23288
#define public_6c232bb _public_6c232bb
#define public_6c232e2 _public_6c232e2
#define public_6c232f0 _public_6c232f0
#define public_6c23321 _public_6c23321
#define public_6c23325 _public_6c23325
#define public_6c23340 _public_6c23340
#define public_6c23373 _public_6c23373
#define public_6c2339a _public_6c2339a
#define public_6c233a8 _public_6c233a8
#define public_6c233d9 _public_6c233d9
#define public_6c233dd _public_6c233dd
#define public_6c233f8 _public_6c233f8
#define public_6c23413 _public_6c23413
#define public_6c2341a _public_6c2341a
#define public_6c23428 _public_6c23428
#define public_6c23432 _public_6c23432
#define public_6c23437 _public_6c23437
#define public_6c23445 _public_6c23445
#define public_6c23481 _public_6c23481
#define public_6c234aa _public_6c234aa
#define public_6c234c0 _public_6c234c0
#define public_6c234fd _public_6c234fd
#define public_6c23501 _public_6c23501

PROC_DECLARE(0x6c22fe0, internal_6c22fe0, public_6c22fe0);
extern "C" NAKED register_t __cdecl internal_6c22fe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x1E8]
        cmp eax, dword ptr ds : [ecx+0x14]
        push ebx
        push ebp
        push esi
        push edi
        jne public_6c22ffd
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x18
        public_6c22ffd : nop
        mov edx, dword ptr ds : [ecx+0x218]
        mov ebp, 2
        cmp edx, ebp
        je public_6c23016
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x18
        public_6c23016 : nop
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, 0x80
        ja public_6c233f8
        je public_6c23428
        dec eax
        cmp eax, 0xF
        ja public_6c23428
/*FIXUP movzx eax, byte ptr ds : [eax+public_6c2353c] @0x6c23037*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6c23524] @0x6c2303e*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000042c
  JMPTB mov eax, 0
  JMPTB public_4c0000000000042c : nop
        je public_6c23045
  JMPTB cmp eax, 1
  JMPTB jne public_4c00000000000428
  JMPTB mov eax, 1
  JMPTB public_4c00000000000428 : nop
        je public_6c231d0
  JMPTB cmp eax, 2
  JMPTB jne public_4c00000000000424
  JMPTB mov eax, 5
  JMPTB public_4c00000000000424 : nop
        je public_6c23428
  JMPTB cmp eax, 3
  JMPTB jne public_4c00000000000420
  JMPTB mov eax, 2
  JMPTB public_4c00000000000420 : nop
        je public_6c23288
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000041c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000041c : nop
        je public_6c23428
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000000418
  JMPTB mov eax, 5
  JMPTB public_4c00000000000418 : nop
        je public_6c23428
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000000414
  JMPTB mov eax, 5
  JMPTB public_4c00000000000414 : nop
        je public_6c23428
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000000410
  JMPTB mov eax, 3
  JMPTB public_4c00000000000410 : nop
        je public_6c23112
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000040c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000040c : nop
        je public_6c23428
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000000408
  JMPTB mov eax, 5
  JMPTB public_4c00000000000408 : nop
        je public_6c23428
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000000404
  JMPTB mov eax, 5
  JMPTB public_4c00000000000404 : nop
        je public_6c23428
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000000400
  JMPTB mov eax, 5
  JMPTB public_4c00000000000400 : nop
        je public_6c23428
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c000000000003fc
  JMPTB mov eax, 5
  JMPTB public_4c000000000003fc : nop
        je public_6c23428
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c000000000003f8
  JMPTB mov eax, 5
  JMPTB public_4c000000000003f8 : nop
        je public_6c23428
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c000000000003f4
  JMPTB mov eax, 5
  JMPTB public_4c000000000003f4 : nop
        je public_6c23428
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c000000000003f0
  JMPTB mov eax, 4
  JMPTB public_4c000000000003f0 : nop
        je public_6c23340
  JMPTB int 3
        public_6c23045 : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov edi, dword ptr ss : [esp+0x28]
        cmp edi, dword ptr ds : [ecx+0x14]
        je public_6c2305e
        push 0
        push 0
        push 0
        mov ecx, ebx
        call public_6c27910
        public_6c2305e : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax+0x14]
        imul edx, dword ptr ds : [eax+8]
        mov esi, ebp
        imul esi, edi
        cmp esi, edx
        jbe public_6c2308d
        mov eax, dword ptr ds : [eax+4]
        push eax
        call public_6c34ea0
        push esi
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x2C]
        add esp, 8
        mov dword ptr ds : [ecx+4], eax
        public_6c2308d : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebp
        jne public_6c230b4
        mov edx, dword ptr ds : [ebx+0x2C]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        imul ecx, edi
        mov edi, dword ptr ds : [edx+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6c230f3
        public_6c230b4 : nop
        test edi, edi
        jbe public_6c230f7
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dword ptr ss : [esp+0x1C], edi
        public_6c230c2 : nop
        mov edi, dword ptr ds : [ebx+0x2C]
        mov edi, dword ptr ds : [edi+4]
        add edi, edx
        mov ecx, ebp
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, edi
        add edx, ebp
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6c230c2
        mov eax, edi
        public_6c230f3 : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_6c230f7 : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0xC], eax
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [edx+0x14], edi
        mov eax, dword ptr ds : [ebx+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebp
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        public_6c23112 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+0x28]
        imul ecx, dword ptr ds : [eax+0x1C]
        mov esi, ebp
        imul esi, edi
        cmp esi, ecx
        jbe public_6c23145
        mov edx, dword ptr ds : [eax+0x18]
        push edx
        call public_6c34ea0
        push esi
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x2C]
        add esp, 8
        mov dword ptr ds : [ecx+0x18], eax
        public_6c23145 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebp
        jne public_6c2316c
        mov edx, dword ptr ds : [ebx+0x2C]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        imul ecx, edi
        mov edi, dword ptr ds : [edx+0x18]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6c231b1
        public_6c2316c : nop
        test edi, edi
        jbe public_6c231b5
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dword ptr ss : [esp+0x1C], edi
        lea ebx, ds:[ebx]
        public_6c23180 : nop
        mov edi, dword ptr ds : [ebx+0x2C]
        mov edi, dword ptr ds : [edi+0x18]
        add edi, edx
        mov ecx, ebp
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, edi
        add edx, ebp
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6c23180
        mov eax, edi
        public_6c231b1 : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_6c231b5 : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [edx+0x28], edi
        mov eax, dword ptr ds : [ebx+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x1C], ebp
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        public_6c231d0 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+0x50]
        imul ecx, dword ptr ds : [eax+0x44]
        mov esi, ebp
        imul esi, edi
        cmp esi, ecx
        jbe public_6c23203
        mov edx, dword ptr ds : [eax+0x40]
        push edx
        call public_6c34ea0
        push esi
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x2C]
        add esp, 8
        mov dword ptr ds : [ecx+0x40], eax
        public_6c23203 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebp
        jne public_6c2322a
        mov edx, dword ptr ds : [ebx+0x2C]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        imul ecx, edi
        mov edi, dword ptr ds : [edx+0x40]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6c23269
        public_6c2322a : nop
        test edi, edi
        jbe public_6c2326d
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dword ptr ss : [esp+0x1C], edi
        public_6c23238 : nop
        mov edi, dword ptr ds : [ebx+0x2C]
        mov edi, dword ptr ds : [edi+0x40]
        add edi, edx
        mov ecx, ebp
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, edi
        add edx, ebp
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6c23238
        mov eax, edi
        public_6c23269 : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_6c2326d : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x48], eax
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [edx+0x50], edi
        mov eax, dword ptr ds : [ebx+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x44], ebp
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        public_6c23288 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+0x64]
        imul ecx, dword ptr ds : [eax+0x58]
        mov esi, ebp
        imul esi, edi
        cmp esi, ecx
        jbe public_6c232bb
        mov edx, dword ptr ds : [eax+0x54]
        push edx
        call public_6c34ea0
        push esi
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x2C]
        add esp, 8
        mov dword ptr ds : [ecx+0x54], eax
        public_6c232bb : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebp
        jne public_6c232e2
        mov edx, dword ptr ds : [ebx+0x2C]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        imul ecx, edi
        mov edi, dword ptr ds : [edx+0x54]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6c23321
        public_6c232e2 : nop
        test edi, edi
        jbe public_6c23325
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dword ptr ss : [esp+0x1C], edi
        public_6c232f0 : nop
        mov edi, dword ptr ds : [ebx+0x2C]
        mov edi, dword ptr ds : [edi+0x54]
        add edi, edx
        mov ecx, ebp
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, edi
        add edx, ebp
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6c232f0
        mov eax, edi
        public_6c23321 : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_6c23325 : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x5C], eax
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [edx+0x64], edi
        mov eax, dword ptr ds : [ebx+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x58], ebp
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        public_6c23340 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+0x3C]
        imul ecx, dword ptr ds : [eax+0x30]
        mov esi, ebp
        imul esi, edi
        cmp esi, ecx
        jbe public_6c23373
        mov edx, dword ptr ds : [eax+0x2C]
        push edx
        call public_6c34ea0
        push esi
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x2C]
        add esp, 8
        mov dword ptr ds : [ecx+0x2C], eax
        public_6c23373 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebp
        jne public_6c2339a
        mov edx, dword ptr ds : [ebx+0x2C]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        imul ecx, edi
        mov edi, dword ptr ds : [edx+0x2C]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6c233d9
        public_6c2339a : nop
        test edi, edi
        jbe public_6c233dd
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dword ptr ss : [esp+0x1C], edi
        public_6c233a8 : nop
        mov edi, dword ptr ds : [ebx+0x2C]
        mov edi, dword ptr ds : [edi+0x2C]
        add edi, edx
        mov ecx, ebp
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, edi
        add edx, ebp
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6c233a8
        mov eax, edi
        public_6c233d9 : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_6c233dd : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x34], eax
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [edx+0x3C], edi
        mov eax, dword ptr ds : [ebx+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x30], ebp
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        public_6c233f8 : nop
        cmp eax, 0x8000
        ja public_6c2341a
        je public_6c23413
        cmp eax, 0x100
        je public_6c23428
        cmp eax, 0x4000
        jne public_6c23428
        xor ebp, ebp
        jmp public_6c23437
        public_6c23413 : nop
        mov ebp, 1
        jmp public_6c23437
        public_6c2341a : nop
        cmp eax, 0x10000
        je public_6c23437
        cmp eax, 0x20000
        je public_6c23432
        public_6c23428 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x18
        public_6c23432 : nop
        mov ebp, 3
        public_6c23437 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        jne public_6c23445
        mov ecx, ebx
        call public_6c29000
        public_6c23445 : nop
        mov ecx, dword ptr ds : [ebx+0x38]
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        lea ebp, ss:[ebp+ebp*4]
        imul esi, edi
        shl ebp, 2
        mov edx, dword ptr ds : [ecx+ebp+0x10]
        imul edx, dword ptr ds : [ecx+ebp+4]
        cmp esi, edx
        lea eax, ds:[ecx+ebp]
        jbe public_6c23481
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6c34ea0
        push esi
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x38]
        add esp, 8
        mov dword ptr ds : [ecx+ebp], eax
        public_6c23481 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ss : [esp+0x24]
        jne public_6c234aa
        mov edx, dword ptr ds : [ebx+0x38]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        imul ecx, edi
        mov edi, dword ptr ds : [edx+ebp]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_6c234fd
        public_6c234aa : nop
        test edi, edi
        jbe public_6c23501
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], edi
        lea esp, ss:[esp]
        public_6c234c0 : nop
        mov edi, dword ptr ds : [ebx+0x38]
        mov edi, dword ptr ds : [edi+ebp]
        mov ecx, dword ptr ss : [esp+0x24]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        add edx, esi
        add eax, edi
        dec ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6c234c0
        mov eax, edi
        public_6c234fd : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_6c23501 : nop
        mov ecx, dword ptr ds : [ebx+0x38]
        mov dword ptr ds : [ecx+ebp+8], eax
        mov edx, dword ptr ds : [ebx+0x38]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+ebp+0x10], edi
        mov eax, dword ptr ds : [ebx+0x38]
        pop edi
        pop esi
        mov dword ptr ds : [eax+ebp+4], ecx
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6c22fe0)
        ASM_EXPORT_ENTRY_FIRST(0x6c23045, public_6c23045)
        ASM_EXPORT_ENTRY(0x6c23112, public_6c23112)
        ASM_EXPORT_ENTRY(0x6c231d0, public_6c231d0)
        ASM_EXPORT_ENTRY(0x6c23288, public_6c23288)
        ASM_EXPORT_ENTRY(0x6c23340, public_6c23340)
        ASM_EXPORT_ENTRY_LAST(0x6c23428, public_6c23428)
    }
}

#undef public_6c22ffd
#undef public_6c23016
#undef public_6c23045
#undef public_6c2305e
#undef public_6c2308d
#undef public_6c230b4
#undef public_6c230c2
#undef public_6c230f3
#undef public_6c230f7
#undef public_6c23112
#undef public_6c23145
#undef public_6c2316c
#undef public_6c23180
#undef public_6c231b1
#undef public_6c231b5
#undef public_6c231d0
#undef public_6c23203
#undef public_6c2322a
#undef public_6c23238
#undef public_6c23269
#undef public_6c2326d
#undef public_6c23288
#undef public_6c232bb
#undef public_6c232e2
#undef public_6c232f0
#undef public_6c23321
#undef public_6c23325
#undef public_6c23340
#undef public_6c23373
#undef public_6c2339a
#undef public_6c233a8
#undef public_6c233d9
#undef public_6c233dd
#undef public_6c233f8
#undef public_6c23413
#undef public_6c2341a
#undef public_6c23428
#undef public_6c23432
#undef public_6c23437
#undef public_6c23445
#undef public_6c23481
#undef public_6c234aa
#undef public_6c234c0
#undef public_6c234fd
#undef public_6c23501

#pragma init_seg(compiler)
extern "C" void const* const public_6c23045 = __AsmFindLabelExport(&internal_6c22fe0, 0x6c23045);
extern "C" void const* const public_6c23112 = __AsmFindLabelExport(&internal_6c22fe0, 0x6c23112);
extern "C" void const* const public_6c231d0 = __AsmFindLabelExport(&internal_6c22fe0, 0x6c231d0);
extern "C" void const* const public_6c23288 = __AsmFindLabelExport(&internal_6c22fe0, 0x6c23288);
extern "C" void const* const public_6c23340 = __AsmFindLabelExport(&internal_6c22fe0, 0x6c23340);
extern "C" void const* const public_6c23428 = __AsmFindLabelExport(&internal_6c22fe0, 0x6c23428);
