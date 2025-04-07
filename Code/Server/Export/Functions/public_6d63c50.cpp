#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56f70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63c61 _public_6d63c61
#define public_6d63c70 _public_6d63c70
#define public_6d63c7f _public_6d63c7f
#define public_6d63c8e _public_6d63c8e
#define public_6d63c9d _public_6d63c9d
#define public_6d63cac _public_6d63cac
#define public_6d63cbb _public_6d63cbb
#define public_6d63cc9 _public_6d63cc9
#define public_6d63cd8 _public_6d63cd8
#define public_6d63ce6 _public_6d63ce6

PROC_DECLARE(0x6d63c50, internal_6d63c50, public_6d63c50);
/* CHUNK of public_6d5ab90 */
extern "C" NAKED register_t __cdecl internal_6d63c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d63c61 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x200
        jmp dword ptr ds : [public_6d64b68]
        public_6d63c70 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x210
        jmp dword ptr ds : [public_6d64b68]
        public_6d63c7f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x244
        jmp dword ptr ds : [public_6d643f0]
        public_6d63c8e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x250
        jmp dword ptr ds : [public_6d6438c]
        public_6d63c9d : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x260
        jmp dword ptr ds : [public_6d643f0]
        public_6d63cac : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x26C
        jmp dword ptr ds : [public_6d6438c]
        public_6d63cbb : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x2C0
        jmp public_6d0b7e0
        public_6d63cc9 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x364
        jmp dword ptr ds : [public_6d64b94]
        public_6d63cd8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x374
        jmp public_6d56f70
        public_6d63ce6 : nop
        mov eax, offset public_6d75e9c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63c50)
        ASM_EXPORT_ENTRY_FIRST(0x6d63c61, public_6d63c61)
        ASM_EXPORT_ENTRY(0x6d63c70, public_6d63c70)
        ASM_EXPORT_ENTRY(0x6d63c7f, public_6d63c7f)
        ASM_EXPORT_ENTRY(0x6d63c8e, public_6d63c8e)
        ASM_EXPORT_ENTRY(0x6d63c9d, public_6d63c9d)
        ASM_EXPORT_ENTRY(0x6d63cac, public_6d63cac)
        ASM_EXPORT_ENTRY(0x6d63cbb, public_6d63cbb)
        ASM_EXPORT_ENTRY(0x6d63cc9, public_6d63cc9)
        ASM_EXPORT_ENTRY(0x6d63cd8, public_6d63cd8)
        ASM_EXPORT_ENTRY_LAST(0x6d63ce6, public_6d63ce6)
    }
}

#undef public_6d63c61
#undef public_6d63c70
#undef public_6d63c7f
#undef public_6d63c8e
#undef public_6d63c9d
#undef public_6d63cac
#undef public_6d63cbb
#undef public_6d63cc9
#undef public_6d63cd8
#undef public_6d63ce6

#pragma init_seg(compiler)
extern "C" void const* const public_6d63c61 = __AsmFindLabelExport(&internal_6d63c50, 0x6d63c61);
extern "C" void const* const public_6d63c70 = __AsmFindLabelExport(&internal_6d63c50, 0x6d63c70);
extern "C" void const* const public_6d63c7f = __AsmFindLabelExport(&internal_6d63c50, 0x6d63c7f);
extern "C" void const* const public_6d63c8e = __AsmFindLabelExport(&internal_6d63c50, 0x6d63c8e);
extern "C" void const* const public_6d63c9d = __AsmFindLabelExport(&internal_6d63c50, 0x6d63c9d);
extern "C" void const* const public_6d63cac = __AsmFindLabelExport(&internal_6d63c50, 0x6d63cac);
extern "C" void const* const public_6d63cbb = __AsmFindLabelExport(&internal_6d63c50, 0x6d63cbb);
extern "C" void const* const public_6d63cc9 = __AsmFindLabelExport(&internal_6d63c50, 0x6d63cc9);
extern "C" void const* const public_6d63cd8 = __AsmFindLabelExport(&internal_6d63c50, 0x6d63cd8);
extern "C" void const* const public_6d63ce6 = __AsmFindLabelExport(&internal_6d63c50, 0x6d63ce6);
