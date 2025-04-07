#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b740);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);
CLANG_FORWARD_PROC_SYMBOL(public_6f55490);
CLANG_FORWARD_PROC_SYMBOL(public_6f554c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55530);
CLANG_FORWARD_PROC_SYMBOL(public_6f55a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f55a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f55ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55c70);

#define public_6f55979 _public_6f55979
#define public_6f55998 _public_6f55998
#define public_6f559a7 _public_6f559a7
#define public_6f559b2 _public_6f559b2
#define public_6f559c2 _public_6f559c2
#define public_6f559c9 _public_6f559c9
#define public_6f559ca _public_6f559ca
#define public_6f559d3 _public_6f559d3
#define public_6f559d5 _public_6f559d5
#define public_6f559e2 _public_6f559e2
#define public_6f559f1 _public_6f559f1
#define public_6f55a13 _public_6f55a13

PROC_DECLARE(0x6f55940, internal_6f55940, public_6f55940);
extern "C" NAKED register_t __cdecl internal_6f55940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset public_6f618b8 @0x6f55948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618b8
        mov dword ptr ss : [esp+0x10], 2
        call public_6f55a30
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push 0
        mov ecx, eax
        inc eax
/*FIXUP push offset public_6f61880 @0x6f55965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61880
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f4f630
        add esp, 0x14
        mov esi, eax
        public_6f55979 : nop
        call public_6f55490
/*FIXUP push offset public_6f61690 @0x6f5597e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61690
        push esi
        call public_6f4f510
        add esp, 8
        cmp eax, 4
        ja public_6f559c9
/*FIXUP jmp dword ptr ds : [eax*4+public_6f55a18] @0x6f55991*/
  JMPTB cmp eax, 0
  JMPTB je public_6f55998
  JMPTB cmp eax, 1
  JMPTB je public_6f559a7
  JMPTB cmp eax, 2
  JMPTB je public_6f559b2
  JMPTB cmp eax, 3
  JMPTB je public_6f559b2
  JMPTB cmp eax, 4
  JMPTB je public_6f559c2
  JMPTB int 3
        public_6f55998 : nop
        push edi
        call public_6f55ba0
        add esp, 4
        test eax, eax
        je public_6f55a13
        jmp public_6f559f1
        public_6f559a7 : nop
        push edi
        call public_6f55bf0
        add esp, 4
        jmp public_6f559d3
        public_6f559b2 : nop
        push edi
        call public_6f55c70
        add esp, 4
        mov esi, 1
        jmp public_6f559d5
/*FIXUP public_6f559c2 : nop
        push offset public_6f61900 @0x6f559c2*/
  FIXUP public_6f559c2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61900
        jmp public_6f559ca
        public_6f559c9 : nop
        push esi
        public_6f559ca : nop
        push edi
        call public_6f55a60
        add esp, 8
        public_6f559d3 : nop
        mov esi, eax
        public_6f559d5 : nop
        call public_6f554c0
        test esi, esi
        jne public_6f559e2
        test eax, eax
        je public_6f55a13
        public_6f559e2 : nop
        push eax
        call public_6f55530
        push eax
        call public_6f4b740
        add esp, 8
        public_6f559f1 : nop
        mov eax, dword ptr ss : [esp+8]
        push 0
        mov ecx, eax
        inc eax
        push 0
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        call public_6f4f630
        mov esi, eax
        add esp, 0xC
        test esi, esi
        jne public_6f55979
        public_6f55a13 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f55940)
        ASM_EXPORT_ENTRY_FIRST(0x6f55998, public_6f55998)
        ASM_EXPORT_ENTRY(0x6f559a7, public_6f559a7)
        ASM_EXPORT_ENTRY(0x6f559b2, public_6f559b2)
        ASM_EXPORT_ENTRY_LAST(0x6f559c2, public_6f559c2)
    }
}

#undef public_6f55979
#undef public_6f55998
#undef public_6f559a7
#undef public_6f559b2
#undef public_6f559c2
#undef public_6f559c9
#undef public_6f559ca
#undef public_6f559d3
#undef public_6f559d5
#undef public_6f559e2
#undef public_6f559f1
#undef public_6f55a13

#pragma init_seg(compiler)
extern "C" void const* const public_6f55998 = __AsmFindLabelExport(&internal_6f55940, 0x6f55998);
extern "C" void const* const public_6f559a7 = __AsmFindLabelExport(&internal_6f55940, 0x6f559a7);
extern "C" void const* const public_6f559b2 = __AsmFindLabelExport(&internal_6f55940, 0x6f559b2);
extern "C" void const* const public_6f559c2 = __AsmFindLabelExport(&internal_6f55940, 0x6f559c2);
