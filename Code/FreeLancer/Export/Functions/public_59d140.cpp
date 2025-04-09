#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a390);
CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_4bdd40);
CLANG_FORWARD_PROC_SYMBOL(public_576240);
CLANG_FORWARD_PROC_SYMBOL(public_59dd80);
CLANG_FORWARD_PROC_SYMBOL(public_59de50);
CLANG_FORWARD_PROC_SYMBOL(public_59df80);
CLANG_FORWARD_PROC_SYMBOL(public_59dfd0);

#define public_59d164 _public_59d164
#define public_59d177 _public_59d177
#define public_59d17f _public_59d17f
#define public_59d1a3 _public_59d1a3
#define public_59d1ab _public_59d1ab
#define public_59d1b8 _public_59d1b8
#define public_59d1e5 _public_59d1e5
#define public_59d1f7 _public_59d1f7
#define public_59d201 _public_59d201
#define public_59d220 _public_59d220
#define public_59d22c _public_59d22c
#define public_59d2d0 _public_59d2d0
#define public_59d2e5 _public_59d2e5
#define public_59d2fe _public_59d2fe
#define public_59d321 _public_59d321
#define public_59d342 _public_59d342
#define public_59d34d _public_59d34d
#define public_59d364 _public_59d364
#define public_59d396 _public_59d396
#define public_59d3a0 _public_59d3a0
#define public_59d3b6 _public_59d3b6
#define public_59d3bd _public_59d3bd
#define public_59d3c8 _public_59d3c8

PROC_DECLARE(0x59d140, internal_59d140, public_59d140);
extern "C" NAKED register_t __cdecl internal_59d140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x48
        push ebx
        lea eax, ds:[ecx-1]
        cmp eax, 0xC
        push esi
        push edi
        ja public_59d3c8
/*FIXUP movzx eax, byte ptr ds : [eax+public_59d3ec] @0x59d156*/
/*FIXUP jmp dword ptr ds : [eax*4+public_59d3d4] @0x59d15d*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000d483
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d483 : nop
        je public_59d34d
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000d47f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d47f : nop
        je public_59d364
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000d47b
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d47b : nop
        je public_59d3c8
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000d477
  JMPTB mov eax, 2
  JMPTB public_4c0000000000d477 : nop
        je public_59d2fe
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000d473
  JMPTB mov eax, 3
  JMPTB public_4c0000000000d473 : nop
        je public_59d22c
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000d46f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d46f : nop
        je public_59d164
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000d46b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d46b : nop
        je public_59d164
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000d467
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d467 : nop
        je public_59d164
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000d463
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d463 : nop
        je public_59d164
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000d45f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d45f : nop
        je public_59d164
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000d45b
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d45b : nop
        je public_59d164
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000d457
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d457 : nop
        je public_59d164
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000d453
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d453 : nop
        je public_59d164
  JMPTB int 3
        public_59d164 : nop
        lea eax, ds:[ecx-6]
        cmp eax, 8
        jae public_59d177
        or ecx, 0xFFFFFFFF
        sub ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_59d17f
        public_59d177 : nop
        mov dword ptr ss : [esp+0xC], 0
        public_59d17f : nop
        call public_576240
        mov bl, byte ptr ds : [eax+0x1A]
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_59d1a3
        xor edx, edx
        test bl, bl
        setne dl
        add edx, 2
        mov dword ptr ss : [esp+0x10], edx
        jmp public_59d1ab
        public_59d1a3 : nop
        mov dword ptr ss : [esp+0x10], 1
        public_59d1ab : nop
        mov esi, dword ptr ds : [public_67dce0]
        xor bl, bl
        test esi, esi
        push ebp
        je public_59d201
        public_59d1b8 : nop
        test bl, bl
        jne public_59d220
        mov ebp, dword ptr ds : [esi+0x38]
/*FIXUP push offset public_67dbcc @0x59d1bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        push esi
        call public_59de50
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_59d1e5
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x4C]
        mov bl, al
        test bl, bl
        jne public_59d1f7
        public_59d1e5 : nop
        cmp edi, esi
        je public_59d1f7
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x4C]
        mov bl, al
        public_59d1f7 : nop
        test ebp, ebp
        mov esi, ebp
        jne public_59d1b8
        test bl, bl
        jne public_59d220
/*FIXUP public_59d201 : nop
        push offset public_67dbcc @0x59d201*/
  FIXUP public_59d201 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        call public_59dd80
        add esp, 4
        test eax, eax
        je public_59d220
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        mov bl, al
        public_59d220 : nop
        pop ebp
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_59d22c : nop
        fild dword ptr ds : [public_616844]
        sub esp, 8
        lea edx, ss:[esp+0x2C]
        mov ecx, offset public_67dbf8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_616840]
        fstp dword ptr ss : [esp]
        push edx
        call public_4bdd40
        mov ecx, 9
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x30]
        lea eax, ss:[esp+0x24]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_423b90
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], ecx
        add esp, 0xC
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x14], edx
        call public_41a390
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_67dbcc], eax
        mov eax, dword ptr ds : [public_67dce0]
        test eax, eax
        mov dword ptr ds : [public_67dbd0], ecx
        mov dword ptr ds : [public_67dbd4], edx
