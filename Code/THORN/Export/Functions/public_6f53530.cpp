#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52860);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);

#define public_6f53547 _public_6f53547
#define public_6f5356b _public_6f5356b
#define public_6f5358f _public_6f5358f
#define public_6f535b3 _public_6f535b3
#define public_6f535d3 _public_6f535d3
#define public_6f535e6 _public_6f535e6

PROC_DECLARE(0x6f53530, internal_6f53530, public_6f53530);
extern "C" NAKED register_t __cdecl internal_6f53530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        cmp eax, 4
        ja public_6f535e6
/*FIXUP jmp dword ptr ds : [eax*4+public_6f535f8] @0x6f53540*/
  JMPTB cmp eax, 0
  JMPTB je public_6f5356b
  JMPTB cmp eax, 1
  JMPTB je public_6f53547
  JMPTB cmp eax, 2
  JMPTB je public_6f5358f
  JMPTB cmp eax, 3
  JMPTB je public_6f535b3
  JMPTB cmp eax, 4
  JMPTB je public_6f535d3
  JMPTB int 3
        public_6f53547 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+8]
        push 1
        push eax
        push 0xD
        push ecx
        call public_6f52dd0
        add esp, 0x10
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_6f5356b : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        push 1
        push edx
        push 0xF
        push eax
        call public_6f52dd0
        add esp, 0x10
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_6f5358f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+8]
        push 0
        push ecx
        push 0x12
        push edx
        call public_6f52dd0
        add esp, 0x10
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_6f535b3 : nop
        mov eax, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
        push 0x10
        push eax
        call public_6f52860
        add esp, 0xC
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_6f535d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+8]
        push 1
        push ecx
        push edx
        call public_6f52f20
        add esp, 0xC
        public_6f535e6 : nop
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53530)
        ASM_EXPORT_ENTRY_FIRST(0x6f53547, public_6f53547)
        ASM_EXPORT_ENTRY(0x6f5356b, public_6f5356b)
        ASM_EXPORT_ENTRY(0x6f5358f, public_6f5358f)
        ASM_EXPORT_ENTRY(0x6f535b3, public_6f535b3)
        ASM_EXPORT_ENTRY_LAST(0x6f535d3, public_6f535d3)
    }
}

#undef public_6f53547
#undef public_6f5356b
#undef public_6f5358f
#undef public_6f535b3
#undef public_6f535d3
#undef public_6f535e6

#pragma init_seg(compiler)
extern "C" void const* const public_6f53547 = __AsmFindLabelExport(&internal_6f53530, 0x6f53547);
extern "C" void const* const public_6f5356b = __AsmFindLabelExport(&internal_6f53530, 0x6f5356b);
extern "C" void const* const public_6f5358f = __AsmFindLabelExport(&internal_6f53530, 0x6f5358f);
extern "C" void const* const public_6f535b3 = __AsmFindLabelExport(&internal_6f53530, 0x6f535b3);
extern "C" void const* const public_6f535d3 = __AsmFindLabelExport(&internal_6f53530, 0x6f535d3);
