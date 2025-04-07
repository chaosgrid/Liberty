#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6fba);
CLANG_FORWARD_PROC_SYMBOL(public_65dfe1e);

#define public_65d6fe2 _public_65d6fe2

PROC_DECLARE(0x65d6fba, internal_65d6fba, public_65d6fba);
extern "C" NAKED register_t __cdecl internal_65d6fba()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr fs : [0]
        mov dword ptr ss : [ebp-8], eax
/*FIXUP mov dword ptr ss : [ebp-4], offset public_65d6fe2 @0x65d6fcb*/
  FIXUP push eax
  FIXUP lea eax, ds : [public_65d6fe2]
  FIXUP mov dword ptr ss : [ebp-4], eax
  FIXUP pop eax
        push 0
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+8]
        call public_65dfe1e
        public_65d6fe2 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax+4]
        and al, 0xFD
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr fs : [0]
        mov ebx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ebx], eax
        mov dword ptr fs : [0], ebx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 8
        UNREACHABLE_TRAP(0x65d6fba)
        ASM_EXPORT_ENTRY_SINGLE(0x65d6fe2, public_65d6fe2)
    }
}

#undef public_65d6fe2

#pragma init_seg(compiler)
extern "C" void const* const public_65d6fe2 = __AsmFindLabelExport(&internal_65d6fba, 0x65d6fe2);
