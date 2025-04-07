#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63272e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63272f0 _public_63272f0
#define public_6327308 _public_6327308
#define public_6327357 _public_6327357
#define public_6327370 _public_6327370
#define public_632737d _public_632737d

PROC_DECLARE(0x63272e0, internal_63272e0, public_63272e0);
/* CHUNK of public_6326600 */
extern "C" NAKED register_t __cdecl internal_63272e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_632737d
        push ebp
        push edi
        public_63272f0 : nop
        mov edi, dword ptr ds : [esi+0xC]
        add edi, 8
        dec eax
        test eax, eax
        mov dword ptr ds : [esi+0xC], edi
        mov ecx, edi
        mov dword ptr ds : [esi+0x2C], eax
        je public_6327308
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6327370
        public_6327308 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [eax]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        lea ebp, ds:[esi+4]
        jne public_6327357
        xor eax, eax
        mov dword ptr ss : [ebp], eax
        xor ecx, ecx
        mov dword ptr ss : [ebp+4], ecx
        xor edx, edx
        mov dword ptr ss : [ebp+8], edx
        xor edi, edi
        mov dword ptr ss : [ebp+0xC], edi
        lea ebp, ds:[esi+0x14]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        push eax
        mov dword ptr ss : [ebp+0xC], edi
        call public_6391d5a
        add esp, 4
        jmp public_6327370
        public_6327357 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ss : [ebp+4], edx
        mov edi, ecx
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], eax
        public_6327370 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jne public_63272f0
        pop edi
        pop ebp
        public_632737d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63272e0)
        ASM_EXPORT_ENTRY_FIRST(0x63272f0, public_63272f0)
        ASM_EXPORT_ENTRY(0x6327308, public_6327308)
        ASM_EXPORT_ENTRY(0x6327357, public_6327357)
        ASM_EXPORT_ENTRY(0x6327370, public_6327370)
        ASM_EXPORT_ENTRY_LAST(0x632737d, public_632737d)
    }
}

#undef public_63272f0
#undef public_6327308
#undef public_6327357
#undef public_6327370
#undef public_632737d

#pragma init_seg(compiler)
extern "C" void const* const public_63272f0 = __AsmFindLabelExport(&internal_63272e0, 0x63272f0);
extern "C" void const* const public_6327308 = __AsmFindLabelExport(&internal_63272e0, 0x6327308);
extern "C" void const* const public_6327357 = __AsmFindLabelExport(&internal_63272e0, 0x6327357);
extern "C" void const* const public_6327370 = __AsmFindLabelExport(&internal_63272e0, 0x6327370);
extern "C" void const* const public_632737d = __AsmFindLabelExport(&internal_63272e0, 0x632737d);
