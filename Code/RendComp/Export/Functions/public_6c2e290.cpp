#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e290);

#define public_6c2e2b0 _public_6c2e2b0
#define public_6c2e2c3 _public_6c2e2c3
#define public_6c2e2c8 _public_6c2e2c8
#define public_6c2e2cd _public_6c2e2cd
#define public_6c2e2d2 _public_6c2e2d2
#define public_6c2e2d5 _public_6c2e2d5
#define public_6c2e2dc _public_6c2e2dc

PROC_DECLARE(0x6c2e290, internal_6c2e290, public_6c2e290);
extern "C" NAKED register_t __cdecl internal_6c2e290()
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
        jle public_6c2e2dc
        push esi
        mov ecx, 0x10
        mov esi, edx
        lea esp, ss:[esp]
        public_6c2e2b0 : nop
        mov edx, edi
        shr edx, cl
        and edx, 3
        cmp edx, 3
        ja public_6c2e2d5
/*FIXUP jmp dword ptr ds : [edx*4+public_6c2e2e0] @0x6c2e2bc*/
  JMPTB cmp edx, 0
  JMPTB je public_6c2e2c8
  JMPTB cmp edx, 1
  JMPTB je public_6c2e2cd
  JMPTB cmp edx, 2
  JMPTB je public_6c2e2d2
  JMPTB cmp edx, 3
  JMPTB je public_6c2e2c3
  JMPTB int 3
        public_6c2e2c3 : nop
        add eax, 4
        jmp public_6c2e2d5
        public_6c2e2c8 : nop
        add eax, 8
        jmp public_6c2e2d5
        public_6c2e2cd : nop
        add eax, 0xC
        jmp public_6c2e2d5
        public_6c2e2d2 : nop
        add eax, 0x10
        public_6c2e2d5 : nop
        add ecx, 2
        dec esi
        jne public_6c2e2b0
        pop esi
        public_6c2e2dc : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6c2e290)
        ASM_EXPORT_ENTRY_FIRST(0x6c2e2c3, public_6c2e2c3)
        ASM_EXPORT_ENTRY(0x6c2e2c8, public_6c2e2c8)
        ASM_EXPORT_ENTRY(0x6c2e2cd, public_6c2e2cd)
        ASM_EXPORT_ENTRY_LAST(0x6c2e2d2, public_6c2e2d2)
    }
}

#undef public_6c2e2b0
#undef public_6c2e2c3
#undef public_6c2e2c8
#undef public_6c2e2cd
#undef public_6c2e2d2
#undef public_6c2e2d5
#undef public_6c2e2dc

#pragma init_seg(compiler)
extern "C" void const* const public_6c2e2c3 = __AsmFindLabelExport(&internal_6c2e290, 0x6c2e2c3);
extern "C" void const* const public_6c2e2c8 = __AsmFindLabelExport(&internal_6c2e290, 0x6c2e2c8);
extern "C" void const* const public_6c2e2cd = __AsmFindLabelExport(&internal_6c2e290, 0x6c2e2cd);
extern "C" void const* const public_6c2e2d2 = __AsmFindLabelExport(&internal_6c2e290, 0x6c2e2d2);
