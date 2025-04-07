#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1e56);
CLANG_FORWARD_PROC_SYMBOL(public_6db1eb4);
CLANG_FORWARD_PROC_SYMBOL(public_6db20ea);

#define public_6db1e7f _public_6db1e7f
#define public_6db1e92 _public_6db1e92
#define public_6db1e9c _public_6db1e9c
#define public_6db1e9f _public_6db1e9f

PROC_DECLARE(0x6db1e56, internal_6db1e56, public_6db1e56);
extern "C" NAKED register_t __cdecl internal_6db1e56()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6db6808 @0x6db1e5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db6808
/*FIXUP push offset _public_6db20ea @0x6db1e60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6db20ea
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
        public_6db1e7f : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6db1e9f
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6db1e7f
        public_6db1e92 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6db1eb4
        pop ecx
        ret 
        public_6db1e9c : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6db1e9f : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6db1e56)
        ASM_EXPORT_ENTRY_FIRST(0x6db1e92, public_6db1e92)
        ASM_EXPORT_ENTRY_LAST(0x6db1e9c, public_6db1e9c)
    }
}

#undef public_6db1e7f
#undef public_6db1e92
#undef public_6db1e9c
#undef public_6db1e9f

#pragma init_seg(compiler)
extern "C" void const* const public_6db1e92 = __AsmFindLabelExport(&internal_6db1e56, 0x6db1e92);
extern "C" void const* const public_6db1e9c = __AsmFindLabelExport(&internal_6db1e56, 0x6db1e9c);
