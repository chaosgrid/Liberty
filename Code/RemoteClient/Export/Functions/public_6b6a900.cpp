#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a90b _public_6b6a90b
#define public_6b6a91a _public_6b6a91a
#define public_6b6a929 _public_6b6a929
#define public_6b6a937 _public_6b6a937

PROC_DECLARE(0x6b6a900, internal_6b6a900, public_6b6a900);
/* CHUNK of public_6b42690 */
extern "C" NAKED register_t __cdecl internal_6b6a900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a90b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x204
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a91a : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x214
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a929 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x264
        jmp public_6b3a450
        public_6b6a937 : nop
        mov eax, offset public_6b6efb8
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a900)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a90b, public_6b6a90b)
        ASM_EXPORT_ENTRY(0x6b6a91a, public_6b6a91a)
        ASM_EXPORT_ENTRY(0x6b6a929, public_6b6a929)
        ASM_EXPORT_ENTRY_LAST(0x6b6a937, public_6b6a937)
    }
}

#undef public_6b6a90b
#undef public_6b6a91a
#undef public_6b6a929
#undef public_6b6a937

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a90b = __AsmFindLabelExport(&internal_6b6a900, 0x6b6a90b);
extern "C" void const* const public_6b6a91a = __AsmFindLabelExport(&internal_6b6a900, 0x6b6a91a);
extern "C" void const* const public_6b6a929 = __AsmFindLabelExport(&internal_6b6a900, 0x6b6a929);
extern "C" void const* const public_6b6a937 = __AsmFindLabelExport(&internal_6b6a900, 0x6b6a937);
