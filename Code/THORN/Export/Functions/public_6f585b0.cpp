#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d430);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d450);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d470);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f585bb _public_6f585bb
#define public_6f585c9 _public_6f585c9
#define public_6f585d7 _public_6f585d7
#define public_6f585e2 _public_6f585e2
#define public_6f585ed _public_6f585ed
#define public_6f585f6 _public_6f585f6

PROC_DECLARE(0x6f585b0, internal_6f585b0, public_6f585b0);
/* CHUNK of public_6f28a60 */
extern "C" NAKED register_t __cdecl internal_6f585b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xDC]
        jmp public_6f2d430
        public_6f585bb : nop
        mov eax, dword ptr ss : [ebp-0xD0]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f585c9 : nop
        mov eax, dword ptr ss : [ebp-0xD0]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f585d7 : nop
        lea ecx, ss:[ebp-0xE0]
        jmp public_6f2d450
        public_6f585e2 : nop
        lea ecx, ss:[ebp-0x8C]
        jmp public_6f2d470
        public_6f585ed : nop
        lea ecx, ss:[ebp-0x80]
        jmp dword ptr ds : [public_6f5a014]
        public_6f585f6 : nop
        mov eax, offset public_6f5b714
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f585b0)
        ASM_EXPORT_ENTRY_FIRST(0x6f585bb, public_6f585bb)
        ASM_EXPORT_ENTRY(0x6f585c9, public_6f585c9)
        ASM_EXPORT_ENTRY(0x6f585d7, public_6f585d7)
        ASM_EXPORT_ENTRY(0x6f585e2, public_6f585e2)
        ASM_EXPORT_ENTRY(0x6f585ed, public_6f585ed)
        ASM_EXPORT_ENTRY_LAST(0x6f585f6, public_6f585f6)
    }
}

#undef public_6f585bb
#undef public_6f585c9
#undef public_6f585d7
#undef public_6f585e2
#undef public_6f585ed
#undef public_6f585f6

#pragma init_seg(compiler)
extern "C" void const* const public_6f585bb = __AsmFindLabelExport(&internal_6f585b0, 0x6f585bb);
extern "C" void const* const public_6f585c9 = __AsmFindLabelExport(&internal_6f585b0, 0x6f585c9);
extern "C" void const* const public_6f585d7 = __AsmFindLabelExport(&internal_6f585b0, 0x6f585d7);
extern "C" void const* const public_6f585e2 = __AsmFindLabelExport(&internal_6f585b0, 0x6f585e2);
extern "C" void const* const public_6f585ed = __AsmFindLabelExport(&internal_6f585b0, 0x6f585ed);
extern "C" void const* const public_6f585f6 = __AsmFindLabelExport(&internal_6f585b0, 0x6f585f6);
