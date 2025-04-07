#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7260);
CLANG_FORWARD_PROC_SYMBOL(public_65dfe1e);

#define public_65d7278 _public_65d7278

PROC_DECLARE(0x65d7260, internal_65d7260, public_65d7260);
extern "C" NAKED register_t __cdecl internal_65d7260()
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
/*FIXUP push offset public_65d7278 @0x65d726b*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP lea eax, ds : [public_65d7278]
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push dword ptr ss : [ebp+8]
        call public_65dfe1e
        public_65d7278 : nop
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d7260)
        ASM_EXPORT_ENTRY_SINGLE(0x65d7278, public_65d7278)
    }
}

#undef public_65d7278

#pragma init_seg(compiler)
extern "C" void const* const public_65d7278 = __AsmFindLabelExport(&internal_65d7260, 0x65d7278);
