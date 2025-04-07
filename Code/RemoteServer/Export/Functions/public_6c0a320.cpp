#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a32b _public_6c0a32b
#define public_6c0a336 _public_6c0a336
#define public_6c0a341 _public_6c0a341
#define public_6c0a34c _public_6c0a34c
#define public_6c0a357 _public_6c0a357
#define public_6c0a362 _public_6c0a362

PROC_DECLARE(0x6c0a320, internal_6c0a320, public_6c0a320);
/* CHUNK of public_6bd6070 */
extern "C" NAKED register_t __cdecl internal_6c0a320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a32b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a336 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a341 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a34c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a357 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a362 : nop
        mov eax, offset public_6c0ea14
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a320)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a32b, public_6c0a32b)
        ASM_EXPORT_ENTRY(0x6c0a336, public_6c0a336)
        ASM_EXPORT_ENTRY(0x6c0a341, public_6c0a341)
        ASM_EXPORT_ENTRY(0x6c0a34c, public_6c0a34c)
        ASM_EXPORT_ENTRY(0x6c0a357, public_6c0a357)
        ASM_EXPORT_ENTRY_LAST(0x6c0a362, public_6c0a362)
    }
}

#undef public_6c0a32b
#undef public_6c0a336
#undef public_6c0a341
#undef public_6c0a34c
#undef public_6c0a357
#undef public_6c0a362

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a32b = __AsmFindLabelExport(&internal_6c0a320, 0x6c0a32b);
extern "C" void const* const public_6c0a336 = __AsmFindLabelExport(&internal_6c0a320, 0x6c0a336);
extern "C" void const* const public_6c0a341 = __AsmFindLabelExport(&internal_6c0a320, 0x6c0a341);
extern "C" void const* const public_6c0a34c = __AsmFindLabelExport(&internal_6c0a320, 0x6c0a34c);
extern "C" void const* const public_6c0a357 = __AsmFindLabelExport(&internal_6c0a320, 0x6c0a357);
extern "C" void const* const public_6c0a362 = __AsmFindLabelExport(&internal_6c0a320, 0x6c0a362);
