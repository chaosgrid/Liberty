#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_62b5aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394708 _public_6394708
#define public_6394722 _public_6394722
#define public_6394729 _public_6394729
#define public_6394731 _public_6394731
#define public_639473f _public_639473f

PROC_DECLARE(0x6394700, internal_6394700, public_6394700);
/* CHUNK of public_62b5980 */
extern "C" NAKED register_t __cdecl internal_6394700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62af440
        public_6394708 : nop
        cmp dword ptr ss : [ebp-0x18], 0
        je public_6394722
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x9C
        mov dword ptr ss : [ebp-0x54], eax
        jmp public_6394729
        public_6394722 : nop
        mov dword ptr ss : [ebp-0x54], 0
        public_6394729 : nop
        mov ecx, dword ptr ss : [ebp-0x54]
        jmp public_6280b30
        public_6394731 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xBC
        jmp public_62b5aa0
        public_639473f : nop
        mov eax, offset public_63adcb8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394700)
        ASM_EXPORT_ENTRY_FIRST(0x6394708, public_6394708)
        ASM_EXPORT_ENTRY(0x6394722, public_6394722)
        ASM_EXPORT_ENTRY(0x6394729, public_6394729)
        ASM_EXPORT_ENTRY(0x6394731, public_6394731)
        ASM_EXPORT_ENTRY_LAST(0x639473f, public_639473f)
    }
}

#undef public_6394708
#undef public_6394722
#undef public_6394729
#undef public_6394731
#undef public_639473f

#pragma init_seg(compiler)
extern "C" void const* const public_6394708 = __AsmFindLabelExport(&internal_6394700, 0x6394708);
extern "C" void const* const public_6394722 = __AsmFindLabelExport(&internal_6394700, 0x6394722);
extern "C" void const* const public_6394729 = __AsmFindLabelExport(&internal_6394700, 0x6394729);
extern "C" void const* const public_6394731 = __AsmFindLabelExport(&internal_6394700, 0x6394731);
extern "C" void const* const public_639473f = __AsmFindLabelExport(&internal_6394700, 0x639473f);
