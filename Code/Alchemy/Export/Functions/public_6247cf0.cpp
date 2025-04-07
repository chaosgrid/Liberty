#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084d0);
CLANG_FORWARD_PROC_SYMBOL(public_6208530);
CLANG_FORWARD_PROC_SYMBOL(public_6208550);
CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247cfb _public_6247cfb
#define public_6247d03 _public_6247d03
#define public_6247d0e _public_6247d0e
#define public_6247d19 _public_6247d19
#define public_6247d24 _public_6247d24
#define public_6247d2f _public_6247d2f
#define public_6247d37 _public_6247d37
#define public_6247d42 _public_6247d42
#define public_6247d4d _public_6247d4d
#define public_6247d58 _public_6247d58

PROC_DECLARE(0x6247cf0, internal_6247cf0, public_6247cf0);
/* CHUNK of public_6210b70 */
extern "C" NAKED register_t __cdecl internal_6247cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247cfb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620c070
        public_6247d03 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x6C
        jmp public_6208530
        public_6247d0e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_6208550
        public_6247d19 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x74
        jmp public_6208530
        public_6247d24 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x78
        jmp public_6208530
        public_6247d2f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_6247d37 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_6247d42 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_620b300
        public_6247d4d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp public_62084d0
        public_6247d58 : nop
        mov eax, offset public_6250b80
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247cf0)
        ASM_EXPORT_ENTRY_FIRST(0x6247cfb, public_6247cfb)
        ASM_EXPORT_ENTRY(0x6247d03, public_6247d03)
        ASM_EXPORT_ENTRY(0x6247d0e, public_6247d0e)
        ASM_EXPORT_ENTRY(0x6247d19, public_6247d19)
        ASM_EXPORT_ENTRY(0x6247d24, public_6247d24)
        ASM_EXPORT_ENTRY(0x6247d2f, public_6247d2f)
        ASM_EXPORT_ENTRY(0x6247d37, public_6247d37)
        ASM_EXPORT_ENTRY(0x6247d42, public_6247d42)
        ASM_EXPORT_ENTRY(0x6247d4d, public_6247d4d)
        ASM_EXPORT_ENTRY_LAST(0x6247d58, public_6247d58)
    }
}

#undef public_6247cfb
#undef public_6247d03
#undef public_6247d0e
#undef public_6247d19
#undef public_6247d24
#undef public_6247d2f
#undef public_6247d37
#undef public_6247d42
#undef public_6247d4d
#undef public_6247d58

#pragma init_seg(compiler)
extern "C" void const* const public_6247cfb = __AsmFindLabelExport(&internal_6247cf0, 0x6247cfb);
extern "C" void const* const public_6247d03 = __AsmFindLabelExport(&internal_6247cf0, 0x6247d03);
extern "C" void const* const public_6247d0e = __AsmFindLabelExport(&internal_6247cf0, 0x6247d0e);
extern "C" void const* const public_6247d19 = __AsmFindLabelExport(&internal_6247cf0, 0x6247d19);
extern "C" void const* const public_6247d24 = __AsmFindLabelExport(&internal_6247cf0, 0x6247d24);
extern "C" void const* const public_6247d2f = __AsmFindLabelExport(&internal_6247cf0, 0x6247d2f);
extern "C" void const* const public_6247d37 = __AsmFindLabelExport(&internal_6247cf0, 0x6247d37);
extern "C" void const* const public_6247d42 = __AsmFindLabelExport(&internal_6247cf0, 0x6247d42);
extern "C" void const* const public_6247d4d = __AsmFindLabelExport(&internal_6247cf0, 0x6247d4d);
extern "C" void const* const public_6247d58 = __AsmFindLabelExport(&internal_6247cf0, 0x6247d58);
