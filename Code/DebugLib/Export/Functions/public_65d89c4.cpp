#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d89c4);
CLANG_FORWARD_PROC_SYMBOL(public_65d8a62);
CLANG_FORWARD_PROC_SYMBOL(public_65d8e90);
CLANG_FORWARD_PROC_SYMBOL(public_65d90c9);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65d89f6 _public_65d89f6
#define public_65d8a05 _public_65d8a05
#define public_65d8a0a _public_65d8a0a
#define public_65d8a25 _public_65d8a25
#define public_65d8a2b _public_65d8a2b
#define public_65d8a35 _public_65d8a35
#define public_65d8a45 _public_65d8a45
#define public_65d8a50 _public_65d8a50

PROC_DECLARE(0x65d89c4, internal_65d89c4, public_65d89c4);
extern "C" NAKED register_t __cdecl internal_65d89c4()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1638 @0x65d89c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1638
/*FIXUP push offset _public_65dcf2c @0x65d89ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp-0x1C], esi
        mov edi, dword ptr ss : [ebp+0x10]
        public_65d89f6 : nop
        cmp esi, dword ptr ss : [ebp+0x14]
        je public_65d8a50
        cmp esi, 0xFFFFFFFF
        jle public_65d8a05
        cmp esi, dword ptr ds : [edi+4]
        jl public_65d8a0a
        public_65d8a05 : nop
        call public_65d90c9
        public_65d8a0a : nop
        and dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax+esi*8+4]
        test eax, eax
        je public_65d8a25
        push 0x103
        push ebx
        push eax
        call public_65d8e90
        public_65d8a25 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_65d8a45
        public_65d8a2b : nop
        push dword ptr ss : [ebp-0x14]
        call public_65d8a62
        pop ecx
        ret 
        public_65d8a35 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov edi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp-0x1C]
        public_65d8a45 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax+esi*8]
        mov dword ptr ss : [ebp-0x1C], esi
        jmp public_65d89f6
        public_65d8a50 : nop
        mov dword ptr ds : [ebx+8], esi
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d89c4)
        ASM_EXPORT_ENTRY_FIRST(0x65d8a2b, public_65d8a2b)
        ASM_EXPORT_ENTRY_LAST(0x65d8a35, public_65d8a35)
    }
}

#undef public_65d89f6
#undef public_65d8a05
#undef public_65d8a0a
#undef public_65d8a25
#undef public_65d8a2b
#undef public_65d8a35
#undef public_65d8a45
#undef public_65d8a50

#pragma init_seg(compiler)
extern "C" void const* const public_65d8a2b = __AsmFindLabelExport(&internal_65d89c4, 0x65d8a2b);
extern "C" void const* const public_65d8a35 = __AsmFindLabelExport(&internal_65d89c4, 0x65d8a35);
