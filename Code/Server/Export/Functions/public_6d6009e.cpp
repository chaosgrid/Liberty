#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d6009e);
CLANG_FORWARD_PROC_SYMBOL(public_6d600fc);
CLANG_FORWARD_PROC_SYMBOL(public_6d6022a);

#define public_6d600c7 _public_6d600c7
#define public_6d600da _public_6d600da
#define public_6d600e4 _public_6d600e4
#define public_6d600e7 _public_6d600e7

PROC_DECLARE(0x6d6009e, internal_6d6009e, public_6d6009e);
extern "C" NAKED register_t __cdecl internal_6d6009e()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6d6bbe0 @0x6d600a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bbe0
/*FIXUP push offset _public_6d6022a @0x6d600a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d6022a
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
        public_6d600c7 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6d600e7
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6d600c7
        public_6d600da : nop
        push dword ptr ss : [ebp-0x14]
        call public_6d600fc
        pop ecx
        ret 
        public_6d600e4 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6d600e7 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d6009e)
        ASM_EXPORT_ENTRY_FIRST(0x6d600da, public_6d600da)
        ASM_EXPORT_ENTRY_LAST(0x6d600e4, public_6d600e4)
    }
}

#undef public_6d600c7
#undef public_6d600da
#undef public_6d600e4
#undef public_6d600e7

#pragma init_seg(compiler)
extern "C" void const* const public_6d600da = __AsmFindLabelExport(&internal_6d6009e, 0x6d600da);
extern "C" void const* const public_6d600e4 = __AsmFindLabelExport(&internal_6d6009e, 0x6d600e4);
