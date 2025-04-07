#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_48a130);

#define public_48a150 _public_48a150
#define public_48a163 _public_48a163
#define public_48a172 _public_48a172

PROC_DECLARE(0x48a130, internal_48a130, public_48a130);
/* CHUNK of public_45a140 */
extern "C" NAKED register_t __cdecl internal_48a130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push edi
        mov edi, dword ptr ds : [public_671ff4]
        test edi, edi
        je public_48a172
        mov byte ptr ds : [public_67dcc8], 0
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_48a163
        push esi
        lea ebx, ds:[ebx]
        public_48a150 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_48a150
        pop esi
        public_48a163 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_48a172 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x48a130)
        ASM_EXPORT_ENTRY_FIRST(0x48a150, public_48a150)
        ASM_EXPORT_ENTRY(0x48a163, public_48a163)
        ASM_EXPORT_ENTRY_LAST(0x48a172, public_48a172)
    }
}

#undef public_48a150
#undef public_48a163
#undef public_48a172

#pragma init_seg(compiler)
extern "C" void const* const public_48a150 = __AsmFindLabelExport(&internal_48a130, 0x48a150);
extern "C" void const* const public_48a163 = __AsmFindLabelExport(&internal_48a130, 0x48a163);
extern "C" void const* const public_48a172 = __AsmFindLabelExport(&internal_48a130, 0x48a172);
