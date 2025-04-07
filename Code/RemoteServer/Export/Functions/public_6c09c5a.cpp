#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09be6);
CLANG_FORWARD_PROC_SYMBOL(public_6c09c5a);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ef4);

#define public_6c09c88 _public_6c09c88
#define public_6c09ca3 _public_6c09ca3
#define public_6c09cc4 _public_6c09cc4
#define public_6c09cdb _public_6c09cdb

PROC_DECLARE(0x6c09c5a, internal_6c09c5a, public_6c09c5a);
extern "C" NAKED register_t __cdecl internal_6c09c5a()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6c0e688 @0x6c09c5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e688
/*FIXUP push offset _public_6c09ef4 @0x6c09c64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c09ef4
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        xor eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-0x1C], eax
        public_6c09c88 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6c09ca3
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6c09c88
        public_6c09ca3 : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6c09cc4
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_6c09cc4 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6c09cdb
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6c09be6
        public_6c09cdb : nop
        ret 
        UNREACHABLE_TRAP(0x6c09c5a)
        ASM_EXPORT_ENTRY_SINGLE(0x6c09cc4, public_6c09cc4)
    }
}

#undef public_6c09c88
#undef public_6c09ca3
#undef public_6c09cc4
#undef public_6c09cdb

#pragma init_seg(compiler)
extern "C" void const* const public_6c09cc4 = __AsmFindLabelExport(&internal_6c09c5a, 0x6c09cc4);
