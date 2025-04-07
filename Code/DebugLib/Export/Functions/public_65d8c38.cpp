#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6fb3);
CLANG_FORWARD_PROC_SYMBOL(public_65d73a0);
CLANG_FORWARD_PROC_SYMBOL(public_65d8c38);
CLANG_FORWARD_PROC_SYMBOL(public_65d8e63);
CLANG_FORWARD_PROC_SYMBOL(public_65d9068);
CLANG_FORWARD_PROC_SYMBOL(public_65d90c9);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd203);
CLANG_FORWARD_PROC_SYMBOL(public_65dd21f);
CLANG_FORWARD_PROC_SYMBOL(public_65dd23b);

#define public_65d8cc6 _public_65d8cc6
#define public_65d8cd5 _public_65d8cd5
#define public_65d8d2f _public_65d8d2f
#define public_65d8d77 _public_65d8d77
#define public_65d8dbe _public_65d8dbe
#define public_65d8dd8 _public_65d8dd8
#define public_65d8ddd _public_65d8ddd
#define public_65d8de1 _public_65d8de1
#define public_65d8df0 _public_65d8df0
#define public_65d8df4 _public_65d8df4

PROC_DECLARE(0x65d8c38, internal_65d8c38, public_65d8c38);
extern "C" NAKED register_t __cdecl internal_65d8c38()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1660 @0x65d8c3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1660
/*FIXUP push offset _public_65dcf2c @0x65d8c42*/
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
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_65d8de1
        cmp byte ptr ds : [eax+8], 0
        je public_65d8de1
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_65d8de1
        mov edx, dword ptr ss : [ebp+0xC]
        lea edi, ds:[eax+edx+0xC]
        and dword ptr ss : [ebp-4], 0
        test byte ptr ds : [ecx], 8
        je public_65d8cd5
        mov esi, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [esi+0x18]
        call public_65dd203
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        push 1
        push edi
        call public_65dd21f
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        add ecx, 8
        push ecx
        public_65d8cc6 : nop
        push eax
        call public_65d8e63
        pop ecx
        pop ecx
        mov dword ptr ds : [edi], eax
        jmp public_65d8ddd
        public_65d8cd5 : nop
        mov esi, dword ptr ss : [ebp+0x14]
        test byte ptr ds : [esi], 1
        je public_65d8d2f
        mov ebx, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [ebx+0x18]
        call public_65dd203
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        push 1
        push edi
        call public_65dd21f
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        push dword ptr ds : [esi+0x14]
        push dword ptr ds : [ebx+0x18]
        push edi
        call public_65d73a0
        add esp, 0xC
        cmp dword ptr ds : [esi+0x14], 4
        jne public_65d8ddd
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_65d8ddd
        add esi, 8
        push esi
        jmp public_65d8cc6
        public_65d8d2f : nop
        cmp dword ptr ds : [esi+0x18], 0
        mov ebx, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [ebx+0x18]
        jne public_65d8d77
        call public_65dd203
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        push 1
        push edi
        call public_65dd21f
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        push dword ptr ds : [esi+0x14]
        add esi, 8
        push esi
        push dword ptr ds : [ebx+0x18]
        call public_65d8e63
        pop ecx
        pop ecx
        push eax
        push edi
        call public_65d73a0
        add esp, 0xC
        jmp public_65d8ddd
        public_65d8d77 : nop
        call public_65dd203
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        push 1
        push edi
        call public_65dd21f
        pop ecx
        pop ecx
        test eax, eax
        je public_65d8dd8
        push dword ptr ds : [esi+0x18]
        call public_65dd23b
        pop ecx
        test eax, eax
        je public_65d8dd8
        test byte ptr ds : [esi], 4
        je public_65d8dbe
        push 1
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [ebx+0x18]
        call public_65d8e63
        pop ecx
        pop ecx
        push eax
        push dword ptr ds : [esi+0x18]
        push edi
        call public_65d6fb3
        jmp public_65d8ddd
        public_65d8dbe : nop
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [ebx+0x18]
        call public_65d8e63
        pop ecx
        pop ecx
        push eax
        push dword ptr ds : [esi+0x18]
        push edi
        call public_65d6fb3
        jmp public_65d8ddd
        public_65d8dd8 : nop
        call public_65d90c9
        public_65d8ddd : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        public_65d8de1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_65d8df0 : nop
        push 1
        pop eax
        ret 
        public_65d8df4 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        jmp public_65d9068
        UNREACHABLE_TRAP(0x65d8c38)
        ASM_EXPORT_ENTRY_FIRST(0x65d8df0, public_65d8df0)
        ASM_EXPORT_ENTRY_LAST(0x65d8df4, public_65d8df4)
    }
}

#undef public_65d8cc6
#undef public_65d8cd5
#undef public_65d8d2f
#undef public_65d8d77
#undef public_65d8dbe
#undef public_65d8dd8
#undef public_65d8ddd
#undef public_65d8de1
#undef public_65d8df0
#undef public_65d8df4

#pragma init_seg(compiler)
extern "C" void const* const public_65d8df0 = __AsmFindLabelExport(&internal_65d8c38, 0x65d8df0);
extern "C" void const* const public_65d8df4 = __AsmFindLabelExport(&internal_65d8c38, 0x65d8df4);
