#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806960);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6807020);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);

#define public_6807647 _public_6807647
#define public_680766b _public_680766b
#define public_680768f _public_680768f
#define public_68076b3 _public_68076b3
#define public_68076d3 _public_68076d3
#define public_68076e6 _public_68076e6

PROC_DECLARE(0x6807630, internal_6807630, public_6807630);
extern "C" NAKED register_t __cdecl internal_6807630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        cmp eax, 4
        ja public_68076e6
/*FIXUP jmp dword ptr ds : [eax*4+public_68076f8] @0x6807640*/
  JMPTB cmp eax, 0
  JMPTB je public_680766b
  JMPTB cmp eax, 1
  JMPTB je public_6807647
  JMPTB cmp eax, 2
  JMPTB je public_680768f
  JMPTB cmp eax, 3
  JMPTB je public_68076b3
  JMPTB cmp eax, 4
  JMPTB je public_68076d3
  JMPTB int 3
        public_6807647 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+8]
        push 1
        push eax
        push 0xD
        push ecx
        call public_6806ed0
        add esp, 0x10
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_680766b : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        push 1
        push edx
        push 0xF
        push eax
        call public_6806ed0
        add esp, 0x10
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_680768f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+8]
        push 0
        push ecx
        push 0x12
        push edx
        call public_6806ed0
        add esp, 0x10
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_68076b3 : nop
        mov eax, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
        push 0x10
        push eax
        call public_6806960
        add esp, 0xC
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_68076d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+8]
        push 1
        push ecx
        push edx
        call public_6807020
        add esp, 0xC
        public_68076e6 : nop
        mov dword ptr ds : [esi], 4
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807630)
        ASM_EXPORT_ENTRY_FIRST(0x6807647, public_6807647)
        ASM_EXPORT_ENTRY(0x680766b, public_680766b)
        ASM_EXPORT_ENTRY(0x680768f, public_680768f)
        ASM_EXPORT_ENTRY(0x68076b3, public_68076b3)
        ASM_EXPORT_ENTRY_LAST(0x68076d3, public_68076d3)
    }
}

#undef public_6807647
#undef public_680766b
#undef public_680768f
#undef public_68076b3
#undef public_68076d3
#undef public_68076e6

#pragma init_seg(compiler)
extern "C" void const* const public_6807647 = __AsmFindLabelExport(&internal_6807630, 0x6807647);
extern "C" void const* const public_680766b = __AsmFindLabelExport(&internal_6807630, 0x680766b);
extern "C" void const* const public_680768f = __AsmFindLabelExport(&internal_6807630, 0x680768f);
extern "C" void const* const public_68076b3 = __AsmFindLabelExport(&internal_6807630, 0x68076b3);
extern "C" void const* const public_68076d3 = __AsmFindLabelExport(&internal_6807630, 0x68076d3);
