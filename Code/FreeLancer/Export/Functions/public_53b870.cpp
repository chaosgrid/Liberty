#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53b870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0c0f);

#define public_53b8b0 _public_53b8b0
#define public_53b8c6 _public_53b8c6

PROC_DECLARE(0x53b870, internal_53b870, public_53b870);
/* CHUNK of public_53b220 */
extern "C" NAKED register_t __cdecl internal_53b870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5c0c0f @0x53b872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0c0f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0xB0]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0xAC]
        mov dword ptr ss : [esp+0x20], 0
        je public_53b8c6
        lea esp, ss:[esp]
        public_53b8b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c63ac]
        cmp esi, ebx
        jne public_53b8b0
        public_53b8c6 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov edx, dword ptr ss : [ebp+0xA0]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp+0xA0], esi
        mov dword ptr ss : [ebp+0xA4], esi
        mov dword ptr ss : [ebp+0xA8], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x53b870)
        ASM_EXPORT_ENTRY_FIRST(0x53b8b0, public_53b8b0)
        ASM_EXPORT_ENTRY_LAST(0x53b8c6, public_53b8c6)
    }
}

#undef public_53b8b0
#undef public_53b8c6

#pragma init_seg(compiler)
extern "C" void const* const public_53b8b0 = __AsmFindLabelExport(&internal_53b870, 0x53b8b0);
extern "C" void const* const public_53b8c6 = __AsmFindLabelExport(&internal_53b870, 0x53b8c6);
