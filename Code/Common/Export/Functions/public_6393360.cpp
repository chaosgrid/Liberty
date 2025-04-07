#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6289730);
CLANG_FORWARD_PROC_SYMBOL(public_6289760);
CLANG_FORWARD_PROC_SYMBOL(public_634bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393368 _public_6393368
#define public_6393380 _public_6393380
#define public_6393387 _public_6393387
#define public_639338f _public_639338f
#define public_63933a7 _public_63933a7
#define public_63933ae _public_63933ae
#define public_63933b6 _public_63933b6
#define public_63933c1 _public_63933c1

PROC_DECLARE(0x6393360, internal_6393360, public_6393360);
/* CHUNK of public_6289790 */
extern "C" NAKED register_t __cdecl internal_6393360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6289730
        public_6393368 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6393380
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x38], eax
        jmp public_6393387
        public_6393380 : nop
        mov dword ptr ss : [ebp-0x38], 0
        public_6393387 : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        jmp public_6289760
        public_639338f : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_63933a7
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_63933ae
        public_63933a7 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_63933ae : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_634bca0
        public_63933b6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1C
        jmp public_6269110
        public_63933c1 : nop
        mov eax, offset public_63ac3ac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393360)
        ASM_EXPORT_ENTRY_FIRST(0x6393368, public_6393368)
        ASM_EXPORT_ENTRY(0x6393380, public_6393380)
        ASM_EXPORT_ENTRY(0x6393387, public_6393387)
        ASM_EXPORT_ENTRY(0x639338f, public_639338f)
        ASM_EXPORT_ENTRY(0x63933a7, public_63933a7)
        ASM_EXPORT_ENTRY(0x63933ae, public_63933ae)
        ASM_EXPORT_ENTRY(0x63933b6, public_63933b6)
        ASM_EXPORT_ENTRY_LAST(0x63933c1, public_63933c1)
    }
}

#undef public_6393368
#undef public_6393380
#undef public_6393387
#undef public_639338f
#undef public_63933a7
#undef public_63933ae
#undef public_63933b6
#undef public_63933c1

#pragma init_seg(compiler)
extern "C" void const* const public_6393368 = __AsmFindLabelExport(&internal_6393360, 0x6393368);
extern "C" void const* const public_6393380 = __AsmFindLabelExport(&internal_6393360, 0x6393380);
extern "C" void const* const public_6393387 = __AsmFindLabelExport(&internal_6393360, 0x6393387);
extern "C" void const* const public_639338f = __AsmFindLabelExport(&internal_6393360, 0x639338f);
extern "C" void const* const public_63933a7 = __AsmFindLabelExport(&internal_6393360, 0x63933a7);
extern "C" void const* const public_63933ae = __AsmFindLabelExport(&internal_6393360, 0x63933ae);
extern "C" void const* const public_63933b6 = __AsmFindLabelExport(&internal_6393360, 0x63933b6);
extern "C" void const* const public_63933c1 = __AsmFindLabelExport(&internal_6393360, 0x63933c1);
