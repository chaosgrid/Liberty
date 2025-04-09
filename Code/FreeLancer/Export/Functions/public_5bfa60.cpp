#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfa6c _public_5bfa6c
#define public_5bfa7a _public_5bfa7a
#define public_5bfa88 _public_5bfa88
#define public_5bfa96 _public_5bfa96
#define public_5bfaa1 _public_5bfaa1
#define public_5bfaac _public_5bfaac
#define public_5bfab8 _public_5bfab8
#define public_5bfac4 _public_5bfac4

PROC_DECLARE(0x5bfa60, internal_5bfa60, public_5bfa60);
/* CHUNK of public_504e60 */
extern "C" NAKED register_t __cdecl internal_5bfa60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c6048]
        public_5bfa6c : nop
        mov eax, dword ptr ss : [ebp-0x1784]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfa7a : nop
        mov eax, dword ptr ss : [ebp-0x1784]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfa88 : nop
        mov eax, dword ptr ss : [ebp-0x1780]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfa96 : nop
        mov ecx, dword ptr ss : [ebp-0x1784]
        jmp public_420d10
        public_5bfaa1 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_40edf0
        public_5bfaac : nop
        mov ecx, dword ptr ss : [ebp-0x1734]
        jmp dword ptr ds : [public_5c7090]
        public_5bfab8 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5bfac4 : nop
        mov eax, offset public_5f99d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfa60)
        ASM_EXPORT_ENTRY_FIRST(0x5bfa6c, public_5bfa6c)
        ASM_EXPORT_ENTRY(0x5bfa7a, public_5bfa7a)
        ASM_EXPORT_ENTRY(0x5bfa88, public_5bfa88)
        ASM_EXPORT_ENTRY(0x5bfa96, public_5bfa96)
        ASM_EXPORT_ENTRY(0x5bfaa1, public_5bfaa1)
        ASM_EXPORT_ENTRY(0x5bfaac, public_5bfaac)
        ASM_EXPORT_ENTRY(0x5bfab8, public_5bfab8)
        ASM_EXPORT_ENTRY_LAST(0x5bfac4, public_5bfac4)
    }
}

#undef public_5bfa6c
#undef public_5bfa7a
#undef public_5bfa88
#undef public_5bfa96
#undef public_5bfaa1
#undef public_5bfaac
#undef public_5bfab8
#undef public_5bfac4

#pragma init_seg(compiler)
extern "C" void const* const public_5bfa6c = __AsmFindLabelExport(&internal_5bfa60, 0x5bfa6c);
extern "C" void const* const public_5bfa7a = __AsmFindLabelExport(&internal_5bfa60, 0x5bfa7a);
extern "C" void const* const public_5bfa88 = __AsmFindLabelExport(&internal_5bfa60, 0x5bfa88);
extern "C" void const* const public_5bfa96 = __AsmFindLabelExport(&internal_5bfa60, 0x5bfa96);
extern "C" void const* const public_5bfaa1 = __AsmFindLabelExport(&internal_5bfa60, 0x5bfaa1);
extern "C" void const* const public_5bfaac = __AsmFindLabelExport(&internal_5bfa60, 0x5bfaac);
extern "C" void const* const public_5bfab8 = __AsmFindLabelExport(&internal_5bfa60, 0x5bfab8);
extern "C" void const* const public_5bfac4 = __AsmFindLabelExport(&internal_5bfa60, 0x5bfac4);
