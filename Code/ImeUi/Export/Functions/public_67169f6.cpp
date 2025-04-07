#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67169f6);
CLANG_FORWARD_PROC_SYMBOL(public_6716a76);
CLANG_FORWARD_PROC_SYMBOL(public_6716c6e);

#define public_6716a2d _public_6716a2d
#define public_6716a3d _public_6716a3d
#define public_6716a5e _public_6716a5e
#define public_6716a75 _public_6716a75

PROC_DECLARE(0x67169f6, internal_67169f6, public_67169f6);
extern "C" NAKED register_t __cdecl internal_67169f6()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_67178e8 @0x67169fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67178e8
/*FIXUP push offset _public_6716c6e @0x6716a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6716c6e
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        and dword ptr ss : [ebp-0x1C], 0
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, esi
        imul eax, dword ptr ss : [ebp+0x10]
        add dword ptr ss : [ebp+8], eax
        and dword ptr ss : [ebp-4], 0
        public_6716a2d : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6716a3d
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6716a2d
        public_6716a3d : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6716a5e
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6716a5e : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6716a75
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6716a76
        public_6716a75 : nop
        ret 
        UNREACHABLE_TRAP(0x67169f6)
        ASM_EXPORT_ENTRY_SINGLE(0x6716a5e, public_6716a5e)
    }
}

#undef public_6716a2d
#undef public_6716a3d
#undef public_6716a5e
#undef public_6716a75

#pragma init_seg(compiler)
extern "C" void const* const public_6716a5e = __AsmFindLabelExport(&internal_67169f6, 0x6716a5e);
