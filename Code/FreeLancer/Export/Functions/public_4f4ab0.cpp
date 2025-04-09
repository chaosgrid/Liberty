#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf307);

#define public_4f4af0 _public_4f4af0
#define public_4f4b05 _public_4f4b05
#define public_4f4b33 _public_4f4b33
#define public_4f4b49 _public_4f4b49

PROC_DECLARE(0x4f4ab0, internal_4f4ab0, public_4f4ab0);
/* CHUNK of public_4f42e0 */
extern "C" NAKED register_t __cdecl internal_4f4ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5bf307 @0x4f4ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf307
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
        mov ebx, dword ptr ss : [ebp+0xE8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0xE4]
        mov dword ptr ss : [esp+0x20], 0
        je public_4f4b05
        lea esp, ss:[esp]
        public_4f4af0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_516f70
        cmp esi, ebx
        jne public_4f4af0
        public_4f4b05 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebx, dword ptr ss : [ebp+0xB0]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0xAC]
        mov dword ptr ss : [esp+0x20], 1
        je public_4f4b49
        public_4f4b33 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c63ac]
        cmp esi, ebx
        jne public_4f4b33
        public_4f4b49 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ss : [ebp+0xA0]
        push eax
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
        UNREACHABLE_TRAP(0x4f4ab0)
        ASM_EXPORT_ENTRY_FIRST(0x4f4af0, public_4f4af0)
        ASM_EXPORT_ENTRY(0x4f4b05, public_4f4b05)
        ASM_EXPORT_ENTRY(0x4f4b33, public_4f4b33)
        ASM_EXPORT_ENTRY_LAST(0x4f4b49, public_4f4b49)
    }
}

#undef public_4f4af0
#undef public_4f4b05
#undef public_4f4b33
#undef public_4f4b49

#pragma init_seg(compiler)
extern "C" void const* const public_4f4af0 = __AsmFindLabelExport(&internal_4f4ab0, 0x4f4af0);
extern "C" void const* const public_4f4b05 = __AsmFindLabelExport(&internal_4f4ab0, 0x4f4b05);
extern "C" void const* const public_4f4b33 = __AsmFindLabelExport(&internal_4f4ab0, 0x4f4b33);
extern "C" void const* const public_4f4b49 = __AsmFindLabelExport(&internal_4f4ab0, 0x4f4b49);
