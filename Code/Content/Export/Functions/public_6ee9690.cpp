#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9690);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab8db);

#define public_6ee96d0 _public_6ee96d0
#define public_6ee96dc _public_6ee96dc
#define public_6ee96f0 _public_6ee96f0
#define public_6ee96fe _public_6ee96fe
#define public_6ee970e _public_6ee970e

PROC_DECLARE(0x6ee9690, internal_6ee9690, public_6ee9690);
/* CHUNK of public_6f5c9e0 */
extern "C" NAKED register_t __cdecl internal_6ee9690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fab8db @0x6ee9692*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab8db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6fb74b8
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0xC]
        xor ebp, ebp
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], ebp
        je public_6ee970e
        push ebx
        lea ebx, ds:[edi+4]
        lea esp, ss:[esp]
        public_6ee96d0 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebp
        je public_6ee96dc
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ee96dc : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, ebx
        cmp eax, ecx
        je public_6ee96fe
        mov edx, edi
        sub edx, ebx
        lea esp, ss:[esp]
        public_6ee96f0 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6ee96f0
        xor ebp, ebp
        public_6ee96fe : nop
        mov ecx, dword ptr ds : [esi+0xC]
        add ecx, 0xFFFFFFFC
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6ee96d0
        pop ebx
        public_6ee970e : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0x10], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ee9690)
        ASM_EXPORT_ENTRY_FIRST(0x6ee96d0, public_6ee96d0)
        ASM_EXPORT_ENTRY(0x6ee96dc, public_6ee96dc)
        ASM_EXPORT_ENTRY(0x6ee96f0, public_6ee96f0)
        ASM_EXPORT_ENTRY(0x6ee96fe, public_6ee96fe)
        ASM_EXPORT_ENTRY_LAST(0x6ee970e, public_6ee970e)
    }
}

#undef public_6ee96d0
#undef public_6ee96dc
#undef public_6ee96f0
#undef public_6ee96fe
#undef public_6ee970e

#pragma init_seg(compiler)
extern "C" void const* const public_6ee96d0 = __AsmFindLabelExport(&internal_6ee9690, 0x6ee96d0);
extern "C" void const* const public_6ee96dc = __AsmFindLabelExport(&internal_6ee9690, 0x6ee96dc);
extern "C" void const* const public_6ee96f0 = __AsmFindLabelExport(&internal_6ee9690, 0x6ee96f0);
extern "C" void const* const public_6ee96fe = __AsmFindLabelExport(&internal_6ee9690, 0x6ee96fe);
extern "C" void const* const public_6ee970e = __AsmFindLabelExport(&internal_6ee9690, 0x6ee970e);
