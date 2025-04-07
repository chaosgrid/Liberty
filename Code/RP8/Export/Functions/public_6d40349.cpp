#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40349);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_PROC_SYMBOL(public_6d5d2db);

#define public_6d40383 _public_6d40383
#define public_6d4038f _public_6d4038f
#define public_6d40395 _public_6d40395
#define public_6d4039a _public_6d4039a
#define public_6d403a5 _public_6d403a5
#define public_6d403c7 _public_6d403c7
#define public_6d403dc _public_6d403dc
#define public_6d403df _public_6d403df

PROC_DECLARE(0x6d40349, internal_6d40349, public_6d40349);
extern "C" NAKED register_t __cdecl internal_6d40349()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, offset _public_6d5d2db
        call public_6d5cd8c
        push ecx
        sub esp, 0x2C
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x10], esp
        and dword ptr ss : [ebp-0x14], 0
        mov esi, offset public_6d5f924
        lea edi, ss:[ebp-0x24]
        movsd 
        movsd 
        movsd 
        movsb 
        and dword ptr ss : [ebp-4], 0
        xor eax, eax
        cpuid 
        mov dword ptr ss : [ebp-0x2C], eax
        mov dword ptr ss : [ebp-0x38], ebx
        mov dword ptr ss : [ebp-0x34], edx
        mov dword ptr ss : [ebp-0x30], ecx
        jmp public_6d4038f
        public_6d40383 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x3C], eax
/*FIXUP mov eax, offset public_6d40395 @0x6d40389*/
  FIXUP lea eax, ds : [public_6d40395]
        ret 
        public_6d4038f : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6d4039a
        public_6d40395 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        jmp public_6d403df
        public_6d4039a : nop
        cmp dword ptr ss : [ebp-0x2C], 0
        jne public_6d403a5
        mov eax, dword ptr ss : [ebp-0x14]
        jmp public_6d403df
        public_6d403a5 : nop
        mov eax, 1
        cpuid 
        mov dword ptr ss : [ebp-0x2C], eax
        mov dword ptr ss : [ebp-0x28], edx
        mov eax, dword ptr ss : [ebp-0x28]
        and eax, 0x2000000
        test eax, eax
        je public_6d403c7
        mov eax, dword ptr ss : [ebp-0x14]
        or eax, 4
        mov dword ptr ss : [ebp-0x14], eax
        public_6d403c7 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        and eax, 0x4000000
        test eax, eax
        je public_6d403dc
        mov eax, dword ptr ss : [ebp-0x14]
        or eax, 8
        mov dword ptr ss : [ebp-0x14], eax
        public_6d403dc : nop
        mov eax, dword ptr ss : [ebp-0x14]
        public_6d403df : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d40349)
        ASM_EXPORT_ENTRY_FIRST(0x6d40383, public_6d40383)
        ASM_EXPORT_ENTRY_LAST(0x6d40395, public_6d40395)
    }
}

#undef public_6d40383
#undef public_6d4038f
#undef public_6d40395
#undef public_6d4039a
#undef public_6d403a5
#undef public_6d403c7
#undef public_6d403dc
#undef public_6d403df

#pragma init_seg(compiler)
extern "C" void const* const public_6d40383 = __AsmFindLabelExport(&internal_6d40349, 0x6d40383);
extern "C" void const* const public_6d40395 = __AsmFindLabelExport(&internal_6d40349, 0x6d40395);
