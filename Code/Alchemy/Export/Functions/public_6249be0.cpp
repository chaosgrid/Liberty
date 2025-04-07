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

#define public_6249beb _public_6249beb
#define public_6249bf3 _public_6249bf3
#define public_6249bfe _public_6249bfe
#define public_6249c09 _public_6249c09
#define public_6249c14 _public_6249c14
#define public_6249c1f _public_6249c1f
#define public_6249c27 _public_6249c27
#define public_6249c32 _public_6249c32
#define public_6249c3d _public_6249c3d
#define public_6249c48 _public_6249c48

PROC_DECLARE(0x6249be0, internal_6249be0, public_6249be0);
/* CHUNK of public_6234190 */
extern "C" NAKED register_t __cdecl internal_6249be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6249beb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620c070
        public_6249bf3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x6C
        jmp public_6208530
        public_6249bfe : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_6208550
        public_6249c09 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x74
        jmp public_6208530
        public_6249c14 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x78
        jmp public_6208530
        public_6249c1f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_6249c27 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_6249c32 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_620b300
        public_6249c3d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp public_62084d0
        public_6249c48 : nop
        mov eax, offset public_6252c68
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249be0)
        ASM_EXPORT_ENTRY_FIRST(0x6249beb, public_6249beb)
        ASM_EXPORT_ENTRY(0x6249bf3, public_6249bf3)
        ASM_EXPORT_ENTRY(0x6249bfe, public_6249bfe)
        ASM_EXPORT_ENTRY(0x6249c09, public_6249c09)
        ASM_EXPORT_ENTRY(0x6249c14, public_6249c14)
        ASM_EXPORT_ENTRY(0x6249c1f, public_6249c1f)
        ASM_EXPORT_ENTRY(0x6249c27, public_6249c27)
        ASM_EXPORT_ENTRY(0x6249c32, public_6249c32)
        ASM_EXPORT_ENTRY(0x6249c3d, public_6249c3d)
        ASM_EXPORT_ENTRY_LAST(0x6249c48, public_6249c48)
    }
}

#undef public_6249beb
#undef public_6249bf3
#undef public_6249bfe
#undef public_6249c09
#undef public_6249c14
#undef public_6249c1f
#undef public_6249c27
#undef public_6249c32
#undef public_6249c3d
#undef public_6249c48

#pragma init_seg(compiler)
extern "C" void const* const public_6249beb = __AsmFindLabelExport(&internal_6249be0, 0x6249beb);
extern "C" void const* const public_6249bf3 = __AsmFindLabelExport(&internal_6249be0, 0x6249bf3);
extern "C" void const* const public_6249bfe = __AsmFindLabelExport(&internal_6249be0, 0x6249bfe);
extern "C" void const* const public_6249c09 = __AsmFindLabelExport(&internal_6249be0, 0x6249c09);
extern "C" void const* const public_6249c14 = __AsmFindLabelExport(&internal_6249be0, 0x6249c14);
extern "C" void const* const public_6249c1f = __AsmFindLabelExport(&internal_6249be0, 0x6249c1f);
extern "C" void const* const public_6249c27 = __AsmFindLabelExport(&internal_6249be0, 0x6249c27);
extern "C" void const* const public_6249c32 = __AsmFindLabelExport(&internal_6249be0, 0x6249c32);
extern "C" void const* const public_6249c3d = __AsmFindLabelExport(&internal_6249be0, 0x6249c3d);
extern "C" void const* const public_6249c48 = __AsmFindLabelExport(&internal_6249be0, 0x6249c48);
