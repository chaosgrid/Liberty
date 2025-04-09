#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7950);
CLANG_FORWARD_PROC_SYMBOL(public_4d8e20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4d8e46 _public_4d8e46
#define public_4d8e63 _public_4d8e63
#define public_4d8e65 _public_4d8e65
#define public_4d8ea5 _public_4d8ea5
#define public_4d8ed4 _public_4d8ed4
#define public_4d8ef9 _public_4d8ef9
#define public_4d8f2b _public_4d8f2b
#define public_4d8f50 _public_4d8f50
#define public_4d8f6a _public_4d8f6a
#define public_4d8fa6 _public_4d8fa6
#define public_4d902f _public_4d902f
#define public_4d90ad _public_4d90ad
#define public_4d90bd _public_4d90bd
#define public_4d90cd _public_4d90cd
#define public_4d90da _public_4d90da
#define public_4d90ea _public_4d90ea
#define public_4d90ee _public_4d90ee
#define public_4d9111 _public_4d9111
#define public_4d9129 _public_4d9129
#define public_4d913e _public_4d913e
#define public_4d91b0 _public_4d91b0
#define public_4d91d6 _public_4d91d6
#define public_4d9202 _public_4d9202
#define public_4d922d _public_4d922d
#define public_4d922f _public_4d922f
#define public_4d923e _public_4d923e
#define public_4d9262 _public_4d9262
#define public_4d9285 _public_4d9285
#define public_4d92af _public_4d92af
#define public_4d92c0 _public_4d92c0
#define public_4d92c2 _public_4d92c2
#define public_4d92db _public_4d92db
#define public_4d92dd _public_4d92dd
#define public_4d92f5 _public_4d92f5
#define public_4d9304 _public_4d9304
#define public_4d9329 _public_4d9329
#define public_4d9340 _public_4d9340
#define public_4d9349 _public_4d9349
#define public_4d9350 _public_4d9350
#define public_4d935a _public_4d935a
#define public_4d9378 _public_4d9378
#define public_4d937a _public_4d937a
#define public_4d93b2 _public_4d93b2

PROC_DECLARE(0x4d8e20, internal_4d8e20, public_4d8e20);
extern "C" NAKED register_t __cdecl internal_4d8e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xC8
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], ecx
        call public_54baf0
        test eax, eax
        jne public_4d8e46
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC8
        ret 8
        public_4d8e46 : nop
        add eax, 0xC
        test eax, eax
        je public_4d8e63
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4d8e63
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_4d8e65
        public_4d8e63 : nop
        xor esi, esi
        public_4d8e65 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c62e8]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0xDC]
        xor bl, bl
        mov dword ptr ss : [esp+0x2C], eax
        inc eax
        cmp eax, 0x14
        mov edi, 1
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], edi
        ja public_4d935a
