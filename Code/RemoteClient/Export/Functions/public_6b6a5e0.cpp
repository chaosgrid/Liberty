#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b385e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a5e8 _public_6b6a5e8
#define public_6b6a5f3 _public_6b6a5f3
#define public_6b6a602 _public_6b6a602
#define public_6b6a611 _public_6b6a611
#define public_6b6a61f _public_6b6a61f
#define public_6b6a62e _public_6b6a62e
#define public_6b6a63d _public_6b6a63d
#define public_6b6a64b _public_6b6a64b

PROC_DECLARE(0x6b6a5e0, internal_6b6a5e0, public_6b6a5e0);
/* CHUNK of public_6b35350 */
extern "C" NAKED register_t __cdecl internal_6b6a5e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6b385e0
        public_6b6a5e8 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a5f3 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x204
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a602 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x214
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a611 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x264
        jmp public_6b3a450
        public_6b6a61f : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x204
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a62e : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x214
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a63d : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x264
        jmp public_6b3a450
        public_6b6a64b : nop
        mov eax, offset public_6b6ecec
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a5e0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a5e8, public_6b6a5e8)
        ASM_EXPORT_ENTRY(0x6b6a5f3, public_6b6a5f3)
        ASM_EXPORT_ENTRY(0x6b6a602, public_6b6a602)
        ASM_EXPORT_ENTRY(0x6b6a611, public_6b6a611)
        ASM_EXPORT_ENTRY(0x6b6a61f, public_6b6a61f)
        ASM_EXPORT_ENTRY(0x6b6a62e, public_6b6a62e)
        ASM_EXPORT_ENTRY(0x6b6a63d, public_6b6a63d)
        ASM_EXPORT_ENTRY_LAST(0x6b6a64b, public_6b6a64b)
    }
}

#undef public_6b6a5e8
#undef public_6b6a5f3
#undef public_6b6a602
#undef public_6b6a611
#undef public_6b6a61f
#undef public_6b6a62e
#undef public_6b6a63d
#undef public_6b6a64b

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a5e8 = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a5e8);
extern "C" void const* const public_6b6a5f3 = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a5f3);
extern "C" void const* const public_6b6a602 = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a602);
extern "C" void const* const public_6b6a611 = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a611);
extern "C" void const* const public_6b6a61f = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a61f);
extern "C" void const* const public_6b6a62e = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a62e);
extern "C" void const* const public_6b6a63d = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a63d);
extern "C" void const* const public_6b6a64b = __AsmFindLabelExport(&internal_6b6a5e0, 0x6b6a64b);
