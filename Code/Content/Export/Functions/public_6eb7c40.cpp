#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7c40);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa43f);

#define public_6eb7c77 _public_6eb7c77
#define public_6eb7c8c _public_6eb7c8c
#define public_6eb7cc0 _public_6eb7cc0
#define public_6eb7ce7 _public_6eb7ce7

PROC_DECLARE(0x6eb7c40, internal_6eb7c40, public_6eb7c40);
/* CHUNK of public_6eb75a0 */
extern "C" NAKED register_t __cdecl internal_6eb7c40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6faa43f @0x6eb7c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa43f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ebp, dword ptr ds : [esi+0x60]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        lea ebx, ds:[esi+0x5C]
        mov dword ptr ss : [esp+0x20], 0
        je public_6eb7c8c
        public_6eb7c77 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6ecfe80
        cmp edi, ebp
        jne public_6eb7c77
        public_6eb7c8c : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fb479c
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 1
        call public_6f1cb40
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6eb7ce7
        mov edi, edi
        public_6eb7cc0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6eb7cc0
        public_6eb7ce7 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        pop edi
        mov dword ptr ds : [esi+0xC], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eb7c40)
        ASM_EXPORT_ENTRY_FIRST(0x6eb7c77, public_6eb7c77)
        ASM_EXPORT_ENTRY(0x6eb7c8c, public_6eb7c8c)
        ASM_EXPORT_ENTRY(0x6eb7cc0, public_6eb7cc0)
        ASM_EXPORT_ENTRY_LAST(0x6eb7ce7, public_6eb7ce7)
    }
}

#undef public_6eb7c77
#undef public_6eb7c8c
#undef public_6eb7cc0
#undef public_6eb7ce7

#pragma init_seg(compiler)
extern "C" void const* const public_6eb7c77 = __AsmFindLabelExport(&internal_6eb7c40, 0x6eb7c77);
extern "C" void const* const public_6eb7c8c = __AsmFindLabelExport(&internal_6eb7c40, 0x6eb7c8c);
extern "C" void const* const public_6eb7cc0 = __AsmFindLabelExport(&internal_6eb7c40, 0x6eb7cc0);
extern "C" void const* const public_6eb7ce7 = __AsmFindLabelExport(&internal_6eb7c40, 0x6eb7ce7);
