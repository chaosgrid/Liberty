#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3310);

#define public_6eb3330 _public_6eb3330
#define public_6eb3343 _public_6eb3343
#define public_6eb3348 _public_6eb3348
#define public_6eb334d _public_6eb334d
#define public_6eb3352 _public_6eb3352
#define public_6eb3355 _public_6eb3355
#define public_6eb335c _public_6eb335c

PROC_DECLARE(0x6eb3310, internal_6eb3310, public_6eb3310);
extern "C" NAKED register_t __cdecl internal_6eb3310()
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
        jle public_6eb335c
        push esi
        mov ecx, 0x10
        mov esi, edx
        lea esp, ss:[esp]
        public_6eb3330 : nop
        mov edx, edi
        shr edx, cl
        and edx, 3
        cmp edx, 3
        ja public_6eb3355
/*FIXUP jmp dword ptr ds : [edx*4+public_6eb3360] @0x6eb333c*/
  JMPTB cmp edx, 0
  JMPTB je public_6eb3348
  JMPTB cmp edx, 1
  JMPTB je public_6eb334d
  JMPTB cmp edx, 2
  JMPTB je public_6eb3352
  JMPTB cmp edx, 3
  JMPTB je public_6eb3343
  JMPTB int 3
        public_6eb3343 : nop
        add eax, 4
        jmp public_6eb3355
        public_6eb3348 : nop
        add eax, 8
        jmp public_6eb3355
        public_6eb334d : nop
        add eax, 0xC
        jmp public_6eb3355
        public_6eb3352 : nop
        add eax, 0x10
        public_6eb3355 : nop
        add ecx, 2
        dec esi
        jne public_6eb3330
        pop esi
        public_6eb335c : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6eb3310)
        ASM_EXPORT_ENTRY_FIRST(0x6eb3343, public_6eb3343)
        ASM_EXPORT_ENTRY(0x6eb3348, public_6eb3348)
        ASM_EXPORT_ENTRY(0x6eb334d, public_6eb334d)
        ASM_EXPORT_ENTRY_LAST(0x6eb3352, public_6eb3352)
    }
}

#undef public_6eb3330
#undef public_6eb3343
#undef public_6eb3348
#undef public_6eb334d
#undef public_6eb3352
#undef public_6eb3355
#undef public_6eb335c

#pragma init_seg(compiler)
extern "C" void const* const public_6eb3343 = __AsmFindLabelExport(&internal_6eb3310, 0x6eb3343);
extern "C" void const* const public_6eb3348 = __AsmFindLabelExport(&internal_6eb3310, 0x6eb3348);
extern "C" void const* const public_6eb334d = __AsmFindLabelExport(&internal_6eb3310, 0x6eb334d);
extern "C" void const* const public_6eb3352 = __AsmFindLabelExport(&internal_6eb3310, 0x6eb3352);
