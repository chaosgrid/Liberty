#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea90f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9a1b);

#define public_6ea9120 _public_6ea9120
#define public_6ea9147 _public_6ea9147

PROC_DECLARE(0x6ea90f0, internal_6ea90f0, public_6ea90f0);
/* CHUNK of public_6ea8f80 */
extern "C" NAKED register_t __cdecl internal_6ea90f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fa9a1b @0x6ea90f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9a1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [ebx+8]
        xor ebp, ebp
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], esi
        je public_6ea9147
        lea esp, ss:[esp]
        public_6ea9120 : nop
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6eec8d0
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6eec8d0
        add esi, 0x28
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ea9120
        public_6ea9147 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [ebx+0xC], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ea90f0)
        ASM_EXPORT_ENTRY_FIRST(0x6ea9120, public_6ea9120)
        ASM_EXPORT_ENTRY_LAST(0x6ea9147, public_6ea9147)
    }
}

#undef public_6ea9120
#undef public_6ea9147

#pragma init_seg(compiler)
extern "C" void const* const public_6ea9120 = __AsmFindLabelExport(&internal_6ea90f0, 0x6ea9120);
extern "C" void const* const public_6ea9147 = __AsmFindLabelExport(&internal_6ea90f0, 0x6ea9147);
