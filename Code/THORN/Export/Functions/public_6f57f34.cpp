#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57f34);
CLANG_FORWARD_PROC_SYMBOL(public_6f57fb4);
CLANG_FORWARD_PROC_SYMBOL(public_6f58342);

#define public_6f57f6b _public_6f57f6b
#define public_6f57f7b _public_6f57f7b
#define public_6f57f9c _public_6f57f9c
#define public_6f57fb3 _public_6f57fb3

PROC_DECLARE(0x6f57f34, internal_6f57f34, public_6f57f34);
extern "C" NAKED register_t __cdecl internal_6f57f34()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6f5b480 @0x6f57f39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5b480
/*FIXUP push offset _public_6f58342 @0x6f57f3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f58342
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
        public_6f57f6b : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6f57f7b
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6f57f6b
        public_6f57f7b : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6f57f9c
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6f57f9c : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6f57fb3
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6f57fb4
        public_6f57fb3 : nop
        ret 
        UNREACHABLE_TRAP(0x6f57f34)
        ASM_EXPORT_ENTRY_SINGLE(0x6f57f9c, public_6f57f9c)
    }
}

#undef public_6f57f6b
#undef public_6f57f7b
#undef public_6f57f9c
#undef public_6f57fb3

#pragma init_seg(compiler)
extern "C" void const* const public_6f57f9c = __AsmFindLabelExport(&internal_6f57f34, 0x6f57f9c);
