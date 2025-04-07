#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb870);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f32020);
CLANG_FORWARD_PROC_SYMBOL(public_6f32190);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f34c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);

#define public_6eeb229 _public_6eeb229
#define public_6eeb256 _public_6eeb256
#define public_6eeb27b _public_6eeb27b
#define public_6eeb287 _public_6eeb287
#define public_6eeb2cd _public_6eeb2cd
#define public_6eeb2df _public_6eeb2df
#define public_6eeb2f6 _public_6eeb2f6
#define public_6eeb31b _public_6eeb31b
#define public_6eeb327 _public_6eeb327
#define public_6eeb36d _public_6eeb36d
#define public_6eeb37f _public_6eeb37f
#define public_6eeb396 _public_6eeb396
#define public_6eeb3ec _public_6eeb3ec
#define public_6eeb413 _public_6eeb413
#define public_6eeb461 _public_6eeb461
#define public_6eeb47a _public_6eeb47a
#define public_6eeb4ae _public_6eeb4ae
#define public_6eeb4b6 _public_6eeb4b6
#define public_6eeb4cd _public_6eeb4cd
#define public_6eeb512 _public_6eeb512
#define public_6eeb537 _public_6eeb537
#define public_6eeb54e _public_6eeb54e
#define public_6eeb550 _public_6eeb550

PROC_DECLARE(0x6eeb210, internal_6eeb210, public_6eeb210);
extern "C" NAKED register_t __cdecl internal_6eeb210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x48
        cmp eax, 3
        push esi
        push edi
        ja public_6eeb54e
/*FIXUP jmp dword ptr ds : [eax*4+public_6eeb560] @0x6eeb222*/
  JMPTB cmp eax, 0
  JMPTB je public_6eeb229
  JMPTB cmp eax, 1
  JMPTB je public_6eeb396
  JMPTB cmp eax, 2
  JMPTB je public_6eeb413
  JMPTB cmp eax, 3
  JMPTB je public_6eeb4cd
  JMPTB int 3
        public_6eeb229 : nop
        mov edi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        test al, al
        je public_6eeb54e
        mov ecx, edi
        call public_6f34c80
        add eax, 0xFFFFFFFE
        cmp eax, 5
        ja public_6eeb54e
/*FIXUP jmp dword ptr ds : [eax*4+public_6eeb570] @0x6eeb24f*/
  JMPTB cmp eax, 0
  JMPTB je public_6eeb256
  JMPTB cmp eax, 1
  JMPTB je public_6eeb2f6
  JMPTB cmp eax, 2
  JMPTB je public_6eeb2f6
  JMPTB cmp eax, 3
  JMPTB je public_6eeb54e
  JMPTB cmp eax, 4
  JMPTB je public_6eeb54e
  JMPTB cmp eax, 5
  JMPTB je public_6eeb2f6
  JMPTB int 3
        public_6eeb256 : nop
        xor ecx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ss : [esp+0x14], cl
        call public_6eeb870
        add esp, 4
        test al, al
        je public_6eeb27b
/*FIXUP push offset public_6fb75bc @0x6eeb26d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75bc
        push 0x40
        lea ecx, ss:[esp+0x18]
        push ecx
        jmp public_6eeb287
/*FIXUP public_6eeb27b : nop
        push offset public_6fb75a4 @0x6eeb27b*/
  FIXUP public_6eeb27b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75a4
        push 0x40
        lea edx, ss:[esp+0x18]
        push edx
        public_6eeb287 : nop
        call public_6ea9f40
        mov ecx, dword ptr ds : [edi+8]
        mov esi, eax
        add esp, 0xC
        mov dword ptr ss : [esp+0xC], esi
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x5C]
        push eax
        call public_6f50650
        mov ecx, dword ptr ds : [eax+0x94]
        add esp, 4
        cmp ecx, 1
        jne public_6eeb2cd
        mov ecx, 0x40
