#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4d50);
CLANG_FORWARD_PROC_SYMBOL(public_6efbc54);

#define public_6ef4d68 _public_6ef4d68

PROC_DECLARE(0x6ef4d50, internal_6ef4d50, public_6ef4d50);
extern "C" NAKED register_t __cdecl internal_6ef4d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        push ebp
        push 0
        push 0
/*FIXUP push offset public_6ef4d68 @0x6ef4d5b*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP lea eax, ds : [public_6ef4d68]
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push dword ptr ss : [ebp+8]
        call public_6efbc54
        public_6ef4d68 : nop
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef4d50)
        ASM_EXPORT_ENTRY_SINGLE(0x6ef4d68, public_6ef4d68)
    }
}

#undef public_6ef4d68

#pragma init_seg(compiler)
extern "C" void const* const public_6ef4d68 = __AsmFindLabelExport(&internal_6ef4d50, 0x6ef4d68);
