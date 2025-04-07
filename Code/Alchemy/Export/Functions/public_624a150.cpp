#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6239ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6239ee0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a15b _public_624a15b
#define public_624a163 _public_624a163
#define public_624a16b _public_624a16b
#define public_624a179 _public_624a179
#define public_624a181 _public_624a181
#define public_624a189 _public_624a189
#define public_624a191 _public_624a191

PROC_DECLARE(0x624a150, internal_624a150, public_624a150);
/* CHUNK of public_6239c70 */
extern "C" NAKED register_t __cdecl internal_624a150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a15b : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_624a163 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_624a16b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xB4
        jmp public_620b700
        public_624a179 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6239ee0
        public_624a181 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6239ed0
        public_624a189 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_624a191 : nop
        mov eax, offset public_62531e0
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a150)
        ASM_EXPORT_ENTRY_FIRST(0x624a15b, public_624a15b)
        ASM_EXPORT_ENTRY(0x624a163, public_624a163)
        ASM_EXPORT_ENTRY(0x624a16b, public_624a16b)
        ASM_EXPORT_ENTRY(0x624a179, public_624a179)
        ASM_EXPORT_ENTRY(0x624a181, public_624a181)
        ASM_EXPORT_ENTRY(0x624a189, public_624a189)
        ASM_EXPORT_ENTRY_LAST(0x624a191, public_624a191)
    }
}

#undef public_624a15b
#undef public_624a163
#undef public_624a16b
#undef public_624a179
#undef public_624a181
#undef public_624a189
#undef public_624a191

#pragma init_seg(compiler)
extern "C" void const* const public_624a15b = __AsmFindLabelExport(&internal_624a150, 0x624a15b);
extern "C" void const* const public_624a163 = __AsmFindLabelExport(&internal_624a150, 0x624a163);
extern "C" void const* const public_624a16b = __AsmFindLabelExport(&internal_624a150, 0x624a16b);
extern "C" void const* const public_624a179 = __AsmFindLabelExport(&internal_624a150, 0x624a179);
extern "C" void const* const public_624a181 = __AsmFindLabelExport(&internal_624a150, 0x624a181);
extern "C" void const* const public_624a189 = __AsmFindLabelExport(&internal_624a150, 0x624a189);
extern "C" void const* const public_624a191 = __AsmFindLabelExport(&internal_624a150, 0x624a191);
