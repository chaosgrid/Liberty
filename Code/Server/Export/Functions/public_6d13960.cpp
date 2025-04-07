#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12900);
CLANG_FORWARD_PROC_SYMBOL(public_6d13960);
CLANG_FORWARD_PROC_SYMBOL(public_6d15660);
CLANG_FORWARD_PROC_SYMBOL(public_6d157d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15880);
CLANG_FORWARD_PROC_SYMBOL(public_6d15920);
CLANG_FORWARD_PROC_SYMBOL(public_6d159d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15a70);
CLANG_FORWARD_PROC_SYMBOL(public_6d15b20);
CLANG_FORWARD_PROC_SYMBOL(public_6d15bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61cc0);

#define public_6d13a07 _public_6d13a07

PROC_DECLARE(0x6d13960, internal_6d13960, public_6d13960);
/* CHUNK of public_6d15640 */
extern "C" NAKED register_t __cdecl internal_6d13960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d61cc0 @0x6d13962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61cc0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x34], 6
        mov dword ptr ss : [esp+0x24], ecx
        call public_6d15880
        lea esi, ds:[ebx+0x1C]
        mov ecx, esi
        call public_6d159d0
        lea edi, ds:[ebx+0x30]
        mov ecx, edi
        call public_6d159d0
        lea ebp, ds:[ebx+0x44]
        mov ecx, ebp
        call public_6d15b20
        lea ecx, ds:[ebx+0x58]
        mov dword ptr ss : [esp+0x14], ecx
        call public_6d15c70
        lea ecx, ds:[ebx+0x6C]
        mov dword ptr ss : [esp+0x10], ecx
        call public_6d15c70
        lea ecx, ds:[ebx+0x80]
        mov dword ptr ss : [esp+0x20], ecx
        call public_6d15b20
        mov eax, dword ptr ds : [ebx]
        xor ebx, ebx
        cmp eax, ebx
        je public_6d13a07
        lea ecx, ds:[eax-4]
/*FIXUP push offset _public_6d12900 @0x6d139e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d12900
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [ecx]
        push ecx
        push 0x54
        push eax
        call public_6d6001e
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6d5ffb0
        add esp, 4
        public_6d13a07 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ss : [esp+0x34], 5
        call public_6d15660
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov byte ptr ss : [esp+0x38], 4
        mov dword ptr ss : [esp+0x24], eax
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_6d15bc0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [ecx+4]
        add esp, 8
        lea edx, ss:[esp+0x28]
        push edx
        mov byte ptr ss : [esp+0x38], 3
        mov dword ptr ss : [esp+0x24], eax
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6d15bc0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 8
        lea ecx, ss:[esp+0x28]
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ss : [ebp+4]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x38], 2
        mov dword ptr ss : [esp+0x24], eax
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_6d15a70
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ss : [ebp+4], ebx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov dword ptr ss : [ebp+0x10], ebx
        call public_6d5ffb0
        add esp, 8
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov ebp, dword ptr ds : [edi+4]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], 1
        call public_6d5c540
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6d15920
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6d5ffb0
        add esp, 8
        lea edx, ss:[esp+0x28]
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], bl
        call public_6d5c540
        mov eax, dword ptr ds : [eax]
        push edi
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_6d15920
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov dword ptr ds : [esi+8], ebx
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_6d157d0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6d13960)
        ASM_EXPORT_ENTRY_SINGLE(0x6d13a07, public_6d13a07)
    }
}

#undef public_6d13a07

#pragma init_seg(compiler)
extern "C" void const* const public_6d13a07 = __AsmFindLabelExport(&internal_6d13960, 0x6d13a07);
