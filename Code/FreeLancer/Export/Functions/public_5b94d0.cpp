#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4319d0);
CLANG_FORWARD_PROC_SYMBOL(public_43d980);
CLANG_FORWARD_PROC_SYMBOL(public_43d9a0);
CLANG_FORWARD_PROC_SYMBOL(public_442880);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b94d8 _public_5b94d8
#define public_5b94e6 _public_5b94e6
#define public_5b94f4 _public_5b94f4
#define public_5b9503 _public_5b9503
#define public_5b9511 _public_5b9511
#define public_5b951f _public_5b951f
#define public_5b952d _public_5b952d

PROC_DECLARE(0x5b94d0, internal_5b94d0, public_5b94d0);
/* CHUNK of public_43d6e0 */
extern "C" NAKED register_t __cdecl internal_5b94d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5b94d8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x32C
        jmp public_43d980
        public_5b94e6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34C
        jmp public_43d980
        public_5b94f4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x36C
        jmp dword ptr ds : [public_5c7090]
        public_5b9503 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x37C
        jmp public_442880
        public_5b9511 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x388
        jmp public_43d9a0
        public_5b951f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3A0
        jmp public_4319d0
        public_5b952d : nop
        mov eax, offset public_5f353c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b94d0)
        ASM_EXPORT_ENTRY_FIRST(0x5b94d8, public_5b94d8)
        ASM_EXPORT_ENTRY(0x5b94e6, public_5b94e6)
        ASM_EXPORT_ENTRY(0x5b94f4, public_5b94f4)
        ASM_EXPORT_ENTRY(0x5b9503, public_5b9503)
        ASM_EXPORT_ENTRY(0x5b9511, public_5b9511)
        ASM_EXPORT_ENTRY(0x5b951f, public_5b951f)
        ASM_EXPORT_ENTRY_LAST(0x5b952d, public_5b952d)
    }
}

#undef public_5b94d8
#undef public_5b94e6
#undef public_5b94f4
#undef public_5b9503
#undef public_5b9511
#undef public_5b951f
#undef public_5b952d

#pragma init_seg(compiler)
extern "C" void const* const public_5b94d8 = __AsmFindLabelExport(&internal_5b94d0, 0x5b94d8);
extern "C" void const* const public_5b94e6 = __AsmFindLabelExport(&internal_5b94d0, 0x5b94e6);
extern "C" void const* const public_5b94f4 = __AsmFindLabelExport(&internal_5b94d0, 0x5b94f4);
extern "C" void const* const public_5b9503 = __AsmFindLabelExport(&internal_5b94d0, 0x5b9503);
extern "C" void const* const public_5b9511 = __AsmFindLabelExport(&internal_5b94d0, 0x5b9511);
extern "C" void const* const public_5b951f = __AsmFindLabelExport(&internal_5b94d0, 0x5b951f);
extern "C" void const* const public_5b952d = __AsmFindLabelExport(&internal_5b94d0, 0x5b952d);
