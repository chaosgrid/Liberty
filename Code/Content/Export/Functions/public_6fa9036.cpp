#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa9036);
CLANG_FORWARD_PROC_SYMBOL(public_6fa90b6);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9344);

#define public_6fa906d _public_6fa906d
#define public_6fa907d _public_6fa907d
#define public_6fa909e _public_6fa909e
#define public_6fa90b5 _public_6fa90b5

PROC_DECLARE(0x6fa9036, internal_6fa9036, public_6fa9036);
extern "C" NAKED register_t __cdecl internal_6fa9036()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6fbd6d0 @0x6fa903b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd6d0
/*FIXUP push offset _public_6fa9344 @0x6fa9040*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6fa9344
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
        public_6fa906d : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6fa907d
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6fa906d
        public_6fa907d : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6fa909e
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6fa909e : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6fa90b5
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6fa90b6
        public_6fa90b5 : nop
        ret 
        UNREACHABLE_TRAP(0x6fa9036)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa909e, public_6fa909e)
    }
}

#undef public_6fa906d
#undef public_6fa907d
#undef public_6fa909e
#undef public_6fa90b5

#pragma init_seg(compiler)
extern "C" void const* const public_6fa909e = __AsmFindLabelExport(&internal_6fa9036, 0x6fa909e);
