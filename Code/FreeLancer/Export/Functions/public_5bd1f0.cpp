#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5280);
CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd1fb _public_5bd1fb
#define public_5bd203 _public_5bd203
#define public_5bd20b _public_5bd20b
#define public_5bd216 _public_5bd216
#define public_5bd221 _public_5bd221
#define public_5bd22f _public_5bd22f
#define public_5bd23d _public_5bd23d

PROC_DECLARE(0x5bd1f0, internal_5bd1f0, public_5bd1f0);
/* CHUNK of public_4b6630 */
extern "C" NAKED register_t __cdecl internal_5bd1f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd1fb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4b4fd0
        public_5bd203 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_5a1af0
        public_5bd20b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_444e20
        public_5bd216 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_444e50
        public_5bd221 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xEC
        jmp public_444ee0
        public_5bd22f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x150
        jmp public_4b5280
        public_5bd23d : nop
        mov eax, offset public_5f7508
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd1f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd1fb, public_5bd1fb)
        ASM_EXPORT_ENTRY(0x5bd203, public_5bd203)
        ASM_EXPORT_ENTRY(0x5bd20b, public_5bd20b)
        ASM_EXPORT_ENTRY(0x5bd216, public_5bd216)
        ASM_EXPORT_ENTRY(0x5bd221, public_5bd221)
        ASM_EXPORT_ENTRY(0x5bd22f, public_5bd22f)
        ASM_EXPORT_ENTRY_LAST(0x5bd23d, public_5bd23d)
    }
}

#undef public_5bd1fb
#undef public_5bd203
#undef public_5bd20b
#undef public_5bd216
#undef public_5bd221
#undef public_5bd22f
#undef public_5bd23d

#pragma init_seg(compiler)
extern "C" void const* const public_5bd1fb = __AsmFindLabelExport(&internal_5bd1f0, 0x5bd1fb);
extern "C" void const* const public_5bd203 = __AsmFindLabelExport(&internal_5bd1f0, 0x5bd203);
extern "C" void const* const public_5bd20b = __AsmFindLabelExport(&internal_5bd1f0, 0x5bd20b);
extern "C" void const* const public_5bd216 = __AsmFindLabelExport(&internal_5bd1f0, 0x5bd216);
extern "C" void const* const public_5bd221 = __AsmFindLabelExport(&internal_5bd1f0, 0x5bd221);
extern "C" void const* const public_5bd22f = __AsmFindLabelExport(&internal_5bd1f0, 0x5bd22f);
extern "C" void const* const public_5bd23d = __AsmFindLabelExport(&internal_5bd1f0, 0x5bd23d);