/*FIXUP push offset public_6fb759c @0x6eeb2be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb759c
        sub ecx, esi
        push ecx
        lea edx, ss:[esp+esi+0x18]
        push edx
        jmp public_6eeb2df
        public_6eeb2cd : nop
        mov eax, 0x40
/*FIXUP push offset public_6fb7594 @0x6eeb2d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7594
        sub eax, esi
        push eax
        lea ecx, ss:[esp+esi+0x18]
        push ecx
        public_6eeb2df : nop
        call public_6ea9f40
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 0xC
        add ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_6eeb4b6
        public_6eeb2f6 : nop
        xor ecx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ss : [esp+0x14], cl
        call public_6eeb870
        add esp, 4
        test al, al
        je public_6eeb31b
/*FIXUP push offset public_6fb7578 @0x6eeb30d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7578
        push 0x40
        lea edx, ss:[esp+0x18]
        push edx
        jmp public_6eeb327
/*FIXUP public_6eeb31b : nop
        push offset public_6fb7560 @0x6eeb31b*/
  FIXUP public_6eeb31b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7560
        push 0x40
        lea eax, ss:[esp+0x18]
        push eax
        public_6eeb327 : nop
        call public_6ea9f40
        mov ecx, dword ptr ds : [edi+8]
        mov esi, eax
        add esp, 0xC
        mov dword ptr ss : [esp+0xC], esi
        call public_6eb6bb0
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov dword ptr ss : [esp+0x60], eax
        call public_6f50650
        mov ecx, dword ptr ds : [eax+0x94]
        add esp, 4
        cmp ecx, 1
        jne public_6eeb36d
        mov edx, 0x40
