#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9d20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9f10);
CLANG_FORWARD_PROC_SYMBOL(public_6eca370);
CLANG_FORWARD_PROC_SYMBOL(public_6eca3a0);

#define public_6ec9d36 _public_6ec9d36
#define public_6ec9d4a _public_6ec9d4a
#define public_6ec9d54 _public_6ec9d54
#define public_6ec9d5e _public_6ec9d5e
#define public_6ec9d66 _public_6ec9d66
#define public_6ec9d74 _public_6ec9d74

PROC_DECLARE(0x6ec9d20, internal_6ec9d20, public_6ec9d20);
extern "C" NAKED register_t __cdecl internal_6ec9d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x74]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_6ec9d36
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xC]
        public_6ec9d36 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        dec ecx
        cmp ecx, 6
        ja public_6ec9d66
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ec9d7c] @0x6ec9d43*/
  JMPTB cmp ecx, 0
  JMPTB je public_6ec9d4a
  JMPTB cmp ecx, 1
  JMPTB je public_6ec9d54
  JMPTB cmp ecx, 2
  JMPTB je public_6ec9d54
  JMPTB cmp ecx, 3
  JMPTB je public_6ec9d54
  JMPTB cmp ecx, 4
  JMPTB je public_6ec9d54
  JMPTB cmp ecx, 5
  JMPTB je public_6ec9d5e
  JMPTB cmp ecx, 6
  JMPTB je public_6ec9d5e
  JMPTB int 3
        public_6ec9d4a : nop
        push eax
        mov ecx, esi
        call public_6eca3a0
        jmp public_6ec9d66
        public_6ec9d54 : nop
        push eax
        mov ecx, esi
        call public_6ec9f10
        jmp public_6ec9d66
        public_6ec9d5e : nop
        push eax
        mov ecx, esi
        call public_6eca370
        public_6ec9d66 : nop
        mov esi, dword ptr ds : [esi+0x74]
        test esi, esi
        je public_6ec9d74
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        public_6ec9d74 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ec9d20)
        ASM_EXPORT_ENTRY_FIRST(0x6ec9d4a, public_6ec9d4a)
        ASM_EXPORT_ENTRY(0x6ec9d54, public_6ec9d54)
        ASM_EXPORT_ENTRY_LAST(0x6ec9d5e, public_6ec9d5e)
    }
}

#undef public_6ec9d36
#undef public_6ec9d4a
#undef public_6ec9d54
#undef public_6ec9d5e
#undef public_6ec9d66
#undef public_6ec9d74

#pragma init_seg(compiler)
extern "C" void const* const public_6ec9d4a = __AsmFindLabelExport(&internal_6ec9d20, 0x6ec9d4a);
extern "C" void const* const public_6ec9d54 = __AsmFindLabelExport(&internal_6ec9d20, 0x6ec9d54);
extern "C" void const* const public_6ec9d5e = __AsmFindLabelExport(&internal_6ec9d20, 0x6ec9d5e);
