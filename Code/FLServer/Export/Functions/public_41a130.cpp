#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a138 _public_41a138
#define public_41a143 _public_41a143
#define public_41a151 _public_41a151
#define public_41a15f _public_41a15f
#define public_41a16d _public_41a16d
#define public_41a17b _public_41a17b

PROC_DECLARE(0x41a130, internal_41a130, public_41a130);
/* CHUNK of public_40cf80 */
extern "C" NAKED register_t __cdecl internal_41a130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41a138 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c78
        public_41a143 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA0
        jmp public_418c78
        public_41a151 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE0
        jmp public_418c78
        public_41a15f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x120
        jmp public_418d86
        public_41a16d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x160
        jmp public_418c78
        public_41a17b : nop
        mov eax, offset public_41f2bc
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a130)
        ASM_EXPORT_ENTRY_FIRST(0x41a138, public_41a138)
        ASM_EXPORT_ENTRY(0x41a143, public_41a143)
        ASM_EXPORT_ENTRY(0x41a151, public_41a151)
        ASM_EXPORT_ENTRY(0x41a15f, public_41a15f)
        ASM_EXPORT_ENTRY(0x41a16d, public_41a16d)
        ASM_EXPORT_ENTRY_LAST(0x41a17b, public_41a17b)
    }
}

#undef public_41a138
#undef public_41a143
#undef public_41a151
#undef public_41a15f
#undef public_41a16d
#undef public_41a17b

#pragma init_seg(compiler)
extern "C" void const* const public_41a138 = __AsmFindLabelExport(&internal_41a130, 0x41a138);
extern "C" void const* const public_41a143 = __AsmFindLabelExport(&internal_41a130, 0x41a143);
extern "C" void const* const public_41a151 = __AsmFindLabelExport(&internal_41a130, 0x41a151);
extern "C" void const* const public_41a15f = __AsmFindLabelExport(&internal_41a130, 0x41a15f);
extern "C" void const* const public_41a16d = __AsmFindLabelExport(&internal_41a130, 0x41a16d);
extern "C" void const* const public_41a17b = __AsmFindLabelExport(&internal_41a130, 0x41a17b);
