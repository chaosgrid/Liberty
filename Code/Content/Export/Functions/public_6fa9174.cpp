#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa90b6);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9174);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9344);

#define public_6fa91a2 _public_6fa91a2
#define public_6fa91bd _public_6fa91bd
#define public_6fa91de _public_6fa91de
#define public_6fa91f5 _public_6fa91f5

PROC_DECLARE(0x6fa9174, internal_6fa9174, public_6fa9174);
extern "C" NAKED register_t __cdecl internal_6fa9174()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6fbd6f0 @0x6fa9179*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd6f0
/*FIXUP push offset _public_6fa9344 @0x6fa917e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6fa9344
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
        public_6fa91a2 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6fa91bd
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6fa91a2
        public_6fa91bd : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6fa91de
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_6fa91de : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6fa91f5
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6fa90b6
        public_6fa91f5 : nop
        ret 
        UNREACHABLE_TRAP(0x6fa9174)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa91de, public_6fa91de)
    }
}

#undef public_6fa91a2
#undef public_6fa91bd
#undef public_6fa91de
#undef public_6fa91f5

#pragma init_seg(compiler)
extern "C" void const* const public_6fa91de = __AsmFindLabelExport(&internal_6fa9174, 0x6fa91de);
