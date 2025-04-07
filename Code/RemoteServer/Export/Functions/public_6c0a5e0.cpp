#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a5eb _public_6c0a5eb
#define public_6c0a5fa _public_6c0a5fa
#define public_6c0a609 _public_6c0a609
#define public_6c0a617 _public_6c0a617

PROC_DECLARE(0x6c0a5e0, internal_6c0a5e0, public_6c0a5e0);
/* CHUNK of public_6be0cd0 */
extern "C" NAKED register_t __cdecl internal_6c0a5e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a5eb : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x204
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a5fa : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x214
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a609 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x264
        jmp public_6bdc790
        public_6c0a617 : nop
        mov eax, offset public_6c0ecac
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a5e0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a5eb, public_6c0a5eb)
        ASM_EXPORT_ENTRY(0x6c0a5fa, public_6c0a5fa)
        ASM_EXPORT_ENTRY(0x6c0a609, public_6c0a609)
        ASM_EXPORT_ENTRY_LAST(0x6c0a617, public_6c0a617)
    }
}

#undef public_6c0a5eb
#undef public_6c0a5fa
#undef public_6c0a609
#undef public_6c0a617

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a5eb = __AsmFindLabelExport(&internal_6c0a5e0, 0x6c0a5eb);
extern "C" void const* const public_6c0a5fa = __AsmFindLabelExport(&internal_6c0a5e0, 0x6c0a5fa);
extern "C" void const* const public_6c0a609 = __AsmFindLabelExport(&internal_6c0a5e0, 0x6c0a609);
extern "C" void const* const public_6c0a617 = __AsmFindLabelExport(&internal_6c0a5e0, 0x6c0a617);
