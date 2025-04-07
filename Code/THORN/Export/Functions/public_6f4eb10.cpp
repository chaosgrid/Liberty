#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4eb10);

#define public_6f4eb25 _public_6f4eb25
#define public_6f4eb2c _public_6f4eb2c
#define public_6f4eb33 _public_6f4eb33
#define public_6f4eb3a _public_6f4eb3a

PROC_DECLARE(0x6f4eb10, internal_6f4eb10, public_6f4eb10);
extern "C" NAKED register_t __cdecl internal_6f4eb10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        add eax, 7
        cmp eax, 7
        ja public_6f4eb3a
/*FIXUP jmp dword ptr ds : [eax*4+public_6f4eb40] @0x6f4eb1e*/
  JMPTB cmp eax, 0
  JMPTB je public_6f4eb33
  JMPTB cmp eax, 1
  JMPTB je public_6f4eb3a
  JMPTB cmp eax, 2
  JMPTB je public_6f4eb3a
  JMPTB cmp eax, 3
  JMPTB je public_6f4eb25
  JMPTB cmp eax, 4
  JMPTB je public_6f4eb2c
  JMPTB cmp eax, 5
  JMPTB je public_6f4eb25
  JMPTB cmp eax, 6
  JMPTB je public_6f4eb3a
  JMPTB cmp eax, 7
  JMPTB je public_6f4eb25
  JMPTB int 3
        public_6f4eb25 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+4]
        ret 
        public_6f4eb2c : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        ret 
        public_6f4eb33 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        ret 
        public_6f4eb3a : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6f4eb10)
        ASM_EXPORT_ENTRY_FIRST(0x6f4eb25, public_6f4eb25)
        ASM_EXPORT_ENTRY(0x6f4eb2c, public_6f4eb2c)
        ASM_EXPORT_ENTRY(0x6f4eb33, public_6f4eb33)
        ASM_EXPORT_ENTRY_LAST(0x6f4eb3a, public_6f4eb3a)
    }
}

#undef public_6f4eb25
#undef public_6f4eb2c
#undef public_6f4eb33
#undef public_6f4eb3a

#pragma init_seg(compiler)
extern "C" void const* const public_6f4eb25 = __AsmFindLabelExport(&internal_6f4eb10, 0x6f4eb25);
extern "C" void const* const public_6f4eb2c = __AsmFindLabelExport(&internal_6f4eb10, 0x6f4eb2c);
extern "C" void const* const public_6f4eb33 = __AsmFindLabelExport(&internal_6f4eb10, 0x6f4eb33);
extern "C" void const* const public_6f4eb3a = __AsmFindLabelExport(&internal_6f4eb10, 0x6f4eb3a);
