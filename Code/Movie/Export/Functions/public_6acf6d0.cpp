#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c8c);

#define public_6acf6e8 _public_6acf6e8

PROC_DECLARE(0x6acf6d0, internal_6acf6d0, public_6acf6d0);
extern "C" NAKED register_t __cdecl internal_6acf6d0()
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
/*FIXUP push offset public_6acf6e8 @0x6acf6db*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP lea eax, ds : [public_6acf6e8]
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push dword ptr ss : [ebp+8]
        call public_6ad9c8c
        public_6acf6e8 : nop
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6acf6d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6acf6e8, public_6acf6e8)
    }
}

#undef public_6acf6e8

#pragma init_seg(compiler)
extern "C" void const* const public_6acf6e8 = __AsmFindLabelExport(&internal_6acf6d0, 0x6acf6e8);
