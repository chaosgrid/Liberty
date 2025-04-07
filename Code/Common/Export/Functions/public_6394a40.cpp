#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c3060);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394a48 _public_6394a48
#define public_6394a53 _public_6394a53
#define public_6394a61 _public_6394a61
#define public_6394a6f _public_6394a6f
#define public_6394a77 _public_6394a77
#define public_6394a85 _public_6394a85
#define public_6394a8d _public_6394a8d
#define public_6394a95 _public_6394a95

PROC_DECLARE(0x6394a40, internal_6394a40, public_6394a40);
/* CHUNK of public_62c2e60 */
extern "C" NAKED register_t __cdecl internal_6394a40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394a48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62c3040
        public_6394a53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA8
        jmp public_62c3040
        public_6394a61 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x168
        jmp public_62c3060
        public_6394a6f : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394a77 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x324
        jmp public_62881d0
        public_6394a85 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_62881d0
        public_6394a8d : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_62881d0
        public_6394a95 : nop
        mov eax, offset public_63ae0c0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394a40)
        ASM_EXPORT_ENTRY_FIRST(0x6394a48, public_6394a48)
        ASM_EXPORT_ENTRY(0x6394a53, public_6394a53)
        ASM_EXPORT_ENTRY(0x6394a61, public_6394a61)
        ASM_EXPORT_ENTRY(0x6394a6f, public_6394a6f)
        ASM_EXPORT_ENTRY(0x6394a77, public_6394a77)
        ASM_EXPORT_ENTRY(0x6394a85, public_6394a85)
        ASM_EXPORT_ENTRY(0x6394a8d, public_6394a8d)
        ASM_EXPORT_ENTRY_LAST(0x6394a95, public_6394a95)
    }
}

#undef public_6394a48
#undef public_6394a53
#undef public_6394a61
#undef public_6394a6f
#undef public_6394a77
#undef public_6394a85
#undef public_6394a8d
#undef public_6394a95

#pragma init_seg(compiler)
extern "C" void const* const public_6394a48 = __AsmFindLabelExport(&internal_6394a40, 0x6394a48);
extern "C" void const* const public_6394a53 = __AsmFindLabelExport(&internal_6394a40, 0x6394a53);
extern "C" void const* const public_6394a61 = __AsmFindLabelExport(&internal_6394a40, 0x6394a61);
extern "C" void const* const public_6394a6f = __AsmFindLabelExport(&internal_6394a40, 0x6394a6f);
extern "C" void const* const public_6394a77 = __AsmFindLabelExport(&internal_6394a40, 0x6394a77);
extern "C" void const* const public_6394a85 = __AsmFindLabelExport(&internal_6394a40, 0x6394a85);
extern "C" void const* const public_6394a8d = __AsmFindLabelExport(&internal_6394a40, 0x6394a8d);
extern "C" void const* const public_6394a95 = __AsmFindLabelExport(&internal_6394a40, 0x6394a95);
