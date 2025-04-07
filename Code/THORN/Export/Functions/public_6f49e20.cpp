#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);

#define public_6f49e58 _public_6f49e58
#define public_6f49e67 _public_6f49e67
#define public_6f49e76 _public_6f49e76
#define public_6f49e85 _public_6f49e85
#define public_6f49e92 _public_6f49e92
#define public_6f49ea0 _public_6f49ea0

PROC_DECLARE(0x6f49e20, internal_6f49e20, public_6f49e20);
extern "C" NAKED register_t __cdecl internal_6f49e20()
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
        je public_6f49ea0
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        add eax, 0xFFFFFFFE
        cmp eax, 7
        ja public_6f49ea0
/*FIXUP jmp dword ptr ds : [eax*4+public_6f49ea8] @0x6f49e51*/
  JMPTB cmp eax, 0
  JMPTB je public_6f49e58
  JMPTB cmp eax, 1
  JMPTB je public_6f49e67
  JMPTB cmp eax, 2
  JMPTB je public_6f49e67
  JMPTB cmp eax, 3
  JMPTB je public_6f49ea0
  JMPTB cmp eax, 4
  JMPTB je public_6f49e76
  JMPTB cmp eax, 5
  JMPTB je public_6f49ea0
  JMPTB cmp eax, 6
  JMPTB je public_6f49ea0
  JMPTB cmp eax, 7
  JMPTB je public_6f49e85
  JMPTB int 3
        public_6f49e58 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xD4]
        jmp public_6f49e92
        public_6f49e67 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xE8]
        jmp public_6f49e92
        public_6f49e76 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xEC]
        jmp public_6f49e92
        public_6f49e85 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x114]
        public_6f49e92 : nop
        test eax, eax
        je public_6f49ea0
        mov edx, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6f49ea0 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f49e20)
        ASM_EXPORT_ENTRY_FIRST(0x6f49e58, public_6f49e58)
        ASM_EXPORT_ENTRY(0x6f49e67, public_6f49e67)
        ASM_EXPORT_ENTRY(0x6f49e76, public_6f49e76)
        ASM_EXPORT_ENTRY(0x6f49e85, public_6f49e85)
        ASM_EXPORT_ENTRY_LAST(0x6f49ea0, public_6f49ea0)
    }
}

#undef public_6f49e58
#undef public_6f49e67
#undef public_6f49e76
#undef public_6f49e85
#undef public_6f49e92
#undef public_6f49ea0

#pragma init_seg(compiler)
extern "C" void const* const public_6f49e58 = __AsmFindLabelExport(&internal_6f49e20, 0x6f49e58);
extern "C" void const* const public_6f49e67 = __AsmFindLabelExport(&internal_6f49e20, 0x6f49e67);
extern "C" void const* const public_6f49e76 = __AsmFindLabelExport(&internal_6f49e20, 0x6f49e76);
extern "C" void const* const public_6f49e85 = __AsmFindLabelExport(&internal_6f49e20, 0x6f49e85);
extern "C" void const* const public_6f49ea0 = __AsmFindLabelExport(&internal_6f49e20, 0x6f49ea0);
