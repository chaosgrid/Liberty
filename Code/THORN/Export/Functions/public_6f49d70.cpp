#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);

#define public_6f49da8 _public_6f49da8
#define public_6f49db7 _public_6f49db7
#define public_6f49dc6 _public_6f49dc6
#define public_6f49dd5 _public_6f49dd5
#define public_6f49de2 _public_6f49de2
#define public_6f49df0 _public_6f49df0

PROC_DECLARE(0x6f49d70, internal_6f49d70, public_6f49d70);
extern "C" NAKED register_t __cdecl internal_6f49d70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+4]
        je public_6f49df0
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        add eax, 0xFFFFFFFE
        cmp eax, 7
        ja public_6f49df0
/*FIXUP jmp dword ptr ds : [eax*4+public_6f49df8] @0x6f49da1*/
  JMPTB cmp eax, 0
  JMPTB je public_6f49da8
  JMPTB cmp eax, 1
  JMPTB je public_6f49db7
  JMPTB cmp eax, 2
  JMPTB je public_6f49db7
  JMPTB cmp eax, 3
  JMPTB je public_6f49df0
  JMPTB cmp eax, 4
  JMPTB je public_6f49dc6
  JMPTB cmp eax, 5
  JMPTB je public_6f49df0
  JMPTB cmp eax, 6
  JMPTB je public_6f49df0
  JMPTB cmp eax, 7
  JMPTB je public_6f49dd5
  JMPTB int 3
        public_6f49da8 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xD4]
        jmp public_6f49de2
        public_6f49db7 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xE8]
        jmp public_6f49de2
        public_6f49dc6 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xEC]
        jmp public_6f49de2
        public_6f49dd5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x114]
        public_6f49de2 : nop
        test eax, eax
        je public_6f49df0
        mov edx, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        public_6f49df0 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f49d70)
        ASM_EXPORT_ENTRY_FIRST(0x6f49da8, public_6f49da8)
        ASM_EXPORT_ENTRY(0x6f49db7, public_6f49db7)
        ASM_EXPORT_ENTRY(0x6f49dc6, public_6f49dc6)
        ASM_EXPORT_ENTRY(0x6f49dd5, public_6f49dd5)
        ASM_EXPORT_ENTRY_LAST(0x6f49df0, public_6f49df0)
    }
}

#undef public_6f49da8
#undef public_6f49db7
#undef public_6f49dc6
#undef public_6f49dd5
#undef public_6f49de2
#undef public_6f49df0

#pragma init_seg(compiler)
extern "C" void const* const public_6f49da8 = __AsmFindLabelExport(&internal_6f49d70, 0x6f49da8);
extern "C" void const* const public_6f49db7 = __AsmFindLabelExport(&internal_6f49d70, 0x6f49db7);
extern "C" void const* const public_6f49dc6 = __AsmFindLabelExport(&internal_6f49d70, 0x6f49dc6);
extern "C" void const* const public_6f49dd5 = __AsmFindLabelExport(&internal_6f49d70, 0x6f49dd5);
extern "C" void const* const public_6f49df0 = __AsmFindLabelExport(&internal_6f49d70, 0x6f49df0);
