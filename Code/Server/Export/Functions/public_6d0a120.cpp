#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0a120);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61477);

#define public_6d0a160 _public_6d0a160
#define public_6d0a175 _public_6d0a175
#define public_6d0a1a3 _public_6d0a1a3
#define public_6d0a1b9 _public_6d0a1b9

PROC_DECLARE(0x6d0a120, internal_6d0a120, public_6d0a120);
/* CHUNK of public_6d09d60 */
extern "C" NAKED register_t __cdecl internal_6d0a120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d61477 @0x6d0a122*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61477
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
        je public_6d0a175
        lea esp, ss:[esp]
        public_6d0a160 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebx
        jne public_6d0a160
        public_6d0a175 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebx, dword ptr ss : [ebp+0xB0]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0xAC]
        mov dword ptr ss : [esp+0x20], 1
        je public_6d0a1b9
        public_6d0a1a3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d643d0]
        cmp esi, ebx
        jne public_6d0a1a3
        public_6d0a1b9 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6d5ffb0
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ss : [ebp+0xA0]
        push eax
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6d0a120)
        ASM_EXPORT_ENTRY_FIRST(0x6d0a160, public_6d0a160)
        ASM_EXPORT_ENTRY(0x6d0a175, public_6d0a175)
        ASM_EXPORT_ENTRY(0x6d0a1a3, public_6d0a1a3)
        ASM_EXPORT_ENTRY_LAST(0x6d0a1b9, public_6d0a1b9)
    }
}

#undef public_6d0a160
#undef public_6d0a175
#undef public_6d0a1a3
#undef public_6d0a1b9

#pragma init_seg(compiler)
extern "C" void const* const public_6d0a160 = __AsmFindLabelExport(&internal_6d0a120, 0x6d0a160);
extern "C" void const* const public_6d0a175 = __AsmFindLabelExport(&internal_6d0a120, 0x6d0a175);
extern "C" void const* const public_6d0a1a3 = __AsmFindLabelExport(&internal_6d0a120, 0x6d0a1a3);
extern "C" void const* const public_6d0a1b9 = __AsmFindLabelExport(&internal_6d0a120, 0x6d0a1b9);
