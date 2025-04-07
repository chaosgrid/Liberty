#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dd6);
CLANG_FORWARD_PROC_SYMBOL(public_6db1e56);
CLANG_FORWARD_PROC_SYMBOL(public_6db20ea);

#define public_6db1e0d _public_6db1e0d
#define public_6db1e1d _public_6db1e1d
#define public_6db1e3e _public_6db1e3e
#define public_6db1e55 _public_6db1e55

PROC_DECLARE(0x6db1dd6, internal_6db1dd6, public_6db1dd6);
extern "C" NAKED register_t __cdecl internal_6db1dd6()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6db67f8 @0x6db1ddb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db67f8
/*FIXUP push offset _public_6db20ea @0x6db1de0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6db20ea
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
        public_6db1e0d : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6db1e1d
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6db1e0d
        public_6db1e1d : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6db1e3e
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6db1e3e : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6db1e55
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6db1e56
        public_6db1e55 : nop
        ret 
        UNREACHABLE_TRAP(0x6db1dd6)
        ASM_EXPORT_ENTRY_SINGLE(0x6db1e3e, public_6db1e3e)
    }
}

#undef public_6db1e0d
#undef public_6db1e1d
#undef public_6db1e3e
#undef public_6db1e55

#pragma init_seg(compiler)
extern "C" void const* const public_6db1e3e = __AsmFindLabelExport(&internal_6db1dd6, 0x6db1e3e);
