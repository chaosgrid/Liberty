#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a59b _public_6c0a59b
#define public_6c0a5aa _public_6c0a5aa
#define public_6c0a5b9 _public_6c0a5b9
#define public_6c0a5c7 _public_6c0a5c7

PROC_DECLARE(0x6c0a590, internal_6c0a590, public_6c0a590);
/* CHUNK of public_6bdfb70 */
extern "C" NAKED register_t __cdecl internal_6c0a590()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a59b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x204
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a5aa : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x214
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a5b9 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x264
        jmp public_6bdc790
        public_6c0a5c7 : nop
        mov eax, offset public_6c0ec70
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a590)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a59b, public_6c0a59b)
        ASM_EXPORT_ENTRY(0x6c0a5aa, public_6c0a5aa)
        ASM_EXPORT_ENTRY(0x6c0a5b9, public_6c0a5b9)
        ASM_EXPORT_ENTRY_LAST(0x6c0a5c7, public_6c0a5c7)
    }
}

#undef public_6c0a59b
#undef public_6c0a5aa
#undef public_6c0a5b9
#undef public_6c0a5c7

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a59b = __AsmFindLabelExport(&internal_6c0a590, 0x6c0a59b);
extern "C" void const* const public_6c0a5aa = __AsmFindLabelExport(&internal_6c0a590, 0x6c0a5aa);
extern "C" void const* const public_6c0a5b9 = __AsmFindLabelExport(&internal_6c0a590, 0x6c0a5b9);
extern "C" void const* const public_6c0a5c7 = __AsmFindLabelExport(&internal_6c0a590, 0x6c0a5c7);
