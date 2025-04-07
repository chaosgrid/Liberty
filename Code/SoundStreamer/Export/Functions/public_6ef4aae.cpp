#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4aae);
CLANG_FORWARD_PROC_SYMBOL(public_6efbc54);

#define public_6ef4ad6 _public_6ef4ad6

PROC_DECLARE(0x6ef4aae, internal_6ef4aae, public_6ef4aae);
extern "C" NAKED register_t __cdecl internal_6ef4aae()
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
/*FIXUP mov dword ptr ss : [ebp-4], offset public_6ef4ad6 @0x6ef4abf*/
  FIXUP push eax
  FIXUP lea eax, ds : [public_6ef4ad6]
  FIXUP mov dword ptr ss : [ebp-4], eax
  FIXUP pop eax
        push 0
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+8]
        call public_6efbc54
        public_6ef4ad6 : nop
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
        UNREACHABLE_TRAP(0x6ef4aae)
        ASM_EXPORT_ENTRY_SINGLE(0x6ef4ad6, public_6ef4ad6)
    }
}

#undef public_6ef4ad6

#pragma init_seg(compiler)
extern "C" void const* const public_6ef4ad6 = __AsmFindLabelExport(&internal_6ef4aae, 0x6ef4ad6);
