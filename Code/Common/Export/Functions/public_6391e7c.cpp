#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391e7c);
CLANG_FORWARD_PROC_SYMBOL(public_6391eda);
CLANG_FORWARD_PROC_SYMBOL(public_6392128);

#define public_6391ea5 _public_6391ea5
#define public_6391eb8 _public_6391eb8
#define public_6391ec2 _public_6391ec2
#define public_6391ec5 _public_6391ec5

PROC_DECLARE(0x6391e7c, internal_6391e7c, public_6391e7c);
extern "C" NAKED register_t __cdecl internal_6391e7c()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_63a5aa0 @0x6391e81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a5aa0
/*FIXUP push offset _public_6392128 @0x6391e86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6392128
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
        public_6391ea5 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6391ec5
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6391ea5
        public_6391eb8 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6391eda
        pop ecx
        ret 
        public_6391ec2 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6391ec5 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6391e7c)
        ASM_EXPORT_ENTRY_FIRST(0x6391eb8, public_6391eb8)
        ASM_EXPORT_ENTRY_LAST(0x6391ec2, public_6391ec2)
    }
}

#undef public_6391ea5
#undef public_6391eb8
#undef public_6391ec2
#undef public_6391ec5

#pragma init_seg(compiler)
extern "C" void const* const public_6391eb8 = __AsmFindLabelExport(&internal_6391e7c, 0x6391eb8);
extern "C" void const* const public_6391ec2 = __AsmFindLabelExport(&internal_6391e7c, 0x6391ec2);
