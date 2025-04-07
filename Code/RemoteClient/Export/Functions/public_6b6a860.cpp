#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a86b _public_6b6a86b
#define public_6b6a87a _public_6b6a87a
#define public_6b6a889 _public_6b6a889
#define public_6b6a897 _public_6b6a897

PROC_DECLARE(0x6b6a860, internal_6b6a860, public_6b6a860);
/* CHUNK of public_6b40500 */
extern "C" NAKED register_t __cdecl internal_6b6a860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a86b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x204
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a87a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x214
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a889 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x264
        jmp public_6b3a450
        public_6b6a897 : nop
        mov eax, offset public_6b6ef40
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a860)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a86b, public_6b6a86b)
        ASM_EXPORT_ENTRY(0x6b6a87a, public_6b6a87a)
        ASM_EXPORT_ENTRY(0x6b6a889, public_6b6a889)
        ASM_EXPORT_ENTRY_LAST(0x6b6a897, public_6b6a897)
    }
}

#undef public_6b6a86b
#undef public_6b6a87a
#undef public_6b6a889
#undef public_6b6a897

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a86b = __AsmFindLabelExport(&internal_6b6a860, 0x6b6a86b);
extern "C" void const* const public_6b6a87a = __AsmFindLabelExport(&internal_6b6a860, 0x6b6a87a);
extern "C" void const* const public_6b6a889 = __AsmFindLabelExport(&internal_6b6a860, 0x6b6a889);
extern "C" void const* const public_6b6a897 = __AsmFindLabelExport(&internal_6b6a860, 0x6b6a897);
