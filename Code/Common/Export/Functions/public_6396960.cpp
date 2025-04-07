#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6315920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396971 _public_6396971
#define public_639697d _public_639697d
#define public_6396988 _public_6396988
#define public_6396993 _public_6396993

PROC_DECLARE(0x6396960, internal_6396960, public_6396960);
/* CHUNK of public_631a090 */
extern "C" NAKED register_t __cdecl internal_6396960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6396971 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_639697d : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x14
        jmp public_6315920
        public_6396988 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x28
        jmp public_6315920
        public_6396993 : nop
        mov eax, offset public_63b0860
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396960)
        ASM_EXPORT_ENTRY_FIRST(0x6396971, public_6396971)
        ASM_EXPORT_ENTRY(0x639697d, public_639697d)
        ASM_EXPORT_ENTRY(0x6396988, public_6396988)
        ASM_EXPORT_ENTRY_LAST(0x6396993, public_6396993)
    }
}

#undef public_6396971
#undef public_639697d
#undef public_6396988
#undef public_6396993

#pragma init_seg(compiler)
extern "C" void const* const public_6396971 = __AsmFindLabelExport(&internal_6396960, 0x6396971);
extern "C" void const* const public_639697d = __AsmFindLabelExport(&internal_6396960, 0x639697d);
extern "C" void const* const public_6396988 = __AsmFindLabelExport(&internal_6396960, 0x6396988);
extern "C" void const* const public_6396993 = __AsmFindLabelExport(&internal_6396960, 0x6396993);