/*FIXUP push offset public_67dbcc @0x59d2bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        jne public_59d2d0
        call public_59dd80
        add esp, 4
        mov esi, eax
        jmp public_59d2e5
        public_59d2d0 : nop
        push eax
        call public_59de50
        mov esi, eax
        add esp, 8
        test esi, esi
        jne public_59d2e5
        mov esi, dword ptr ds : [public_67dce0]
        public_59d2e5 : nop
        push esi
        call public_59df80
        add esp, 4
        xor eax, eax
        pop edi
        test esi, esi
        pop esi
        setne al
        pop ebx
        add esp, 0x48
        ret 4
        public_59d2fe : nop
        mov ecx, dword ptr ds : [public_67dce0]
        xor bl, bl
        test ecx, ecx
        je public_59d321
        mov edx, dword ptr ds : [public_61684c]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x48]
        pop edi
        pop esi
        mov bl, al
        pop ebx
        add esp, 0x48
        ret 4
/*FIXUP public_59d321 : nop
        push offset public_67dbcc @0x59d321*/
  FIXUP public_59d321 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        call public_59dd80
        add esp, 4
        test eax, eax
        je public_59d342
        mov ecx, dword ptr ds : [public_61684c]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x48]
        mov bl, al
        public_59d342 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_59d34d : nop
        call public_576240
        push eax
        call public_59dfd0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 4
        public_59d364 : nop
        call public_576240
        mov edi, dword ptr ds : [eax+0x14]
        xor bl, bl
        call public_576240
        mov ecx, dword ptr ds : [public_67dcdc]
        test ecx, ecx
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x58], eax
        je public_59d396
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+0x58]
        pop edi
        pop esi
        mov bl, al
        pop ebx
        add esp, 0x48
        ret 4
        public_59d396 : nop
        mov esi, dword ptr ds : [public_67dbe8]
        test esi, esi
        je public_59d3bd
        public_59d3a0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_59d3b6
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+0x58]
        or bl, al
        jne public_59d3bd
        mov eax, dword ptr ss : [esp+0x58]
        public_59d3b6 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_59d3a0
        public_59d3bd : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_59d3c8 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x59d140)
        ASM_EXPORT_ENTRY_SINGLE(0x59d3c8, public_59d3c8)
    }
}

#undef public_59d164
#undef public_59d177
#undef public_59d17f
#undef public_59d1a3
#undef public_59d1ab
#undef public_59d1b8
#undef public_59d1e5
#undef public_59d1f7
#undef public_59d201
#undef public_59d220
#undef public_59d22c
#undef public_59d2d0
#undef public_59d2e5
#undef public_59d2fe
#undef public_59d321
#undef public_59d342
#undef public_59d34d
#undef public_59d364
#undef public_59d396
#undef public_59d3a0
#undef public_59d3b6
#undef public_59d3bd
#undef public_59d3c8

#pragma init_seg(compiler)
extern "C" void const* const public_59d3c8 = __AsmFindLabelExport(&internal_59d140, 0x59d3c8);
