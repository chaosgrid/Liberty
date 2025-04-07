#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2700);
CLANG_FORWARD_PROC_SYMBOL(public_62d4d20);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63950e9);

#define public_62d2741 _public_62d2741
#define public_62d2760 _public_62d2760
#define public_62d2775 _public_62d2775

PROC_DECLARE(0x62d2700, internal_62d2700, public_62d2700);
/* CHUNK of public_62d2530 */
extern "C" NAKED register_t __cdecl internal_62d2700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_63950e9 @0x62d2702*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63950e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, dword ptr ds : [ebx+0xE8]
        test eax, eax
        lea ecx, ds:[ebx+0xE8]
        mov dword ptr ss : [esp+0x20], 1
        je public_62d2741
        push 0
        call public_6341610
        public_62d2741 : nop
        mov ebp, dword ptr ds : [ebx+0xE0]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0xDC]
        mov byte ptr ss : [esp+0x20], 0
        je public_62d2775
        lea esp, ss:[esp]
        public_62d2760 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_62d4d20
        cmp esi, ebp
        jne public_62d2760
        public_62d2775 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov edx, dword ptr ds : [ebx+0x10]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ds : [ebx+0x10], esi
        mov dword ptr ds : [ebx+0x14], esi
        mov dword ptr ds : [ebx+0x18], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62d2700)
        ASM_EXPORT_ENTRY_FIRST(0x62d2741, public_62d2741)
        ASM_EXPORT_ENTRY(0x62d2760, public_62d2760)
        ASM_EXPORT_ENTRY_LAST(0x62d2775, public_62d2775)
    }
}

#undef public_62d2741
#undef public_62d2760
#undef public_62d2775

#pragma init_seg(compiler)
extern "C" void const* const public_62d2741 = __AsmFindLabelExport(&internal_62d2700, 0x62d2741);
extern "C" void const* const public_62d2760 = __AsmFindLabelExport(&internal_62d2700, 0x62d2760);
extern "C" void const* const public_62d2775 = __AsmFindLabelExport(&internal_62d2700, 0x62d2775);
