#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438fd0);
CLANG_FORWARD_PROC_SYMBOL(public_439260);
CLANG_FORWARD_PROC_SYMBOL(public_43bea0);
CLANG_FORWARD_PROC_SYMBOL(public_43bf50);
CLANG_FORWARD_PROC_SYMBOL(public_43bf90);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_526960);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b92ee);

#define public_4390a0 _public_4390a0
#define public_4390a4 _public_4390a4
#define public_4390c8 _public_4390c8
#define public_4390f8 _public_4390f8
#define public_43910d _public_43910d

PROC_DECLARE(0x438fd0, internal_438fd0, public_438fd0);
/* CHUNK of public_438de0 */
extern "C" NAKED register_t __cdecl internal_438fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5b92ee @0x438fd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b92ee
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x2C], 2
        call public_439260
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x20]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], 1
        call public_43bea0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        lea esi, ds:[edi+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [eax]
        add esp, 8
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x10], eax
        je public_4390a0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_53e430
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx]
        jne public_4390a0
        mov ecx, dword ptr ds : [esi+4]
        cmp ebp, ecx
        jne public_4390a0
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, esi
        call public_43bf90
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_4390c8
        public_4390a0 : nop
        cmp eax, ebp
        je public_4390c8
        public_4390a4 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_526960
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c8c0
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_4390a4
        public_4390c8 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        add esp, 8
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_43910d
        public_4390f8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_43bf50
        cmp esi, ebp
        jne public_4390f8
        public_43910d : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x438fd0)
        ASM_EXPORT_ENTRY_FIRST(0x4390a0, public_4390a0)
        ASM_EXPORT_ENTRY(0x4390a4, public_4390a4)
        ASM_EXPORT_ENTRY(0x4390c8, public_4390c8)
        ASM_EXPORT_ENTRY(0x4390f8, public_4390f8)
        ASM_EXPORT_ENTRY_LAST(0x43910d, public_43910d)
    }
}

#undef public_4390a0
#undef public_4390a4
#undef public_4390c8
#undef public_4390f8
#undef public_43910d

#pragma init_seg(compiler)
extern "C" void const* const public_4390a0 = __AsmFindLabelExport(&internal_438fd0, 0x4390a0);
extern "C" void const* const public_4390a4 = __AsmFindLabelExport(&internal_438fd0, 0x4390a4);
extern "C" void const* const public_4390c8 = __AsmFindLabelExport(&internal_438fd0, 0x4390c8);
extern "C" void const* const public_4390f8 = __AsmFindLabelExport(&internal_438fd0, 0x4390f8);
extern "C" void const* const public_43910d = __AsmFindLabelExport(&internal_438fd0, 0x43910d);
