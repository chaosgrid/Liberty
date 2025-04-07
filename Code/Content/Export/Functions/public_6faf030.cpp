#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6f49a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b320);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf038 _public_6faf038
#define public_6faf052 _public_6faf052
#define public_6faf059 _public_6faf059
#define public_6faf062 _public_6faf062
#define public_6faf070 _public_6faf070
#define public_6faf07e _public_6faf07e
#define public_6faf08c _public_6faf08c
#define public_6faf09a _public_6faf09a

PROC_DECLARE(0x6faf030, internal_6faf030, public_6faf030);
/* CHUNK of public_6f4b460 */
extern "C" NAKED register_t __cdecl internal_6faf030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f0ed00
        public_6faf038 : nop
        cmp dword ptr ss : [ebp-0x18], 0
        je public_6faf052
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x1B0
        mov dword ptr ss : [ebp-0x24], eax
        jmp public_6faf059
        public_6faf052 : nop
        mov dword ptr ss : [ebp-0x24], 0
        public_6faf059 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp dword ptr ds : [public_6fb3200]
        public_6faf062 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1E4
        jmp public_6f4b320
        public_6faf070 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1F8
        jmp public_6fa0330
        public_6faf07e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1FC
        jmp public_6eec8d0
        public_6faf08c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x20C
        jmp public_6f49a40
        public_6faf09a : nop
        mov eax, offset public_6fc4040
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf030)
        ASM_EXPORT_ENTRY_FIRST(0x6faf038, public_6faf038)
        ASM_EXPORT_ENTRY(0x6faf052, public_6faf052)
        ASM_EXPORT_ENTRY(0x6faf059, public_6faf059)
        ASM_EXPORT_ENTRY(0x6faf062, public_6faf062)
        ASM_EXPORT_ENTRY(0x6faf070, public_6faf070)
        ASM_EXPORT_ENTRY(0x6faf07e, public_6faf07e)
        ASM_EXPORT_ENTRY(0x6faf08c, public_6faf08c)
        ASM_EXPORT_ENTRY_LAST(0x6faf09a, public_6faf09a)
    }
}

#undef public_6faf038
#undef public_6faf052
#undef public_6faf059
#undef public_6faf062
#undef public_6faf070
#undef public_6faf07e
#undef public_6faf08c
#undef public_6faf09a

#pragma init_seg(compiler)
extern "C" void const* const public_6faf038 = __AsmFindLabelExport(&internal_6faf030, 0x6faf038);
extern "C" void const* const public_6faf052 = __AsmFindLabelExport(&internal_6faf030, 0x6faf052);
extern "C" void const* const public_6faf059 = __AsmFindLabelExport(&internal_6faf030, 0x6faf059);
extern "C" void const* const public_6faf062 = __AsmFindLabelExport(&internal_6faf030, 0x6faf062);
extern "C" void const* const public_6faf070 = __AsmFindLabelExport(&internal_6faf030, 0x6faf070);
extern "C" void const* const public_6faf07e = __AsmFindLabelExport(&internal_6faf030, 0x6faf07e);
extern "C" void const* const public_6faf08c = __AsmFindLabelExport(&internal_6faf030, 0x6faf08c);
extern "C" void const* const public_6faf09a = __AsmFindLabelExport(&internal_6faf030, 0x6faf09a);
