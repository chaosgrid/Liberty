#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716a76);
CLANG_FORWARD_PROC_SYMBOL(public_6716ad4);
CLANG_FORWARD_PROC_SYMBOL(public_6716c6e);

#define public_6716a9f _public_6716a9f
#define public_6716ab2 _public_6716ab2
#define public_6716abc _public_6716abc
#define public_6716abf _public_6716abf

PROC_DECLARE(0x6716a76, internal_6716a76, public_6716a76);
extern "C" NAKED register_t __cdecl internal_6716a76()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_67178f8 @0x6716a7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67178f8
/*FIXUP push offset _public_6716c6e @0x6716a80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716c6e
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        and dword ptr ss : [ebp-4], 0
        public_6716a9f : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6716abf
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6716a9f
        public_6716ab2 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6716ad4
        pop ecx
        ret 
        public_6716abc : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6716abf : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6716a76)
        ASM_EXPORT_ENTRY_FIRST(0x6716ab2, public_6716ab2)
        ASM_EXPORT_ENTRY_LAST(0x6716abc, public_6716abc)
    }
}

#undef public_6716a9f
#undef public_6716ab2
#undef public_6716abc
#undef public_6716abf

#pragma init_seg(compiler)
extern "C" void const* const public_6716ab2 = __AsmFindLabelExport(&internal_6716a76, 0x6716ab2);
extern "C" void const* const public_6716abc = __AsmFindLabelExport(&internal_6716a76, 0x6716abc);
