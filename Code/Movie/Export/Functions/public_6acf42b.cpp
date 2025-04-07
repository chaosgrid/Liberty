#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf42b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c8c);

#define public_6acf453 _public_6acf453

PROC_DECLARE(0x6acf42b, internal_6acf42b, public_6acf42b);
extern "C" NAKED register_t __cdecl internal_6acf42b()
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
/*FIXUP mov dword ptr ss : [ebp-4], offset public_6acf453 @0x6acf43c*/
  FIXUP push eax
  FIXUP lea eax, ds : [public_6acf453]
  FIXUP mov dword ptr ss : [ebp-4], eax
  FIXUP pop eax
        push 0
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+8]
        call public_6ad9c8c
        public_6acf453 : nop
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
        UNREACHABLE_TRAP(0x6acf42b)
        ASM_EXPORT_ENTRY_SINGLE(0x6acf453, public_6acf453)
    }
}

#undef public_6acf453

#pragma init_seg(compiler)
extern "C" void const* const public_6acf453 = __AsmFindLabelExport(&internal_6acf42b, 0x6acf453);
