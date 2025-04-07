#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16180);
CLANG_FORWARD_PROC_SYMBOL(public_6d161e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d163b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16410);
CLANG_FORWARD_PROC_SYMBOL(public_6d165e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16640);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61aab _public_6d61aab
#define public_6d61ab6 _public_6d61ab6
#define public_6d61ac1 _public_6d61ac1
#define public_6d61acc _public_6d61acc
#define public_6d61ad7 _public_6d61ad7
#define public_6d61ae2 _public_6d61ae2
#define public_6d61aed _public_6d61aed

PROC_DECLARE(0x6d61aa0, internal_6d61aa0, public_6d61aa0);
/* CHUNK of public_6d11c20 */
extern "C" NAKED register_t __cdecl internal_6d61aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_6d161e0
        public_6d61aab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp public_6d16410
        public_6d61ab6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3C
        jmp public_6d16640
        public_6d61ac1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x54
        jmp public_6d115e0
        public_6d61acc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d165e0
        public_6d61ad7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d163b0
        public_6d61ae2 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d16180
        public_6d61aed : nop
        mov eax, offset public_6d726e4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61aa0)
        ASM_EXPORT_ENTRY_FIRST(0x6d61aab, public_6d61aab)
        ASM_EXPORT_ENTRY(0x6d61ab6, public_6d61ab6)
        ASM_EXPORT_ENTRY(0x6d61ac1, public_6d61ac1)
        ASM_EXPORT_ENTRY(0x6d61acc, public_6d61acc)
        ASM_EXPORT_ENTRY(0x6d61ad7, public_6d61ad7)
        ASM_EXPORT_ENTRY(0x6d61ae2, public_6d61ae2)
        ASM_EXPORT_ENTRY_LAST(0x6d61aed, public_6d61aed)
    }
}

#undef public_6d61aab
#undef public_6d61ab6
#undef public_6d61ac1
#undef public_6d61acc
#undef public_6d61ad7
#undef public_6d61ae2
#undef public_6d61aed

#pragma init_seg(compiler)
extern "C" void const* const public_6d61aab = __AsmFindLabelExport(&internal_6d61aa0, 0x6d61aab);
extern "C" void const* const public_6d61ab6 = __AsmFindLabelExport(&internal_6d61aa0, 0x6d61ab6);
extern "C" void const* const public_6d61ac1 = __AsmFindLabelExport(&internal_6d61aa0, 0x6d61ac1);
extern "C" void const* const public_6d61acc = __AsmFindLabelExport(&internal_6d61aa0, 0x6d61acc);
extern "C" void const* const public_6d61ad7 = __AsmFindLabelExport(&internal_6d61aa0, 0x6d61ad7);
extern "C" void const* const public_6d61ae2 = __AsmFindLabelExport(&internal_6d61aa0, 0x6d61ae2);
extern "C" void const* const public_6d61aed = __AsmFindLabelExport(&internal_6d61aa0, 0x6d61aed);
