#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);

#define public_6f506c7 _public_6f506c7
#define public_6f506db _public_6f506db
#define public_6f506e9 _public_6f506e9
#define public_6f506f4 _public_6f506f4
#define public_6f50704 _public_6f50704
#define public_6f50714 _public_6f50714
#define public_6f5071f _public_6f5071f
#define public_6f5072b _public_6f5072b
#define public_6f50730 _public_6f50730
#define public_6f50739 _public_6f50739
#define public_6f5074b _public_6f5074b

PROC_DECLARE(0x6f506a0, internal_6f506a0, public_6f506a0);
extern "C" NAKED register_t __cdecl internal_6f506a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x40
        push esi
        push 1
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4af60
        mov ecx, dword ptr ds : [eax]
        add ecx, 7
        add esp, 8
        cmp ecx, 7
        ja public_6f50739
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f50760] @0x6f506c0*/
  JMPTB cmp ecx, 0
  JMPTB je public_6f506f4
  JMPTB cmp ecx, 1
  JMPTB je public_6f5074b
  JMPTB cmp ecx, 2
  JMPTB je public_6f50714
  JMPTB cmp ecx, 3
  JMPTB je public_6f50704
  JMPTB cmp ecx, 4
  JMPTB je public_6f506e9
  JMPTB cmp ecx, 5
  JMPTB je public_6f506db
  JMPTB cmp ecx, 6
  JMPTB je public_6f506c7
  JMPTB cmp ecx, 7
  JMPTB je public_6f5071f
  JMPTB int 3
        public_6f506c7 : nop
        push esi
        call public_6f4b590
        push eax
        call public_6f4b790
        add esp, 8
        pop esi
        add esp, 0x40
        ret 
        public_6f506db : nop
        push esi
        call public_6f4b900
        add esp, 4
        pop esi
        add esp, 0x40
        ret 
        public_6f506e9 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
/*FIXUP push offset public_6f60df0 @0x6f506ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60df0
        jmp public_6f5072b
        public_6f506f4 : nop
        mov edx, dword ptr ds : [eax+8]
        push edx
/*FIXUP push offset public_6f60de0 @0x6f506f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60de0
        lea eax, ss:[esp+0xC]
        push eax
        jmp public_6f50730
        public_6f50704 : nop
        mov ecx, dword ptr ds : [eax+8]
        push ecx
/*FIXUP push offset public_6f60de0 @0x6f50708*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60de0
        lea edx, ss:[esp+0xC]
        push edx
        jmp public_6f50730
        public_6f50714 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
/*FIXUP push offset public_6f60de0 @0x6f50718*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60de0
        jmp public_6f5072b
        public_6f5071f : nop
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edx+0x14]
        push eax
/*FIXUP push offset public_6f60dd0 @0x6f50726*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60dd0
        public_6f5072b : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        public_6f50730 : nop
        call dword ptr ds : [public_6f5a06c]
        add esp, 0xC
        public_6f50739 : nop
        lea edx, ss:[esp+4]
        push edx
        call public_6f4b790
        add esp, 4
        pop esi
        add esp, 0x40
        ret 
/*FIXUP public_6f5074b : nop
        push offset public_6f60a84 @0x6f5074b*/
  FIXUP public_6f5074b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60a84
        call public_6f4b790
        add esp, 4
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6f506a0)
        ASM_EXPORT_ENTRY_FIRST(0x6f506c7, public_6f506c7)
        ASM_EXPORT_ENTRY(0x6f506db, public_6f506db)
        ASM_EXPORT_ENTRY(0x6f506e9, public_6f506e9)
        ASM_EXPORT_ENTRY(0x6f506f4, public_6f506f4)
        ASM_EXPORT_ENTRY(0x6f50704, public_6f50704)
        ASM_EXPORT_ENTRY(0x6f50714, public_6f50714)
        ASM_EXPORT_ENTRY(0x6f5071f, public_6f5071f)
        ASM_EXPORT_ENTRY_LAST(0x6f5074b, public_6f5074b)
    }
}

#undef public_6f506c7
#undef public_6f506db
#undef public_6f506e9
#undef public_6f506f4
#undef public_6f50704
#undef public_6f50714
#undef public_6f5071f
#undef public_6f5072b
#undef public_6f50730
#undef public_6f50739
#undef public_6f5074b

#pragma init_seg(compiler)
extern "C" void const* const public_6f506c7 = __AsmFindLabelExport(&internal_6f506a0, 0x6f506c7);
extern "C" void const* const public_6f506db = __AsmFindLabelExport(&internal_6f506a0, 0x6f506db);
extern "C" void const* const public_6f506e9 = __AsmFindLabelExport(&internal_6f506a0, 0x6f506e9);
extern "C" void const* const public_6f506f4 = __AsmFindLabelExport(&internal_6f506a0, 0x6f506f4);
extern "C" void const* const public_6f50704 = __AsmFindLabelExport(&internal_6f506a0, 0x6f50704);
extern "C" void const* const public_6f50714 = __AsmFindLabelExport(&internal_6f506a0, 0x6f50714);
extern "C" void const* const public_6f5071f = __AsmFindLabelExport(&internal_6f506a0, 0x6f5071f);
extern "C" void const* const public_6f5074b = __AsmFindLabelExport(&internal_6f506a0, 0x6f5074b);
