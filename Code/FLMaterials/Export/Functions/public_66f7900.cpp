#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f7900);

#define public_66f7920 _public_66f7920
#define public_66f7933 _public_66f7933
#define public_66f7938 _public_66f7938
#define public_66f793d _public_66f793d
#define public_66f7942 _public_66f7942
#define public_66f7945 _public_66f7945
#define public_66f794c _public_66f794c

PROC_DECLARE(0x66f7900, internal_66f7900, public_66f7900);
extern "C" NAKED register_t __cdecl internal_66f7900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov edx, edi
        shr edx, 8
        xor eax, eax
        and edx, 0xF
        jle public_66f794c
        push esi
        mov ecx, 0x10
        mov esi, edx
        lea esp, ss:[esp]
        public_66f7920 : nop
        mov edx, edi
        shr edx, cl
        and edx, 3
        cmp edx, 3
        ja public_66f7945
/*FIXUP jmp dword ptr ds : [edx*4+public_66f7950] @0x66f792c*/
  JMPTB cmp edx, 0
  JMPTB je public_66f7938
  JMPTB cmp edx, 1
  JMPTB je public_66f793d
  JMPTB cmp edx, 2
  JMPTB je public_66f7942
  JMPTB cmp edx, 3
  JMPTB je public_66f7933
  JMPTB int 3
        public_66f7933 : nop
        add eax, 4
        jmp public_66f7945
        public_66f7938 : nop
        add eax, 8
        jmp public_66f7945
        public_66f793d : nop
        add eax, 0xC
        jmp public_66f7945
        public_66f7942 : nop
        add eax, 0x10
        public_66f7945 : nop
        add ecx, 2
        dec esi
        jne public_66f7920
        pop esi
        public_66f794c : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x66f7900)
        ASM_EXPORT_ENTRY_FIRST(0x66f7933, public_66f7933)
        ASM_EXPORT_ENTRY(0x66f7938, public_66f7938)
        ASM_EXPORT_ENTRY(0x66f793d, public_66f793d)
        ASM_EXPORT_ENTRY_LAST(0x66f7942, public_66f7942)
    }
}

#undef public_66f7920
#undef public_66f7933
#undef public_66f7938
#undef public_66f793d
#undef public_66f7942
#undef public_66f7945
#undef public_66f794c

#pragma init_seg(compiler)
extern "C" void const* const public_66f7933 = __AsmFindLabelExport(&internal_66f7900, 0x66f7933);
extern "C" void const* const public_66f7938 = __AsmFindLabelExport(&internal_66f7900, 0x66f7938);
extern "C" void const* const public_66f793d = __AsmFindLabelExport(&internal_66f7900, 0x66f793d);
extern "C" void const* const public_66f7942 = __AsmFindLabelExport(&internal_66f7900, 0x66f7942);
