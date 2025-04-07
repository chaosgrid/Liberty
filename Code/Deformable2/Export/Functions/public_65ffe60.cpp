#include "Deformable2-PCH.h"


#define public_65ffe70 _public_65ffe70
#define public_65ffe76 _public_65ffe76
#define public_65ffe7c _public_65ffe7c
#define public_65ffe82 _public_65ffe82
#define public_65ffe88 _public_65ffe88
#define public_65ffe8e _public_65ffe8e
#define public_65ffe94 _public_65ffe94
#define public_65ffe9a _public_65ffe9a
#define public_65ffea3 _public_65ffea3
#define public_65ffeac _public_65ffeac
#define public_65ffeb5 _public_65ffeb5

PROC_DECLARE(0x65ffe60, internal_65ffe60, public_65ffe60);
extern "C" NAKED register_t __cdecl internal_65ffe60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 9
        ja public_65ffeb5
/*FIXUP jmp dword ptr ds : [eax*4+public_65ffebc] @0x65ffe69*/
  JMPTB cmp eax, 0
  JMPTB je public_65ffe70
  JMPTB cmp eax, 1
  JMPTB je public_65ffe76
  JMPTB cmp eax, 2
  JMPTB je public_65ffe7c
  JMPTB cmp eax, 3
  JMPTB je public_65ffe82
  JMPTB cmp eax, 4
  JMPTB je public_65ffe88
  JMPTB cmp eax, 5
  JMPTB je public_65ffe8e
  JMPTB cmp eax, 6
  JMPTB je public_65ffe94
  JMPTB cmp eax, 7
  JMPTB je public_65ffe9a
  JMPTB cmp eax, 8
  JMPTB je public_65ffea3
  JMPTB cmp eax, 9
  JMPTB je public_65ffeac
  JMPTB int 3
        public_65ffe70 : nop
        lea eax, ds:[ecx+0x30]
        ret 4
        public_65ffe76 : nop
        lea eax, ds:[ecx+0x20]
        ret 4
        public_65ffe7c : nop
        lea eax, ds:[ecx+0x50]
        ret 4
        public_65ffe82 : nop
        lea eax, ds:[ecx+0x40]
        ret 4
        public_65ffe88 : nop
        lea eax, ds:[ecx+0x60]
        ret 4
        public_65ffe8e : nop
        lea eax, ds:[ecx+0x2C]
        ret 4
        public_65ffe94 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        ret 4
        public_65ffe9a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x1C
        ret 4
        public_65ffea3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x20
        ret 4
        public_65ffeac : nop
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, 0x24
        ret 4
        public_65ffeb5 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x65ffe60)
        ASM_EXPORT_ENTRY_FIRST(0x65ffe70, public_65ffe70)
        ASM_EXPORT_ENTRY(0x65ffe76, public_65ffe76)
        ASM_EXPORT_ENTRY(0x65ffe7c, public_65ffe7c)
        ASM_EXPORT_ENTRY(0x65ffe82, public_65ffe82)
        ASM_EXPORT_ENTRY(0x65ffe88, public_65ffe88)
        ASM_EXPORT_ENTRY(0x65ffe8e, public_65ffe8e)
        ASM_EXPORT_ENTRY(0x65ffe94, public_65ffe94)
        ASM_EXPORT_ENTRY(0x65ffe9a, public_65ffe9a)
        ASM_EXPORT_ENTRY(0x65ffea3, public_65ffea3)
        ASM_EXPORT_ENTRY_LAST(0x65ffeac, public_65ffeac)
    }
}

#undef public_65ffe70
#undef public_65ffe76
#undef public_65ffe7c
#undef public_65ffe82
#undef public_65ffe88
#undef public_65ffe8e
#undef public_65ffe94
#undef public_65ffe9a
#undef public_65ffea3
#undef public_65ffeac
#undef public_65ffeb5

#pragma init_seg(compiler)
extern "C" void const* const public_65ffe70 = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe70);
extern "C" void const* const public_65ffe76 = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe76);
extern "C" void const* const public_65ffe7c = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe7c);
extern "C" void const* const public_65ffe82 = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe82);
extern "C" void const* const public_65ffe88 = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe88);
extern "C" void const* const public_65ffe8e = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe8e);
extern "C" void const* const public_65ffe94 = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe94);
extern "C" void const* const public_65ffe9a = __AsmFindLabelExport(&internal_65ffe60, 0x65ffe9a);
extern "C" void const* const public_65ffea3 = __AsmFindLabelExport(&internal_65ffe60, 0x65ffea3);
extern "C" void const* const public_65ffeac = __AsmFindLabelExport(&internal_65ffe60, 0x65ffeac);