/*FIXUP push offset public_6fb759c @0x6eeb35e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb759c
        sub edx, esi
        push edx
        lea eax, ss:[esp+esi+0x18]
        push eax
        jmp public_6eeb37f
        public_6eeb36d : nop
        mov ecx, 0x40
/*FIXUP push offset public_6fb7594 @0x6eeb372*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7594
        sub ecx, esi
        push ecx
        lea edx, ss:[esp+esi+0x18]
        push edx
        public_6eeb37f : nop
        call public_6ea9f40
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 0xC
        add ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_6eeb537
        public_6eeb396 : nop
        mov esi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        je public_6eeb3ec
        mov ecx, esi
        call public_6f33f80
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, eax
        call public_6f31ec0
        xor ecx, ecx
        test al, al
        je public_6eeb550
        mov edx, dword ptr ss : [esp+0x5C]
        add edx, 0xFFFCFB51
        push edx
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb7540 @0x6eeb3d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7540
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        mov byte ptr ss : [esp+0x1C], cl
        call public_6eec2b0
        add esp, 0xC
        jmp public_6eeb4b6
        public_6eeb3ec : nop
        mov esi, dword ptr ss : [esp+0x54]
/*FIXUP push offset public_6fb7524 @0x6eeb3f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7524
        lea eax, ds:[esi+4]
        xor ecx, ecx
        push 0x40
        push eax
        mov dword ptr ds : [esi], ecx
        mov byte ptr ds : [eax], cl
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi], eax
        pop edi
        mov eax, esi
        pop esi
        add esp, 0x48
        ret 
        public_6eeb413 : nop
        mov esi, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_6eeb47a
        mov ecx, esi
        call public_6f33f80
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, eax
        call public_6f32020
        xor ecx, ecx
        test al, al
        je public_6eeb550
        mov eax, dword ptr ss : [esp+0x60]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov byte ptr ss : [esp+0x10], cl
        je public_6eeb461
        mov edx, dword ptr ss : [esp+0x5C]
        push eax
        push edx
/*FIXUP push offset public_6fb63a4 @0x6eeb455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63a4
        lea eax, ss:[esp+0x18]
        push eax
        jmp public_6eeb4ae
        public_6eeb461 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_6fb7510 @0x6eeb46a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7510
        push edx
        call public_6eec2b0
        add esp, 0xC
        jmp public_6eeb4b6
        public_6eeb47a : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6f49bc0
        xor ecx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ss : [esp+0x14], cl
        mov eax, dword ptr ds : [eax+0xC]
        xor edx, edx
        dec eax
        mov ecx, 0x14
        div ecx
        inc edx
        push edx
/*FIXUP push offset public_6fb7510 @0x6eeb4a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7510
        lea edx, ss:[esp+0x18]
        push edx
        public_6eeb4ae : nop
        call public_6eec2b0
        add esp, 0x10
        public_6eeb4b6 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, 0x11
        lea esi, ss:[esp+0xC]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 
        public_6eeb4cd : nop
        mov esi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi]
        xor ecx, ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov byte ptr ss : [esp+0x10], cl
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        je public_6eeb512
        mov ecx, esi
        call public_6f33f80
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, eax
        call public_6f32190
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb74fc @0x6eeb502*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb74fc
        push eax
        call public_6eec2b0
        add esp, 0xC
        jmp public_6eeb537
        public_6eeb512 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], ecx
        call public_6f49bc0
        push 1
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb74fc @0x6eeb529*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb74fc
        push eax
        call public_6eec2b0
        add esp, 0x10
        public_6eeb537 : nop
        mov eax, dword ptr ss : [esp+0x54]
        lea esi, ss:[esp+0xC]
        mov edi, eax
        mov ecx, 0x11
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 
        public_6eeb54e : nop
        xor ecx, ecx
        public_6eeb550 : nop
        mov eax, dword ptr ss : [esp+0x54]
        pop edi
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], cl
        pop esi
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6eeb210)
        ASM_EXPORT_ENTRY_FIRST(0x6eeb229, public_6eeb229)
        ASM_EXPORT_ENTRY(0x6eeb256, public_6eeb256)
        ASM_EXPORT_ENTRY(0x6eeb2f6, public_6eeb2f6)
        ASM_EXPORT_ENTRY(0x6eeb396, public_6eeb396)
        ASM_EXPORT_ENTRY(0x6eeb413, public_6eeb413)
        ASM_EXPORT_ENTRY(0x6eeb4cd, public_6eeb4cd)
        ASM_EXPORT_ENTRY_LAST(0x6eeb54e, public_6eeb54e)
    }
}

#undef public_6eeb229
#undef public_6eeb256
#undef public_6eeb27b
#undef public_6eeb287
#undef public_6eeb2cd
#undef public_6eeb2df
#undef public_6eeb2f6
#undef public_6eeb31b
#undef public_6eeb327
#undef public_6eeb36d
#undef public_6eeb37f
#undef public_6eeb396
#undef public_6eeb3ec
#undef public_6eeb413
#undef public_6eeb461
#undef public_6eeb47a
#undef public_6eeb4ae
#undef public_6eeb4b6
#undef public_6eeb4cd
#undef public_6eeb512
#undef public_6eeb537
#undef public_6eeb54e
#undef public_6eeb550

#pragma init_seg(compiler)
extern "C" void const* const public_6eeb229 = __AsmFindLabelExport(&internal_6eeb210, 0x6eeb229);
extern "C" void const* const public_6eeb256 = __AsmFindLabelExport(&internal_6eeb210, 0x6eeb256);
extern "C" void const* const public_6eeb2f6 = __AsmFindLabelExport(&internal_6eeb210, 0x6eeb2f6);
extern "C" void const* const public_6eeb396 = __AsmFindLabelExport(&internal_6eeb210, 0x6eeb396);
extern "C" void const* const public_6eeb413 = __AsmFindLabelExport(&internal_6eeb210, 0x6eeb413);
extern "C" void const* const public_6eeb4cd = __AsmFindLabelExport(&internal_6eeb210, 0x6eeb4cd);
extern "C" void const* const public_6eeb54e = __AsmFindLabelExport(&internal_6eeb210, 0x6eeb54e);
