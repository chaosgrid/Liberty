#include "Content-PCH.h"


#define public_6f9ba6a _public_6f9ba6a
#define public_6f9ba70 _public_6f9ba70
#define public_6f9ba76 _public_6f9ba76
#define public_6f9ba84 _public_6f9ba84
#define public_6f9ba89 _public_6f9ba89
#define public_6f9ba8f _public_6f9ba8f
#define public_6f9baa4 _public_6f9baa4
#define public_6f9baa6 _public_6f9baa6

PROC_DECLARE(0x6f9ba50, internal_6f9ba50, public_6f9ba50);
extern "C" NAKED register_t __cdecl internal_6f9ba50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        lea edx, ds:[eax-1]
        cmp edx, 0x17
        ja public_6f9ba8f
/*FIXUP movzx eax, byte ptr ds : [edx+public_6f9bac4] @0x6f9ba5c*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f9baac] @0x6f9ba63*/
  JMPTB cmp edx, 0
  JMPTB mov eax, 0
  JMPTB je public_6f9ba6a
  JMPTB cmp edx, 1
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 2
  JMPTB mov eax, 0
  JMPTB je public_6f9ba6a
  JMPTB cmp edx, 3
  JMPTB mov eax, 1
  JMPTB je public_6f9ba84
  JMPTB cmp edx, 4
  JMPTB mov eax, 1
  JMPTB je public_6f9ba84
  JMPTB cmp edx, 5
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 6
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 7
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 8
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 9
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0xA
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0xB
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0xC
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0xD
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0xE
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0xF
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0x10
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0x11
  JMPTB mov eax, 5
  JMPTB je public_6f9ba8f
  JMPTB cmp edx, 0x12
  JMPTB mov eax, 0
  JMPTB je public_6f9ba6a
  JMPTB cmp edx, 0x13
  JMPTB mov eax, 2
  JMPTB je public_6f9ba70
  JMPTB cmp edx, 0x14
  JMPTB mov eax, 1
  JMPTB je public_6f9ba84
  JMPTB cmp edx, 0x15
  JMPTB mov eax, 3
  JMPTB je public_6f9ba76
  JMPTB cmp edx, 0x16
  JMPTB mov eax, 4
  JMPTB je public_6f9ba89
  JMPTB cmp edx, 0x17
  JMPTB mov eax, 1
  JMPTB je public_6f9ba84
  JMPTB int 3
        public_6f9ba6a : nop
        mov al, byte ptr ds : [ecx+0x13]
        ret 4
        public_6f9ba70 : nop
        mov al, byte ptr ds : [ecx+0x14]
        ret 4
        public_6f9ba76 : nop
        mov al, byte ptr ds : [ecx+0x1B]
        test al, al
        je public_6f9ba84
        mov al, byte ptr ds : [ecx+0x1C]
        test al, al
        jne public_6f9baa4
        public_6f9ba84 : nop
        xor al, al
        ret 4
        public_6f9ba89 : nop
        mov al, byte ptr ds : [ecx+0x1B]
        ret 4
        public_6f9ba8f : nop
        xor al, al
        cmp edx, 0xC
        ja public_6f9baa6
/*FIXUP movzx ecx, byte ptr ds : [edx+public_6f9bae4] @0x6f9ba96*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f9badc] @0x6f9ba9d*/
  JMPTB cmp edx, 0
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB cmp edx, 1
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB cmp edx, 2
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB cmp edx, 3
  JMPTB mov ecx, 1
  JMPTB je public_6f9baa6
  JMPTB cmp edx, 4
  JMPTB mov ecx, 1
  JMPTB je public_6f9baa6
  JMPTB cmp edx, 5
  JMPTB mov ecx, 1
  JMPTB je public_6f9baa6
  JMPTB cmp edx, 6
  JMPTB mov ecx, 1
  JMPTB je public_6f9baa6
  JMPTB cmp edx, 7
  JMPTB mov ecx, 1
  JMPTB je public_6f9baa6
  JMPTB cmp edx, 8
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB cmp edx, 9
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB cmp edx, 0xA
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB cmp edx, 0xB
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB cmp edx, 0xC
  JMPTB mov ecx, 0
  JMPTB je public_6f9baa4
  JMPTB int 3
        public_6f9baa4 : nop
        mov al, 1
        public_6f9baa6 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f9ba50)
        ASM_EXPORT_ENTRY_FIRST(0x6f9ba6a, public_6f9ba6a)
        ASM_EXPORT_ENTRY(0x6f9ba70, public_6f9ba70)
        ASM_EXPORT_ENTRY(0x6f9ba76, public_6f9ba76)
        ASM_EXPORT_ENTRY(0x6f9ba84, public_6f9ba84)
        ASM_EXPORT_ENTRY(0x6f9ba89, public_6f9ba89)
        ASM_EXPORT_ENTRY(0x6f9ba8f, public_6f9ba8f)
        ASM_EXPORT_ENTRY(0x6f9baa4, public_6f9baa4)
        ASM_EXPORT_ENTRY_LAST(0x6f9baa6, public_6f9baa6)
    }
}

#undef public_6f9ba6a
#undef public_6f9ba70
#undef public_6f9ba76
#undef public_6f9ba84
#undef public_6f9ba89
#undef public_6f9ba8f
#undef public_6f9baa4
#undef public_6f9baa6

#pragma init_seg(compiler)
extern "C" void const* const public_6f9ba6a = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9ba6a);
extern "C" void const* const public_6f9ba70 = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9ba70);
extern "C" void const* const public_6f9ba76 = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9ba76);
extern "C" void const* const public_6f9ba84 = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9ba84);
extern "C" void const* const public_6f9ba89 = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9ba89);
extern "C" void const* const public_6f9ba8f = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9ba8f);
extern "C" void const* const public_6f9baa4 = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9baa4);
extern "C" void const* const public_6f9baa6 = __AsmFindLabelExport(&internal_6f9ba50, 0x6f9baa6);