/*FIXUP movzx ecx, byte ptr ds : [eax+public_4d93ec] @0x4d8e97*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_4d93c4] @0x4d8e9e*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_4d8ea5
  JMPTB cmp eax, 1
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 2
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 3
  JMPTB mov ecx, 1
  JMPTB je public_4d902f
  JMPTB cmp eax, 4
  JMPTB mov ecx, 2
  JMPTB je public_4d8ed4
  JMPTB cmp eax, 5
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 6
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 7
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 8
  JMPTB mov ecx, 3
  JMPTB je public_4d9304
  JMPTB cmp eax, 9
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 4
  JMPTB je public_4d91d6
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 5
  JMPTB je public_4d9340
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 6
  JMPTB je public_4d8f2b
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_4d8f6a
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 8
  JMPTB je public_4d9349
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 9
  JMPTB je public_4d935a
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0
  JMPTB je public_4d8ea5
  JMPTB int 3
        public_4d8ea5 : nop
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x20], 0x13
        call dword ptr ds : [public_5c6530]
        mov bl, al
        call public_4c7950
        jmp public_4d935a
        public_4d8ed4 : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c652c]
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        test eax, eax
        jne public_4d8ef9
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC8
        ret 8
        public_4d8ef9 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x3AC]
        mov edx, dword ptr ds : [eax+0x3B0]
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x4C], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x54], edx
        push ecx
        jmp public_4d9350
        public_4d8f2b : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6528]
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        test eax, eax
        jne public_4d8f50
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC8
        ret 8
        public_4d8f50 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x48], eax
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        jmp public_4d9350
        public_4d8f6a : nop
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_5c6524]
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        test eax, eax
        je public_4d8fa6
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x78], eax
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x78], edi
        mov byte ptr ss : [esp+0xB0], 1
        push ecx
        jmp public_4d9350
        public_4d8fa6 : nop
        fld dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x74], 2
        fld dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        mov dword ptr ss : [esp+0x78], 0
        fmul dword ptr ds : [public_5ca21c]
        mov byte ptr ss : [esp+0xAC], 1
        fstp dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_5ca21c]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5ca21c]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fxch 
        fadd dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x7C], eax
        lea eax, ss:[esp+0x68]
        push eax
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x84], ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x8C], edx
        jmp public_4d9350
        public_4d902f : nop
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_5c6520]
        mov ecx, esi
        mov byte ptr ss : [esp+0xC0], 0
        call dword ptr ds : [public_5c6348]
        mov edi, eax
        test edi, edi
        je public_4d913e
        mov dword ptr ss : [esp+0x74], 0
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [edi]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        call dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ss : [esp+0x34]
        test ecx, 0x30000
        je public_4d90ad
        fld dword ptr ds : [public_5d8464]
        jmp public_4d90ee
        public_4d90ad : nop
        test ecx, 0x140000
        je public_4d90bd
        fld dword ptr ds : [public_5d55b4]
        jmp public_4d90ee
        public_4d90bd : nop
        test ecx, 0x680000
        je public_4d90cd
        fld dword ptr ds : [public_5c75dc]
        jmp public_4d90ee
        public_4d90cd : nop
        test cl, 0xF
        je public_4d90da
        fld dword ptr ds : [public_5c75e0]
        jmp public_4d90ee
        public_4d90da : nop
        test ecx, 0xFDFF
        je public_4d90ea
        fld dword ptr ds : [public_5c75dc]
        jmp public_4d90ee
        public_4d90ea : nop
        fld dword ptr ss : [esp+0x38]
        public_4d90ee : nop
        fmul dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0xB8]
        fcomp qword ptr ds : [public_5ca320]
        fnstsw ax
        test ah, 5
        jp public_4d9111
        mov dword ptr ss : [esp+0xB8], 0x42C80000
        public_4d9111 : nop
        cmp ecx, 0x200
        jne public_4d9129
        mov dword ptr ss : [esp+0xB8], 0x42C80000
        jmp public_4d91b0
        public_4d9129 : nop
        cmp ecx, 0x80
        jne public_4d91b0
        mov dword ptr ss : [esp+0xB8], 0x443B8000
        jmp public_4d91b0
        public_4d913e : nop
        fld dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x74], 1
        fld dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x44]
        fxch 
        mov dword ptr ss : [esp+0xB8], 0x43FA0000
        fmul dword ptr ds : [public_5d8460]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5d8460]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_5d8460]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fxch 
        fadd dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x78], edx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x7C], eax
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x80], ecx
        public_4d91b0 : nop
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c6530]
        test edi, edi
        mov bl, al
        jne public_4d935a
        call public_4c7950
        jmp public_4d935a
        public_4d91d6 : nop
        mov al, byte ptr ss : [esp+0xE0]
        test al, al
        je public_4d9202
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c651c]
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_5c6530]
        jmp public_4d935a
        public_4d9202 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [eax+0x38C], edi
        je public_4d935a
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x1C]
        lea esi, ds:[ecx+0x390]
        je public_4d922d
        add eax, 8
        jmp public_4d922f
        public_4d922d : nop
        xor eax, eax
        public_4d922f : nop
        cmp eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [public_5c62a8]
        je public_4d923e
        push eax
        mov ecx, esi
        call ebx
        public_4d923e : nop
        mov eax, dword ptr ds : [esi]
        xor ecx, ecx
        cmp eax, ecx
        je public_4d92f5
        add eax, 0xFFFFFFF8
        cmp eax, ecx
        je public_4d92f5
        mov eax, dword ptr ds : [esi]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], ecx
        je public_4d9262
        lea ecx, ds:[eax-8]
        public_4d9262 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0xB0]
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_4d9285
        mov ecx, dword ptr ds : [esi]
        add eax, 8
        cmp eax, ecx
        je public_4d9285
        push eax
        mov ecx, esi
        call ebx
        public_4d9285 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+0x38C], edi
        cmp dword ptr ss : [ebp+0xC0], 7
        jne public_4d92af
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [public_5c6530]
        public_4d92af : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        lea edi, ds:[ebx+0x368]
        je public_4d92c0
        lea ecx, ds:[esi-8]
        jmp public_4d92c2
        public_4d92c0 : nop
        xor ecx, ecx
        public_4d92c2 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+0x28]
        test eax, eax
        je public_4d92db
        add eax, 0xFFFFFFF8
        jmp public_4d92dd
        public_4d92db : nop
        xor eax, eax
        public_4d92dd : nop
        mov edx, dword ptr ds : [eax+4]
        push edi
        push 0
        lea ecx, ds:[eax+4]
/*FIXUP push offset public_5d8274 @0x4d92e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8274
        lea eax, ss:[esp+0x3C]
        push eax
        push 1
        call dword ptr ds : [edx+0x5C]
        public_4d92f5 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC8
        ret 8
        public_4d9304 : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6518]
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        test eax, eax
        jne public_4d9329
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC8
        ret 8
        public_4d9329 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x48], eax
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        jmp public_4d9350
        public_4d9340 : nop
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        jmp public_4d9350
        public_4d9349 : nop
        push 0
        lea eax, ss:[esp+0x28]
        push eax
        public_4d9350 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c6530]
        mov bl, al
        public_4d935a : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6348]
        mov esi, eax
        test esi, esi
        je public_4d93b2
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        je public_4d9378
        lea ecx, ds:[eax-8]
        jmp public_4d937a
        public_4d9378 : nop
        xor ecx, ecx
        public_4d937a : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0x108]
        public_4d93b2 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0xC8
        ret 8
        UNREACHABLE_TRAP(0x4d8e20)
        ASM_EXPORT_ENTRY_SINGLE(0x4d935a, public_4d935a)
    }
}

#undef public_4d8e46
#undef public_4d8e63
#undef public_4d8e65
#undef public_4d8ea5
#undef public_4d8ed4
#undef public_4d8ef9
#undef public_4d8f2b
#undef public_4d8f50
#undef public_4d8f6a
#undef public_4d8fa6
#undef public_4d902f
#undef public_4d90ad
#undef public_4d90bd
#undef public_4d90cd
#undef public_4d90da
#undef public_4d90ea
#undef public_4d90ee
#undef public_4d9111
#undef public_4d9129
#undef public_4d913e
#undef public_4d91b0
#undef public_4d91d6
#undef public_4d9202
#undef public_4d922d
#undef public_4d922f
#undef public_4d923e
#undef public_4d9262
#undef public_4d9285
#undef public_4d92af
#undef public_4d92c0
#undef public_4d92c2
#undef public_4d92db
#undef public_4d92dd
#undef public_4d92f5
#undef public_4d9304
#undef public_4d9329
#undef public_4d9340
#undef public_4d9349
#undef public_4d9350
#undef public_4d935a
#undef public_4d9378
#undef public_4d937a
#undef public_4d93b2

#pragma init_seg(compiler)
extern "C" void const* const public_4d935a = __AsmFindLabelExport(&internal_4d8e20, 0x4d935a);
