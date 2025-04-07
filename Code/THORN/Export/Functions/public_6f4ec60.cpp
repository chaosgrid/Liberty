#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ec40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ec60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ece0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ed30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ed70);

#define public_6f4ec75 _public_6f4ec75
#define public_6f4ec84 _public_6f4ec84
#define public_6f4ec93 _public_6f4ec93
#define public_6f4eca2 _public_6f4eca2
#define public_6f4ecae _public_6f4ecae

PROC_DECLARE(0x6f4ec60, internal_6f4ec60, public_6f4ec60);
extern "C" NAKED register_t __cdecl internal_6f4ec60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        add eax, 9
        cmp eax, 9
        ja public_6f4ecae
/*FIXUP jmp dword ptr ds : [eax*4+public_6f4ecb4] @0x6f4ec6e*/
  JMPTB cmp eax, 0
  JMPTB je public_6f4eca2
  JMPTB cmp eax, 1
  JMPTB je public_6f4ec93
  JMPTB cmp eax, 2
  JMPTB je public_6f4ec93
  JMPTB cmp eax, 3
  JMPTB je public_6f4ecae
  JMPTB cmp eax, 4
  JMPTB je public_6f4ecae
  JMPTB cmp eax, 5
  JMPTB je public_6f4eca2
  JMPTB cmp eax, 6
  JMPTB je public_6f4ec84
  JMPTB cmp eax, 7
  JMPTB je public_6f4ec75
  JMPTB cmp eax, 8
  JMPTB je public_6f4ecae
  JMPTB cmp eax, 9
  JMPTB je public_6f4ec75
  JMPTB int 3
        public_6f4ec75 : nop
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call public_6f4ec40
        add esp, 4
        xor eax, eax
        ret 
        public_6f4ec84 : nop
        mov ecx, dword ptr ds : [ecx+8]
        push ecx
        call public_6f4ed70
        add esp, 4
        xor eax, eax
        ret 
        public_6f4ec93 : nop
        mov edx, dword ptr ds : [ecx+8]
        push edx
        call public_6f4ed30
        add esp, 4
        xor eax, eax
        ret 
        public_6f4eca2 : nop
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call public_6f4ece0
        add esp, 4
        public_6f4ecae : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4ec60)
        ASM_EXPORT_ENTRY_FIRST(0x6f4ec75, public_6f4ec75)
        ASM_EXPORT_ENTRY(0x6f4ec84, public_6f4ec84)
        ASM_EXPORT_ENTRY(0x6f4ec93, public_6f4ec93)
        ASM_EXPORT_ENTRY(0x6f4eca2, public_6f4eca2)
        ASM_EXPORT_ENTRY_LAST(0x6f4ecae, public_6f4ecae)
    }
}

#undef public_6f4ec75
#undef public_6f4ec84
#undef public_6f4ec93
#undef public_6f4eca2
#undef public_6f4ecae

#pragma init_seg(compiler)
extern "C" void const* const public_6f4ec75 = __AsmFindLabelExport(&internal_6f4ec60, 0x6f4ec75);
extern "C" void const* const public_6f4ec84 = __AsmFindLabelExport(&internal_6f4ec60, 0x6f4ec84);
extern "C" void const* const public_6f4ec93 = __AsmFindLabelExport(&internal_6f4ec60, 0x6f4ec93);
extern "C" void const* const public_6f4eca2 = __AsmFindLabelExport(&internal_6f4ec60, 0x6f4eca2);
extern "C" void const* const public_6f4ecae = __AsmFindLabelExport(&internal_6f4ec60, 0x6f4ecae);
