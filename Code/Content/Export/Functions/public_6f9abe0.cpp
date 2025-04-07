#include "Content-PCH.h"


#define public_6f9abfa _public_6f9abfa
#define public_6f9abff _public_6f9abff
#define public_6f9ac05 _public_6f9ac05
#define public_6f9ac0b _public_6f9ac0b
#define public_6f9ac11 _public_6f9ac11
#define public_6f9ac1c _public_6f9ac1c
#define public_6f9ac31 _public_6f9ac31
#define public_6f9ac33 _public_6f9ac33

PROC_DECLARE(0x6f9abe0, internal_6f9abe0, public_6f9abe0);
extern "C" NAKED register_t __cdecl internal_6f9abe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        lea edx, ds:[eax-1]
        cmp edx, 0x17
        ja public_6f9ac1c
/*FIXUP movzx eax, byte ptr ds : [edx+public_6f9ac50] @0x6f9abec*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f9ac38] @0x6f9abf3*/
  JMPTB cmp edx, 0
  JMPTB mov eax, 0
  JMPTB je public_6f9abfa
  JMPTB cmp edx, 1
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 2
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 3
  JMPTB mov eax, 1
  JMPTB je public_6f9abff
  JMPTB cmp edx, 4
  JMPTB mov eax, 2
  JMPTB je public_6f9ac05
  JMPTB cmp edx, 5
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 6
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 7
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 8
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 9
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0xA
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0xB
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0xC
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0xD
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0xE
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0xF
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0x10
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0x11
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0x12
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0x13
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0x14
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0x15
  JMPTB mov eax, 3
  JMPTB je public_6f9ac0b
  JMPTB cmp edx, 0x16
  JMPTB mov eax, 5
  JMPTB je public_6f9ac1c
  JMPTB cmp edx, 0x17
  JMPTB mov eax, 4
  JMPTB je public_6f9ac11
  JMPTB int 3
        public_6f9abfa : nop
        xor al, al
        ret 4
        public_6f9abff : nop
        mov al, byte ptr ds : [ecx+0xD]
        ret 4
        public_6f9ac05 : nop
        mov al, byte ptr ds : [ecx+0xF]
        ret 4
        public_6f9ac0b : nop
        mov al, byte ptr ds : [ecx+0x12]
        ret 4
        public_6f9ac11 : nop
        mov al, byte ptr ds : [ecx+0x12]
        test al, al
        sete al
        ret 4
        public_6f9ac1c : nop
        xor al, al
        cmp edx, 0xC
        ja public_6f9ac33
/*FIXUP movzx ecx, byte ptr ds : [edx+public_6f9ac70] @0x6f9ac23*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f9ac68] @0x6f9ac2a*/
  JMPTB cmp edx, 0
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB cmp edx, 1
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB cmp edx, 2
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB cmp edx, 3
  JMPTB mov ecx, 1
  JMPTB je public_6f9ac33
  JMPTB cmp edx, 4
  JMPTB mov ecx, 1
  JMPTB je public_6f9ac33
  JMPTB cmp edx, 5
  JMPTB mov ecx, 1
  JMPTB je public_6f9ac33
  JMPTB cmp edx, 6
  JMPTB mov ecx, 1
  JMPTB je public_6f9ac33
  JMPTB cmp edx, 7
  JMPTB mov ecx, 1
  JMPTB je public_6f9ac33
  JMPTB cmp edx, 8
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB cmp edx, 9
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB cmp edx, 0xA
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB cmp edx, 0xB
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB cmp edx, 0xC
  JMPTB mov ecx, 0
  JMPTB je public_6f9ac31
  JMPTB int 3
        public_6f9ac31 : nop
        mov al, 1
        public_6f9ac33 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f9abe0)
        ASM_EXPORT_ENTRY_FIRST(0x6f9abfa, public_6f9abfa)
        ASM_EXPORT_ENTRY(0x6f9abff, public_6f9abff)
        ASM_EXPORT_ENTRY(0x6f9ac05, public_6f9ac05)
        ASM_EXPORT_ENTRY(0x6f9ac0b, public_6f9ac0b)
        ASM_EXPORT_ENTRY(0x6f9ac11, public_6f9ac11)
        ASM_EXPORT_ENTRY(0x6f9ac1c, public_6f9ac1c)
        ASM_EXPORT_ENTRY(0x6f9ac31, public_6f9ac31)
        ASM_EXPORT_ENTRY_LAST(0x6f9ac33, public_6f9ac33)
    }
}

#undef public_6f9abfa
#undef public_6f9abff
#undef public_6f9ac05
#undef public_6f9ac0b
#undef public_6f9ac11
#undef public_6f9ac1c
#undef public_6f9ac31
#undef public_6f9ac33

#pragma init_seg(compiler)
extern "C" void const* const public_6f9abfa = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9abfa);
extern "C" void const* const public_6f9abff = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9abff);
extern "C" void const* const public_6f9ac05 = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9ac05);
extern "C" void const* const public_6f9ac0b = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9ac0b);
extern "C" void const* const public_6f9ac11 = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9ac11);
extern "C" void const* const public_6f9ac1c = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9ac1c);
extern "C" void const* const public_6f9ac31 = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9ac31);
extern "C" void const* const public_6f9ac33 = __AsmFindLabelExport(&internal_6f9abe0, 0x6f9ac33);
