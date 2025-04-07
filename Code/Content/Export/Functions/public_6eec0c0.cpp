#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);

#define public_6eec0de _public_6eec0de
#define public_6eec0ef _public_6eec0ef
#define public_6eec100 _public_6eec100
#define public_6eec10f _public_6eec10f
#define public_6eec117 _public_6eec117

PROC_DECLARE(0x6eec0c0, internal_6eec0c0, public_6eec0c0);
extern "C" NAKED register_t __cdecl internal_6eec0c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x44
        xor eax, eax
        mov dword ptr ss : [esp], eax
        mov byte ptr ss : [esp+4], al
        mov eax, dword ptr ss : [esp+0x4C]
        dec eax
        cmp eax, 5
        ja public_6eec117
/*FIXUP jmp dword ptr ds : [eax*4+public_6eec130] @0x6eec0d7*/
  JMPTB cmp eax, 0
  JMPTB je public_6eec0de
  JMPTB cmp eax, 1
  JMPTB je public_6eec117
  JMPTB cmp eax, 2
  JMPTB je public_6eec0ef
  JMPTB cmp eax, 3
  JMPTB je public_6eec0ef
  JMPTB cmp eax, 4
  JMPTB je public_6eec0ef
  JMPTB cmp eax, 5
  JMPTB je public_6eec100
  JMPTB int 3
        public_6eec0de : nop
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
/*FIXUP push offset public_6fb62d0 @0x6eec0e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62d0
        lea edx, ss:[esp+8]
        push edx
        jmp public_6eec10f
        public_6eec0ef : nop
        mov eax, dword ptr ss : [esp+0x50]
        push eax
/*FIXUP push offset public_6fb62b4 @0x6eec0f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62b4
        lea ecx, ss:[esp+8]
        push ecx
        jmp public_6eec10f
        public_6eec100 : nop
        mov edx, dword ptr ss : [esp+0x50]
        push edx
/*FIXUP push offset public_6fb6298 @0x6eec105*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6298
        lea eax, ss:[esp+8]
        push eax
        public_6eec10f : nop
        call public_6eec2b0
        add esp, 0xC
        public_6eec117 : nop
        mov eax, dword ptr ss : [esp+0x48]
        push esi
        push edi
        mov ecx, 0x11
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6eec0c0)
        ASM_EXPORT_ENTRY_FIRST(0x6eec0de, public_6eec0de)
        ASM_EXPORT_ENTRY(0x6eec0ef, public_6eec0ef)
        ASM_EXPORT_ENTRY(0x6eec100, public_6eec100)
        ASM_EXPORT_ENTRY_LAST(0x6eec117, public_6eec117)
    }
}

#undef public_6eec0de
#undef public_6eec0ef
#undef public_6eec100
#undef public_6eec10f
#undef public_6eec117

#pragma init_seg(compiler)
extern "C" void const* const public_6eec0de = __AsmFindLabelExport(&internal_6eec0c0, 0x6eec0de);
extern "C" void const* const public_6eec0ef = __AsmFindLabelExport(&internal_6eec0c0, 0x6eec0ef);
extern "C" void const* const public_6eec100 = __AsmFindLabelExport(&internal_6eec0c0, 0x6eec100);
extern "C" void const* const public_6eec117 = __AsmFindLabelExport(&internal_6eec0c0, 0x6eec117);
