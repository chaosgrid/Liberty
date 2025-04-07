#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2590);
CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d25a0 _public_65d25a0
#define public_65d25d0 _public_65d25d0

PROC_DECLARE(0x65d2590, internal_65d2590, public_65d2590);
/* CHUNK of public_65d10c0 */
extern "C" NAKED register_t __cdecl internal_65d2590()
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
        je public_65d25d0
        push esi
        public_65d25a0 : nop
        mov esi, edi
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65d2630
        push esi
        call public_65d6cb8
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_65d25a0
        pop esi
        public_65d25d0 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_65d6cb8
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d2590)
        ASM_EXPORT_ENTRY_FIRST(0x65d25a0, public_65d25a0)
        ASM_EXPORT_ENTRY_LAST(0x65d25d0, public_65d25d0)
    }
}

#undef public_65d25a0
#undef public_65d25d0

#pragma init_seg(compiler)
extern "C" void const* const public_65d25a0 = __AsmFindLabelExport(&internal_65d2590, 0x65d25a0);
extern "C" void const* const public_65d25d0 = __AsmFindLabelExport(&internal_65d2590, 0x65d25d0);
