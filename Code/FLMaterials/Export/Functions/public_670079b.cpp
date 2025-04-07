#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_670079b);
CLANG_FORWARD_PROC_SYMBOL(public_67007f9);
CLANG_FORWARD_PROC_SYMBOL(public_6700a7e);

#define public_67007c4 _public_67007c4
#define public_67007d7 _public_67007d7
#define public_67007e1 _public_67007e1
#define public_67007e4 _public_67007e4

PROC_DECLARE(0x670079b, internal_670079b, public_670079b);
extern "C" NAKED register_t __cdecl internal_670079b()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6703200 @0x67007a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703200
/*FIXUP push offset _public_6700a7e @0x67007a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6700a7e
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
        public_67007c4 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_67007e4
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_67007c4
        public_67007d7 : nop
        push dword ptr ss : [ebp-0x14]
        call public_67007f9
        pop ecx
        ret 
        public_67007e1 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_67007e4 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x670079b)
        ASM_EXPORT_ENTRY_FIRST(0x67007d7, public_67007d7)
        ASM_EXPORT_ENTRY_LAST(0x67007e1, public_67007e1)
    }
}

#undef public_67007c4
#undef public_67007d7
#undef public_67007e1
#undef public_67007e4

#pragma init_seg(compiler)
extern "C" void const* const public_67007d7 = __AsmFindLabelExport(&internal_670079b, 0x67007d7);
extern "C" void const* const public_67007e1 = __AsmFindLabelExport(&internal_670079b, 0x67007e1);
