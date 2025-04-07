#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315600);
CLANG_FORWARD_PROC_SYMBOL(public_63169f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63966e2);

#define public_63156ea _public_63156ea
#define public_63156f3 _public_63156f3

PROC_DECLARE(0x6315600, internal_6315600, public_6315600);
/* CHUNK of public_63149d0 */
extern "C" NAKED register_t __cdecl internal_6315600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_63966e2 @0x6315602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63966e2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x3C]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 2
        call public_63169f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x28]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        call public_63169f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], bl
        call public_63169f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        cmp eax, ebx
        je public_63156f3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63156ea
        cmp cl, 0xFF
        je public_63156ea
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_63156f3
        public_63156ea : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63156f3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6315600)
        ASM_EXPORT_ENTRY_FIRST(0x63156ea, public_63156ea)
        ASM_EXPORT_ENTRY_LAST(0x63156f3, public_63156f3)
    }
}

#undef public_63156ea
#undef public_63156f3

#pragma init_seg(compiler)
extern "C" void const* const public_63156ea = __AsmFindLabelExport(&internal_6315600, 0x63156ea);
extern "C" void const* const public_63156f3 = __AsmFindLabelExport(&internal_6315600, 0x63156f3);
