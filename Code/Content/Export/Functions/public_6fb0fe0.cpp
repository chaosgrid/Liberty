#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71920);
CLANG_FORWARD_PROC_SYMBOL(public_6f92e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0fe8 _public_6fb0fe8
#define public_6fb0ff3 _public_6fb0ff3
#define public_6fb0ffe _public_6fb0ffe
#define public_6fb100c _public_6fb100c
#define public_6fb1017 _public_6fb1017
#define public_6fb101f _public_6fb101f
#define public_6fb102a _public_6fb102a
#define public_6fb1032 _public_6fb1032
#define public_6fb103d _public_6fb103d
#define public_6fb1045 _public_6fb1045

PROC_DECLARE(0x6fb0fe0, internal_6fb0fe0, public_6fb0fe0);
/* CHUNK of public_6f89a00 */
extern "C" NAKED register_t __cdecl internal_6fb0fe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f71920
        public_6fb0fe8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6eb7900
        public_6fb0ff3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_6eec8d0
        public_6fb0ffe : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x8C
        jmp public_6fa0330
        public_6fb100c : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb1017 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f92e80
        public_6fb101f : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb102a : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f92e80
        public_6fb1032 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb103d : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f92e80
        public_6fb1045 : nop
        mov eax, offset public_6fc657c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0fe0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0fe8, public_6fb0fe8)
        ASM_EXPORT_ENTRY(0x6fb0ff3, public_6fb0ff3)
        ASM_EXPORT_ENTRY(0x6fb0ffe, public_6fb0ffe)
        ASM_EXPORT_ENTRY(0x6fb100c, public_6fb100c)
        ASM_EXPORT_ENTRY(0x6fb1017, public_6fb1017)
        ASM_EXPORT_ENTRY(0x6fb101f, public_6fb101f)
        ASM_EXPORT_ENTRY(0x6fb102a, public_6fb102a)
        ASM_EXPORT_ENTRY(0x6fb1032, public_6fb1032)
        ASM_EXPORT_ENTRY(0x6fb103d, public_6fb103d)
        ASM_EXPORT_ENTRY_LAST(0x6fb1045, public_6fb1045)
    }
}

#undef public_6fb0fe8
#undef public_6fb0ff3
#undef public_6fb0ffe
#undef public_6fb100c
#undef public_6fb1017
#undef public_6fb101f
#undef public_6fb102a
#undef public_6fb1032
#undef public_6fb103d
#undef public_6fb1045

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0fe8 = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb0fe8);
extern "C" void const* const public_6fb0ff3 = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb0ff3);
extern "C" void const* const public_6fb0ffe = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb0ffe);
extern "C" void const* const public_6fb100c = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb100c);
extern "C" void const* const public_6fb1017 = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb1017);
extern "C" void const* const public_6fb101f = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb101f);
extern "C" void const* const public_6fb102a = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb102a);
extern "C" void const* const public_6fb1032 = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb1032);
extern "C" void const* const public_6fb103d = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb103d);
extern "C" void const* const public_6fb1045 = __AsmFindLabelExport(&internal_6fb0fe0, 0x6fb1045);
