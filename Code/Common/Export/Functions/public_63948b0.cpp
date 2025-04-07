#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63948c1 _public_63948c1
#define public_63948cd _public_63948cd
#define public_63948d9 _public_63948d9
#define public_63948e5 _public_63948e5

PROC_DECLARE(0x63948b0, internal_63948b0, public_63948b0);
/* CHUNK of public_62bb390 */
extern "C" NAKED register_t __cdecl internal_63948b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63948c1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_63948cd : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x14
        jmp dword ptr ds : [public_63991ac]
        public_63948d9 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_63948e5 : nop
        mov eax, offset public_63adee8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63948b0)
        ASM_EXPORT_ENTRY_FIRST(0x63948c1, public_63948c1)
        ASM_EXPORT_ENTRY(0x63948cd, public_63948cd)
        ASM_EXPORT_ENTRY(0x63948d9, public_63948d9)
        ASM_EXPORT_ENTRY_LAST(0x63948e5, public_63948e5)
    }
}

#undef public_63948c1
#undef public_63948cd
#undef public_63948d9
#undef public_63948e5

#pragma init_seg(compiler)
extern "C" void const* const public_63948c1 = __AsmFindLabelExport(&internal_63948b0, 0x63948c1);
extern "C" void const* const public_63948cd = __AsmFindLabelExport(&internal_63948b0, 0x63948cd);
extern "C" void const* const public_63948d9 = __AsmFindLabelExport(&internal_63948b0, 0x63948d9);
extern "C" void const* const public_63948e5 = __AsmFindLabelExport(&internal_63948b0, 0x63948e5);
