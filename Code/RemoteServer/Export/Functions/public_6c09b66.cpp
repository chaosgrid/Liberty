#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09b66);
CLANG_FORWARD_PROC_SYMBOL(public_6c09be6);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ef4);

#define public_6c09b9d _public_6c09b9d
#define public_6c09bad _public_6c09bad
#define public_6c09bce _public_6c09bce
#define public_6c09be5 _public_6c09be5

PROC_DECLARE(0x6c09b66, internal_6c09b66, public_6c09b66);
extern "C" NAKED register_t __cdecl internal_6c09b66()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6c0e668 @0x6c09b6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e668
/*FIXUP push offset _public_6c09ef4 @0x6c09b70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c09ef4
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
        public_6c09b9d : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6c09bad
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6c09b9d
        public_6c09bad : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6c09bce
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6c09bce : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6c09be5
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6c09be6
        public_6c09be5 : nop
        ret 
        UNREACHABLE_TRAP(0x6c09b66)
        ASM_EXPORT_ENTRY_SINGLE(0x6c09bce, public_6c09bce)
    }
}

#undef public_6c09b9d
#undef public_6c09bad
#undef public_6c09bce
#undef public_6c09be5

#pragma init_seg(compiler)
extern "C" void const* const public_6c09bce = __AsmFindLabelExport(&internal_6c09b66, 0x6c09bce);
