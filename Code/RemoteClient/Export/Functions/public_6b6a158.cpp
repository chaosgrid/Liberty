#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a158);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a1d8);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a442);

#define public_6b6a18f _public_6b6a18f
#define public_6b6a19f _public_6b6a19f
#define public_6b6a1c0 _public_6b6a1c0
#define public_6b6a1d7 _public_6b6a1d7

PROC_DECLARE(0x6b6a158, internal_6b6a158, public_6b6a158);
extern "C" NAKED register_t __cdecl internal_6b6a158()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6b6eac8 @0x6b6a15d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6eac8
/*FIXUP push offset _public_6b6a442 @0x6b6a162*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b6a442
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
        public_6b6a18f : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6b6a19f
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6b6a18f
        public_6b6a19f : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6b6a1c0
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6b6a1c0 : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6b6a1d7
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6b6a1d8
        public_6b6a1d7 : nop
        ret 
        UNREACHABLE_TRAP(0x6b6a158)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a1c0, public_6b6a1c0)
    }
}

#undef public_6b6a18f
#undef public_6b6a19f
#undef public_6b6a1c0
#undef public_6b6a1d7

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a1c0 = __AsmFindLabelExport(&internal_6b6a158, 0x6b6a1c0);
