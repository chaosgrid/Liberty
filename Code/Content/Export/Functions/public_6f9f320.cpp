#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f320);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa03c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1d4f);

#define public_6f9f415 _public_6f9f415
#define public_6f9f417 _public_6f9f417

PROC_DECLARE(0x6f9f320, internal_6f9f320, public_6f9f320);
/* CHUNK of public_6f9ecb0 */
extern "C" NAKED register_t __cdecl internal_6f9f320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fb1d4f @0x6f9f322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1d4f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x24], ebp
        lea esi, ds:[edi+0x40]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6fbd554
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [esi+0xC0]
        lea ebx, ds:[esi+0xBC]
        push eax
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x2C], 9
        call public_6fa0cb0
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0xAC]
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [ebx+0xC], ebp
        mov byte ptr ss : [esp+0x24], 8
        call public_6eec8d0
        lea ecx, ds:[esi+0x9C]
        mov byte ptr ss : [esp+0x24], 7
        call public_6eec8d0
        lea ebx, ds:[esi+0x60]
        mov dword ptr ds : [esi+0x90], offset public_6fbd3f0
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [ebx], offset public_6fbc700
        lea ecx, ds:[ebx+0x20]
        mov byte ptr ss : [esp+0x24], 0xA
        call public_6eec8d0
        lea ecx, ds:[ebx+4]
        mov byte ptr ss : [esp+0x24], 5
        call dword ptr ds : [public_6fb3034]
        lea ebx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [ebx], offset public_6fbc700
        lea ecx, ds:[ebx+0x20]
        mov byte ptr ss : [esp+0x24], 0xB
        call public_6eec8d0
        lea ecx, ds:[ebx+4]
        mov byte ptr ss : [esp+0x24], 4
        call dword ptr ds : [public_6fb3034]
        lea eax, ds:[esi+0x18]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x24], 3
        je public_6f9f415
        lea ecx, ds:[eax+4]
        jmp public_6f9f417
        public_6f9f415 : nop
        xor ecx, ecx
        public_6f9f417 : nop
        call public_6f9f9e0
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0x24], 2
        call public_6f9fbd0
        mov dword ptr ds : [edi+0x30], offset public_6fbd50c
        mov eax, dword ptr ds : [edi+0x38]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x34]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 1
        call public_6fa03c0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        call public_6fa8fe0
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi+0x28], ebp
        mov edx, dword ptr ds : [edi+0x10]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x18], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f9f320)
        ASM_EXPORT_ENTRY_FIRST(0x6f9f415, public_6f9f415)
        ASM_EXPORT_ENTRY_LAST(0x6f9f417, public_6f9f417)
    }
}

#undef public_6f9f415
#undef public_6f9f417

#pragma init_seg(compiler)
extern "C" void const* const public_6f9f415 = __AsmFindLabelExport(&internal_6f9f320, 0x6f9f415);
extern "C" void const* const public_6f9f417 = __AsmFindLabelExport(&internal_6f9f320, 0x6f9f417);
