#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabe68 _public_6fabe68
#define public_6fabe76 _public_6fabe76
#define public_6fabe84 _public_6fabe84
#define public_6fabe92 _public_6fabe92
#define public_6fabea0 _public_6fabea0
#define public_6fabeae _public_6fabeae
#define public_6fabec6 _public_6fabec6
#define public_6fabecd _public_6fabecd
#define public_6fabed5 _public_6fabed5

PROC_DECLARE(0x6fabe60, internal_6fabe60, public_6fabe60);
/* CHUNK of public_6eef550 */
extern "C" NAKED register_t __cdecl internal_6fabe60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f4b460
        public_6fabe68 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x240
        jmp public_6fa0330
        public_6fabe76 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x248
        jmp public_6eb7900
        public_6fabe84 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x26C
        jmp public_6eec8d0
        public_6fabe92 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x27C
        jmp public_6eec8d0
        public_6fabea0 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28C
        jmp public_6eec8d0
        public_6fabeae : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        je public_6fabec6
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 4
        mov dword ptr ss : [ebp-0x68], eax
        jmp public_6fabecd
        public_6fabec6 : nop
        mov dword ptr ss : [ebp-0x68], 0
        public_6fabecd : nop
        mov ecx, dword ptr ss : [ebp-0x68]
        jmp public_6f15350
        public_6fabed5 : nop
        mov eax, offset public_6fc0aac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabe60)
        ASM_EXPORT_ENTRY_FIRST(0x6fabe68, public_6fabe68)
        ASM_EXPORT_ENTRY(0x6fabe76, public_6fabe76)
        ASM_EXPORT_ENTRY(0x6fabe84, public_6fabe84)
        ASM_EXPORT_ENTRY(0x6fabe92, public_6fabe92)
        ASM_EXPORT_ENTRY(0x6fabea0, public_6fabea0)
        ASM_EXPORT_ENTRY(0x6fabeae, public_6fabeae)
        ASM_EXPORT_ENTRY(0x6fabec6, public_6fabec6)
        ASM_EXPORT_ENTRY(0x6fabecd, public_6fabecd)
        ASM_EXPORT_ENTRY_LAST(0x6fabed5, public_6fabed5)
    }
}

#undef public_6fabe68
#undef public_6fabe76
#undef public_6fabe84
#undef public_6fabe92
#undef public_6fabea0
#undef public_6fabeae
#undef public_6fabec6
#undef public_6fabecd
#undef public_6fabed5

#pragma init_seg(compiler)
extern "C" void const* const public_6fabe68 = __AsmFindLabelExport(&internal_6fabe60, 0x6fabe68);
extern "C" void const* const public_6fabe76 = __AsmFindLabelExport(&internal_6fabe60, 0x6fabe76);
extern "C" void const* const public_6fabe84 = __AsmFindLabelExport(&internal_6fabe60, 0x6fabe84);
extern "C" void const* const public_6fabe92 = __AsmFindLabelExport(&internal_6fabe60, 0x6fabe92);
extern "C" void const* const public_6fabea0 = __AsmFindLabelExport(&internal_6fabe60, 0x6fabea0);
extern "C" void const* const public_6fabeae = __AsmFindLabelExport(&internal_6fabe60, 0x6fabeae);
extern "C" void const* const public_6fabec6 = __AsmFindLabelExport(&internal_6fabe60, 0x6fabec6);
extern "C" void const* const public_6fabecd = __AsmFindLabelExport(&internal_6fabe60, 0x6fabecd);
extern "C" void const* const public_6fabed5 = __AsmFindLabelExport(&internal_6fabe60, 0x6fabed5);
