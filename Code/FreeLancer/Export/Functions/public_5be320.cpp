#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be328 _public_5be328
#define public_5be340 _public_5be340
#define public_5be347 _public_5be347
#define public_5be34f _public_5be34f
#define public_5be369 _public_5be369
#define public_5be370 _public_5be370
#define public_5be378 _public_5be378
#define public_5be386 _public_5be386

PROC_DECLARE(0x5be320, internal_5be320, public_5be320);
/* CHUNK of public_4d7a70 */
extern "C" NAKED register_t __cdecl internal_5be320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5be328 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5be340
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x38
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5be347
        public_5be340 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5be347 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_59fa50
        public_5be34f : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5be369
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x364
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_5be370
        public_5be369 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_5be370 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_576010
        public_5be378 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x37C
        jmp public_4de730
        public_5be386 : nop
        mov eax, offset public_5f8680
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be320)
        ASM_EXPORT_ENTRY_FIRST(0x5be328, public_5be328)
        ASM_EXPORT_ENTRY(0x5be340, public_5be340)
        ASM_EXPORT_ENTRY(0x5be347, public_5be347)
        ASM_EXPORT_ENTRY(0x5be34f, public_5be34f)
        ASM_EXPORT_ENTRY(0x5be369, public_5be369)
        ASM_EXPORT_ENTRY(0x5be370, public_5be370)
        ASM_EXPORT_ENTRY(0x5be378, public_5be378)
        ASM_EXPORT_ENTRY_LAST(0x5be386, public_5be386)
    }
}

#undef public_5be328
#undef public_5be340
#undef public_5be347
#undef public_5be34f
#undef public_5be369
#undef public_5be370
#undef public_5be378
#undef public_5be386

#pragma init_seg(compiler)
extern "C" void const* const public_5be328 = __AsmFindLabelExport(&internal_5be320, 0x5be328);
extern "C" void const* const public_5be340 = __AsmFindLabelExport(&internal_5be320, 0x5be340);
extern "C" void const* const public_5be347 = __AsmFindLabelExport(&internal_5be320, 0x5be347);
extern "C" void const* const public_5be34f = __AsmFindLabelExport(&internal_5be320, 0x5be34f);
extern "C" void const* const public_5be369 = __AsmFindLabelExport(&internal_5be320, 0x5be369);
extern "C" void const* const public_5be370 = __AsmFindLabelExport(&internal_5be320, 0x5be370);
extern "C" void const* const public_5be378 = __AsmFindLabelExport(&internal_5be320, 0x5be378);
extern "C" void const* const public_5be386 = __AsmFindLabelExport(&internal_5be320, 0x5be386);
