#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);

#define public_6809d57 _public_6809d57
#define public_6809d6b _public_6809d6b
#define public_6809d79 _public_6809d79
#define public_6809d84 _public_6809d84
#define public_6809d94 _public_6809d94
#define public_6809da4 _public_6809da4
#define public_6809daf _public_6809daf
#define public_6809dbb _public_6809dbb
#define public_6809dc0 _public_6809dc0
#define public_6809dc9 _public_6809dc9
#define public_6809ddb _public_6809ddb

PROC_DECLARE(0x6809d30, internal_6809d30, public_6809d30);
extern "C" NAKED register_t __cdecl internal_6809d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x40
        push esi
        push 1
        call public_6801cf0
        mov esi, eax
        push esi
        call public_6801bd0
        mov ecx, dword ptr ds : [eax]
        add ecx, 7
        add esp, 8
        cmp ecx, 7
        ja public_6809dc9
/*FIXUP jmp dword ptr ds : [ecx*4+public_6809df0] @0x6809d50*/
  JMPTB cmp ecx, 0
  JMPTB je public_6809d84
  JMPTB cmp ecx, 1
  JMPTB je public_6809ddb
  JMPTB cmp ecx, 2
  JMPTB je public_6809da4
  JMPTB cmp ecx, 3
  JMPTB je public_6809d94
  JMPTB cmp ecx, 4
  JMPTB je public_6809d79
  JMPTB cmp ecx, 5
  JMPTB je public_6809d6b
  JMPTB cmp ecx, 6
  JMPTB je public_6809d57
  JMPTB cmp ecx, 7
  JMPTB je public_6809daf
  JMPTB int 3
        public_6809d57 : nop
        push esi
        call public_6802140
        push eax
        call public_68022b0
        add esp, 8
        pop esi
        add esp, 0x40
        ret 
        public_6809d6b : nop
        push esi
        call public_6802420
        add esp, 4
        pop esi
        add esp, 0x40
        ret 
        public_6809d79 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
/*FIXUP push offset public_680e2f8 @0x6809d7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e2f8
        jmp public_6809dbb
        public_6809d84 : nop
        mov edx, dword ptr ds : [eax+8]
        push edx
/*FIXUP push offset public_680e2e8 @0x6809d88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e2e8
        lea eax, ss:[esp+0xC]
        push eax
        jmp public_6809dc0
        public_6809d94 : nop
        mov ecx, dword ptr ds : [eax+8]
        push ecx
/*FIXUP push offset public_680e2e8 @0x6809d98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e2e8
        lea edx, ss:[esp+0xC]
        push edx
        jmp public_6809dc0
        public_6809da4 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
/*FIXUP push offset public_680e2e8 @0x6809da8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e2e8
        jmp public_6809dbb
        public_6809daf : nop
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edx+0x14]
        push eax
/*FIXUP push offset public_680e2d8 @0x6809db6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e2d8
        public_6809dbb : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        public_6809dc0 : nop
        call dword ptr ds : [public_680c060]
        add esp, 0xC
        public_6809dc9 : nop
        lea edx, ss:[esp+4]
        push edx
        call public_68022b0
        add esp, 4
        pop esi
        add esp, 0x40
        ret 
/*FIXUP public_6809ddb : nop
        push offset public_680d9e4 @0x6809ddb*/
  FIXUP public_6809ddb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d9e4
        call public_68022b0
        add esp, 4
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6809d30)
        ASM_EXPORT_ENTRY_FIRST(0x6809d57, public_6809d57)
        ASM_EXPORT_ENTRY(0x6809d6b, public_6809d6b)
        ASM_EXPORT_ENTRY(0x6809d79, public_6809d79)
        ASM_EXPORT_ENTRY(0x6809d84, public_6809d84)
        ASM_EXPORT_ENTRY(0x6809d94, public_6809d94)
        ASM_EXPORT_ENTRY(0x6809da4, public_6809da4)
        ASM_EXPORT_ENTRY(0x6809daf, public_6809daf)
        ASM_EXPORT_ENTRY_LAST(0x6809ddb, public_6809ddb)
    }
}

#undef public_6809d57
#undef public_6809d6b
#undef public_6809d79
#undef public_6809d84
#undef public_6809d94
#undef public_6809da4
#undef public_6809daf
#undef public_6809dbb
#undef public_6809dc0
#undef public_6809dc9
#undef public_6809ddb

#pragma init_seg(compiler)
extern "C" void const* const public_6809d57 = __AsmFindLabelExport(&internal_6809d30, 0x6809d57);
extern "C" void const* const public_6809d6b = __AsmFindLabelExport(&internal_6809d30, 0x6809d6b);
extern "C" void const* const public_6809d79 = __AsmFindLabelExport(&internal_6809d30, 0x6809d79);
extern "C" void const* const public_6809d84 = __AsmFindLabelExport(&internal_6809d30, 0x6809d84);
extern "C" void const* const public_6809d94 = __AsmFindLabelExport(&internal_6809d30, 0x6809d94);
extern "C" void const* const public_6809da4 = __AsmFindLabelExport(&internal_6809d30, 0x6809da4);
extern "C" void const* const public_6809daf = __AsmFindLabelExport(&internal_6809d30, 0x6809daf);
extern "C" void const* const public_6809ddb = __AsmFindLabelExport(&internal_6809d30, 0x6809ddb);
