#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624789e);

#define public_620c0ac _public_620c0ac
#define public_620c0bf _public_620c0bf
#define public_620c0d4 _public_620c0d4
#define public_620c117 _public_620c117
#define public_620c127 _public_620c127
#define public_620c146 _public_620c146

PROC_DECLARE(0x620c070, internal_620c070, public_620c070);
/* CHUNK of public_6204670 */
extern "C" NAKED register_t __cdecl internal_620c070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_624789e @0x620c072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624789e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x18], 1
        test eax, eax
        je public_620c0ac
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], 0
        public_620c0ac : nop
        push ebx
        mov ebx, dword ptr ds : [esi+0x50]
        push ebp
        lea ebp, ds:[esi+0x4C]
        mov edi, dword ptr ds : [ebx]
        mov byte ptr ss : [esp+0x20], 0
        cmp edi, ebx
        je public_620c0d4
        public_620c0bf : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov ecx, ebp
        call public_620c160
        cmp edi, ebx
        jne public_620c0bf
        public_620c0d4 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        xor edi, edi
        add esp, 4
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov ebp, offset public_624bd84
        mov ebx, offset public_624bd80
        mov dword ptr ds : [esi+0x28], ebp
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], 2
        mov dword ptr ds : [esi+0x30], ebx
        je public_620c117
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, edi
        je public_620c117
        push eax
        call public_62460e0
        add esp, 4
        public_620c117 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, edi
        je public_620c127
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], edi
        public_620c127 : nop
        mov dword ptr ds : [esi+4], ebp
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], ebx
        cmp eax, edi
        pop ebp
        pop ebx
        je public_620c146
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, edi
        je public_620c146
        push esi
        call public_62460e0
        add esp, 4
        public_620c146 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x620c070)
        ASM_EXPORT_ENTRY_FIRST(0x620c0ac, public_620c0ac)
        ASM_EXPORT_ENTRY(0x620c0bf, public_620c0bf)
        ASM_EXPORT_ENTRY(0x620c0d4, public_620c0d4)
        ASM_EXPORT_ENTRY(0x620c117, public_620c117)
        ASM_EXPORT_ENTRY(0x620c127, public_620c127)
        ASM_EXPORT_ENTRY_LAST(0x620c146, public_620c146)
    }
}

#undef public_620c0ac
#undef public_620c0bf
#undef public_620c0d4
#undef public_620c117
#undef public_620c127
#undef public_620c146

#pragma init_seg(compiler)
extern "C" void const* const public_620c0ac = __AsmFindLabelExport(&internal_620c070, 0x620c0ac);
extern "C" void const* const public_620c0bf = __AsmFindLabelExport(&internal_620c070, 0x620c0bf);
extern "C" void const* const public_620c0d4 = __AsmFindLabelExport(&internal_620c070, 0x620c0d4);
extern "C" void const* const public_620c117 = __AsmFindLabelExport(&internal_620c070, 0x620c117);
extern "C" void const* const public_620c127 = __AsmFindLabelExport(&internal_620c070, 0x620c127);
extern "C" void const* const public_620c146 = __AsmFindLabelExport(&internal_620c070, 0x620c146);
