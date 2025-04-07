#include "Shading-PCH.h"


#define public_6eb6b90 _public_6eb6b90
#define public_6eb6b96 _public_6eb6b96
#define public_6eb6b9c _public_6eb6b9c
#define public_6eb6ba2 _public_6eb6ba2
#define public_6eb6bab _public_6eb6bab
#define public_6eb6bb4 _public_6eb6bb4
#define public_6eb6bbd _public_6eb6bbd
#define public_6eb6bc3 _public_6eb6bc3
#define public_6eb6bc9 _public_6eb6bc9
#define public_6eb6bd2 _public_6eb6bd2
#define public_6eb6bdb _public_6eb6bdb
#define public_6eb6be4 _public_6eb6be4
#define public_6eb6bed _public_6eb6bed
#define public_6eb6bf3 _public_6eb6bf3

PROC_DECLARE(0x6eb6b80, internal_6eb6b80, public_6eb6b80);
extern "C" NAKED register_t __cdecl internal_6eb6b80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xC
        ja public_6eb6bf3
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb6bf8] @0x6eb6b89*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb6b90
  JMPTB cmp eax, 1
  JMPTB je public_6eb6b96
  JMPTB cmp eax, 2
  JMPTB je public_6eb6b9c
  JMPTB cmp eax, 3
  JMPTB je public_6eb6ba2
  JMPTB cmp eax, 4
  JMPTB je public_6eb6bab
  JMPTB cmp eax, 5
  JMPTB je public_6eb6bb4
  JMPTB cmp eax, 6
  JMPTB je public_6eb6bbd
  JMPTB cmp eax, 7
  JMPTB je public_6eb6bc3
  JMPTB cmp eax, 8
  JMPTB je public_6eb6bc9
  JMPTB cmp eax, 9
  JMPTB je public_6eb6bd2
  JMPTB cmp eax, 0xA
  JMPTB je public_6eb6bdb
  JMPTB cmp eax, 0xB
  JMPTB je public_6eb6be4
  JMPTB cmp eax, 0xC
  JMPTB je public_6eb6bed
  JMPTB int 3
        public_6eb6b90 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_6eb6b96 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_6eb6b9c : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_6eb6ba2 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_6eb6bab : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_6eb6bb4 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_6eb6bbd : nop
        lea eax, ds:[ecx+0x6C]
        ret 4
        public_6eb6bc3 : nop
        lea eax, ds:[ecx+0x70]
        ret 4
        public_6eb6bc9 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x2C
        ret 4
        public_6eb6bd2 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x48
        ret 4
        public_6eb6bdb : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x4C
        ret 4
        public_6eb6be4 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x50
        ret 4
        public_6eb6bed : nop
        lea eax, ds:[ecx+0x68]
        ret 4
        public_6eb6bf3 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb6b80)
        ASM_EXPORT_ENTRY_FIRST(0x6eb6b90, public_6eb6b90)
        ASM_EXPORT_ENTRY(0x6eb6b96, public_6eb6b96)
        ASM_EXPORT_ENTRY(0x6eb6b9c, public_6eb6b9c)
        ASM_EXPORT_ENTRY(0x6eb6ba2, public_6eb6ba2)
        ASM_EXPORT_ENTRY(0x6eb6bab, public_6eb6bab)
        ASM_EXPORT_ENTRY(0x6eb6bb4, public_6eb6bb4)
        ASM_EXPORT_ENTRY(0x6eb6bbd, public_6eb6bbd)
        ASM_EXPORT_ENTRY(0x6eb6bc3, public_6eb6bc3)
        ASM_EXPORT_ENTRY(0x6eb6bc9, public_6eb6bc9)
        ASM_EXPORT_ENTRY(0x6eb6bd2, public_6eb6bd2)
        ASM_EXPORT_ENTRY(0x6eb6bdb, public_6eb6bdb)
        ASM_EXPORT_ENTRY(0x6eb6be4, public_6eb6be4)
        ASM_EXPORT_ENTRY_LAST(0x6eb6bed, public_6eb6bed)
    }
}

#undef public_6eb6b90
#undef public_6eb6b96
#undef public_6eb6b9c
#undef public_6eb6ba2
#undef public_6eb6bab
#undef public_6eb6bb4
#undef public_6eb6bbd
#undef public_6eb6bc3
#undef public_6eb6bc9
#undef public_6eb6bd2
#undef public_6eb6bdb
#undef public_6eb6be4
#undef public_6eb6bed
#undef public_6eb6bf3

#pragma init_seg(compiler)
extern "C" void const* const public_6eb6b90 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6b90);
extern "C" void const* const public_6eb6b96 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6b96);
extern "C" void const* const public_6eb6b9c = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6b9c);
extern "C" void const* const public_6eb6ba2 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6ba2);
extern "C" void const* const public_6eb6bab = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bab);
extern "C" void const* const public_6eb6bb4 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bb4);
extern "C" void const* const public_6eb6bbd = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bbd);
extern "C" void const* const public_6eb6bc3 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bc3);
extern "C" void const* const public_6eb6bc9 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bc9);
extern "C" void const* const public_6eb6bd2 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bd2);
extern "C" void const* const public_6eb6bdb = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bdb);
extern "C" void const* const public_6eb6be4 = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6be4);
extern "C" void const* const public_6eb6bed = __AsmFindLabelExport(&internal_6eb6b80, 0x6eb6bed);
