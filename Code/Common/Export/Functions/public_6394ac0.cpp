#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c3060);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394ac8 _public_6394ac8
#define public_6394ad3 _public_6394ad3
#define public_6394ae1 _public_6394ae1
#define public_6394aef _public_6394aef
#define public_6394afd _public_6394afd
#define public_6394b08 _public_6394b08

PROC_DECLARE(0x6394ac0, internal_6394ac0, public_6394ac0);
/* CHUNK of public_62c30d0 */
extern "C" NAKED register_t __cdecl internal_6394ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62d2080
        public_6394ac8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_62c3040
        public_6394ad3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xA8
        jmp public_62c3040
        public_6394ae1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x168
        jmp public_62c3060
        public_6394aef : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x324
        jmp public_62881d0
        public_6394afd : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_62c3040
        public_6394b08 : nop
        mov eax, offset public_63ae130
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394ac0)
        ASM_EXPORT_ENTRY_FIRST(0x6394ac8, public_6394ac8)
        ASM_EXPORT_ENTRY(0x6394ad3, public_6394ad3)
        ASM_EXPORT_ENTRY(0x6394ae1, public_6394ae1)
        ASM_EXPORT_ENTRY(0x6394aef, public_6394aef)
        ASM_EXPORT_ENTRY(0x6394afd, public_6394afd)
        ASM_EXPORT_ENTRY_LAST(0x6394b08, public_6394b08)
    }
}

#undef public_6394ac8
#undef public_6394ad3
#undef public_6394ae1
#undef public_6394aef
#undef public_6394afd
#undef public_6394b08

#pragma init_seg(compiler)
extern "C" void const* const public_6394ac8 = __AsmFindLabelExport(&internal_6394ac0, 0x6394ac8);
extern "C" void const* const public_6394ad3 = __AsmFindLabelExport(&internal_6394ac0, 0x6394ad3);
extern "C" void const* const public_6394ae1 = __AsmFindLabelExport(&internal_6394ac0, 0x6394ae1);
extern "C" void const* const public_6394aef = __AsmFindLabelExport(&internal_6394ac0, 0x6394aef);
extern "C" void const* const public_6394afd = __AsmFindLabelExport(&internal_6394ac0, 0x6394afd);
extern "C" void const* const public_6394b08 = __AsmFindLabelExport(&internal_6394ac0, 0x6394b08);
