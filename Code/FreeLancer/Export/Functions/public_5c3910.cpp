#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575590);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3918 _public_5c3918
#define public_5c3926 _public_5c3926
#define public_5c3934 _public_5c3934
#define public_5c3942 _public_5c3942
#define public_5c3950 _public_5c3950
#define public_5c395e _public_5c395e
#define public_5c396c _public_5c396c
#define public_5c397b _public_5c397b

PROC_DECLARE(0x5c3910, internal_5c3910, public_5c3910);
/* CHUNK of public_573470 */
extern "C" NAKED register_t __cdecl internal_5c3910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_591ba0
        public_5c3918 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x8C
        jmp public_591ef0
        public_5c3926 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xE0
        jmp public_575590
        public_5c3934 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xE4
        jmp public_575590
        public_5c3942 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xE8
        jmp public_575590
        public_5c3950 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xEC
        jmp public_575590
        public_5c395e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xF0
        jmp public_575590
        public_5c396c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xF4
        jmp dword ptr ds : [public_5c62c4]
        public_5c397b : nop
        mov eax, offset public_5fd630
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3910)
        ASM_EXPORT_ENTRY_FIRST(0x5c3918, public_5c3918)
        ASM_EXPORT_ENTRY(0x5c3926, public_5c3926)
        ASM_EXPORT_ENTRY(0x5c3934, public_5c3934)
        ASM_EXPORT_ENTRY(0x5c3942, public_5c3942)
        ASM_EXPORT_ENTRY(0x5c3950, public_5c3950)
        ASM_EXPORT_ENTRY(0x5c395e, public_5c395e)
        ASM_EXPORT_ENTRY(0x5c396c, public_5c396c)
        ASM_EXPORT_ENTRY_LAST(0x5c397b, public_5c397b)
    }
}

#undef public_5c3918
#undef public_5c3926
#undef public_5c3934
#undef public_5c3942
#undef public_5c3950
#undef public_5c395e
#undef public_5c396c
#undef public_5c397b

#pragma init_seg(compiler)
extern "C" void const* const public_5c3918 = __AsmFindLabelExport(&internal_5c3910, 0x5c3918);
extern "C" void const* const public_5c3926 = __AsmFindLabelExport(&internal_5c3910, 0x5c3926);
extern "C" void const* const public_5c3934 = __AsmFindLabelExport(&internal_5c3910, 0x5c3934);
extern "C" void const* const public_5c3942 = __AsmFindLabelExport(&internal_5c3910, 0x5c3942);
extern "C" void const* const public_5c3950 = __AsmFindLabelExport(&internal_5c3910, 0x5c3950);
extern "C" void const* const public_5c395e = __AsmFindLabelExport(&internal_5c3910, 0x5c395e);
extern "C" void const* const public_5c396c = __AsmFindLabelExport(&internal_5c3910, 0x5c396c);
extern "C" void const* const public_5c397b = __AsmFindLabelExport(&internal_5c3910, 0x5c397b);
