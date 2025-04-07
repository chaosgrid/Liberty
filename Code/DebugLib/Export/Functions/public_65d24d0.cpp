#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d24d0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d24e0 _public_65d24e0
#define public_65d2507 _public_65d2507
#define public_65d251c _public_65d251c

PROC_DECLARE(0x65d24d0, internal_65d24d0, public_65d24d0);
/* CHUNK of public_65d1b70 */
extern "C" NAKED register_t __cdecl internal_65d24d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, ecx
        push ebp
        push edi
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_65d251c
        push esi
        public_65d24e0 : nop
        mov esi, edi
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_65d2507
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_65d2507 : nop
        push esi
        call public_65d6cb8
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_65d24e0
        pop esi
        public_65d251c : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_65d6cb8
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d24d0)
        ASM_EXPORT_ENTRY_FIRST(0x65d24e0, public_65d24e0)
        ASM_EXPORT_ENTRY(0x65d2507, public_65d2507)
        ASM_EXPORT_ENTRY_LAST(0x65d251c, public_65d251c)
    }
}

#undef public_65d24e0
#undef public_65d2507
#undef public_65d251c

#pragma init_seg(compiler)
extern "C" void const* const public_65d24e0 = __AsmFindLabelExport(&internal_65d24d0, 0x65d24e0);
extern "C" void const* const public_65d2507 = __AsmFindLabelExport(&internal_65d24d0, 0x65d2507);
extern "C" void const* const public_65d251c = __AsmFindLabelExport(&internal_65d24d0, 0x65d251c);
