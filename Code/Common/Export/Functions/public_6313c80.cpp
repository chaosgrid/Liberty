#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313c80);
CLANG_FORWARD_PROC_SYMBOL(public_6316e60);
CLANG_FORWARD_PROC_SYMBOL(public_6317730);
CLANG_FORWARD_PROC_SYMBOL(public_6317bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6318070);
CLANG_FORWARD_PROC_SYMBOL(public_6318860);
CLANG_FORWARD_PROC_SYMBOL(public_63188a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396541);

#define public_6313da7 _public_6313da7
#define public_6313db0 _public_6313db0
#define public_6313dd4 _public_6313dd4

PROC_DECLARE(0x6313c80, internal_6313c80, public_6313c80);
/* CHUNK of public_6313880 */
extern "C" NAKED register_t __cdecl internal_6313c80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6396541 @0x6313c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396541
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_63a37bc
        mov eax, dword ptr ds : [edi+0x44]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x40]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 2
        call public_6318070
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
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x2C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 1
        call public_6317bd0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], bl
        call public_6317730
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [edi+0x14]
        lea esi, ds:[edi+4]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_6313da7
        mov ecx, eax
        cmp eax, ecx
        jne public_6313da7
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6318860
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6313dd4
        public_6313da7 : nop
        cmp eax, edi
        je public_6313dd4
        nop 
        lea esp, ss:[esp]
        public_6313db0 : nop
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_63188a0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6316e60
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6313db0
        public_6313dd4 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6313c80)
        ASM_EXPORT_ENTRY_FIRST(0x6313da7, public_6313da7)
        ASM_EXPORT_ENTRY(0x6313db0, public_6313db0)
        ASM_EXPORT_ENTRY_LAST(0x6313dd4, public_6313dd4)
    }
}

#undef public_6313da7
#undef public_6313db0
#undef public_6313dd4

#pragma init_seg(compiler)
extern "C" void const* const public_6313da7 = __AsmFindLabelExport(&internal_6313c80, 0x6313da7);
extern "C" void const* const public_6313db0 = __AsmFindLabelExport(&internal_6313c80, 0x6313db0);
extern "C" void const* const public_6313dd4 = __AsmFindLabelExport(&internal_6313c80, 0x6313dd4);
