#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f746f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb00e8);

#define public_6f7472a _public_6f7472a
#define public_6f74732 _public_6f74732
#define public_6f74738 _public_6f74738
#define public_6f74760 _public_6f74760
#define public_6f74769 _public_6f74769
#define public_6f74773 _public_6f74773
#define public_6f74790 _public_6f74790
#define public_6f747b6 _public_6f747b6
#define public_6f747c1 _public_6f747c1
#define public_6f7480a _public_6f7480a
#define public_6f7480e _public_6f7480e
#define public_6f74820 _public_6f74820
#define public_6f7482b _public_6f7482b
#define public_6f74841 _public_6f74841
#define public_6f74851 _public_6f74851
#define public_6f74864 _public_6f74864
#define public_6f74878 _public_6f74878

PROC_DECLARE(0x6f746f0, internal_6f746f0, public_6f746f0);
/* CHUNK of public_6f171a0 */
extern "C" NAKED register_t __cdecl internal_6f746f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fb00e8 @0x6f746f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb00e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov al, byte ptr ds : [ecx+0x98]
        push ebx
        push ebp
        push edi
        lea edi, ds:[ecx+0x98]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov byte ptr ss : [esp+0x18], al
        jne public_6f7472a
        xor eax, eax
        jmp public_6f74732
        public_6f7472a : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6f74732 : nop
        test eax, eax
        jge public_6f74738
        xor eax, eax
        public_6f74738 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov ecx, dword ptr ds : [edi+8]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], ebp
        mov ebx, ebp
        je public_6f74773
        sub eax, ebp
        lea esp, ss:[esp]
        public_6f74760 : nop
        test ebx, ebx
        je public_6f74769
        mov edx, dword ptr ds : [eax+ebx]
        mov dword ptr ds : [ebx], edx
        public_6f74769 : nop
        add ebx, 4
        lea edx, ds:[eax+ebx]
        cmp edx, ecx
        jne public_6f74760
        public_6f74773 : nop
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f74878
        push esi
        public_6f74790 : nop
        mov eax, dword ptr ss : [ebp]
        push 0
        push eax
        call dword ptr ds : [public_6fb33c8]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0xA0]
        mov eax, dword ptr ds : [edx+0x9C]
        mov esi, dword ptr ss : [ebp]
        add esp, 8
        cmp eax, ecx
        je public_6f7480e
        public_6f747b6 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f747c1
        add eax, 4
        cmp eax, ecx
        jne public_6f747b6
        public_6f747c1 : nop
        cmp eax, ecx
        je public_6f7480e
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push ecx
        add eax, 4
        push eax
        call public_6f6a640
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, edi
        call public_6ea1490
        add dword ptr ds : [edi+8], 0xFFFFFFFC
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        test eax, eax
        jne public_6f7480a
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb34f8]
        add esp, 4
        public_6f7480a : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6f7480e : nop
        mov eax, dword ptr ds : [edx+0xB0]
        mov ecx, dword ptr ds : [edx+0xAC]
        cmp ecx, eax
        je public_6f74864
        mov edi, edi
        public_6f74820 : nop
        cmp dword ptr ds : [ecx], esi
        je public_6f7482b
        add ecx, 4
        cmp ecx, eax
        jne public_6f74820
        public_6f7482b : nop
        cmp ecx, eax
        je public_6f74864
        lea esi, ds:[edx+0xA8]
        mov edx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6f74851
        sub ecx, eax
        public_6f74841 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebp
        add eax, 4
        cmp eax, edx
        jne public_6f74841
        mov ebp, dword ptr ss : [esp+0x14]
        public_6f74851 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_6ea1490
        add dword ptr ds : [esi+8], 0xFFFFFFFC
        public_6f74864 : nop
        add ebp, 4
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6f74790
        mov ebp, dword ptr ss : [esp+0x20]
        pop esi
        public_6f74878 : nop
        push ebp
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f746f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f7472a, public_6f7472a)
        ASM_EXPORT_ENTRY(0x6f74732, public_6f74732)
        ASM_EXPORT_ENTRY(0x6f74738, public_6f74738)
        ASM_EXPORT_ENTRY(0x6f74760, public_6f74760)
        ASM_EXPORT_ENTRY(0x6f74769, public_6f74769)
        ASM_EXPORT_ENTRY(0x6f74773, public_6f74773)
        ASM_EXPORT_ENTRY(0x6f74790, public_6f74790)
        ASM_EXPORT_ENTRY(0x6f747b6, public_6f747b6)
        ASM_EXPORT_ENTRY(0x6f747c1, public_6f747c1)
        ASM_EXPORT_ENTRY(0x6f7480a, public_6f7480a)
        ASM_EXPORT_ENTRY(0x6f7480e, public_6f7480e)
        ASM_EXPORT_ENTRY(0x6f74820, public_6f74820)
        ASM_EXPORT_ENTRY(0x6f7482b, public_6f7482b)
        ASM_EXPORT_ENTRY(0x6f74841, public_6f74841)
        ASM_EXPORT_ENTRY(0x6f74851, public_6f74851)
        ASM_EXPORT_ENTRY(0x6f74864, public_6f74864)
        ASM_EXPORT_ENTRY_LAST(0x6f74878, public_6f74878)
    }
}

#undef public_6f7472a
#undef public_6f74732
#undef public_6f74738
#undef public_6f74760
#undef public_6f74769
#undef public_6f74773
#undef public_6f74790
#undef public_6f747b6
#undef public_6f747c1
#undef public_6f7480a
#undef public_6f7480e
#undef public_6f74820
#undef public_6f7482b
#undef public_6f74841
#undef public_6f74851
#undef public_6f74864
#undef public_6f74878

#pragma init_seg(compiler)
extern "C" void const* const public_6f7472a = __AsmFindLabelExport(&internal_6f746f0, 0x6f7472a);
extern "C" void const* const public_6f74732 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74732);
extern "C" void const* const public_6f74738 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74738);
extern "C" void const* const public_6f74760 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74760);
extern "C" void const* const public_6f74769 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74769);
extern "C" void const* const public_6f74773 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74773);
extern "C" void const* const public_6f74790 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74790);
extern "C" void const* const public_6f747b6 = __AsmFindLabelExport(&internal_6f746f0, 0x6f747b6);
extern "C" void const* const public_6f747c1 = __AsmFindLabelExport(&internal_6f746f0, 0x6f747c1);
extern "C" void const* const public_6f7480a = __AsmFindLabelExport(&internal_6f746f0, 0x6f7480a);
extern "C" void const* const public_6f7480e = __AsmFindLabelExport(&internal_6f746f0, 0x6f7480e);
extern "C" void const* const public_6f74820 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74820);
extern "C" void const* const public_6f7482b = __AsmFindLabelExport(&internal_6f746f0, 0x6f7482b);
extern "C" void const* const public_6f74841 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74841);
extern "C" void const* const public_6f74851 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74851);
extern "C" void const* const public_6f74864 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74864);
extern "C" void const* const public_6f74878 = __AsmFindLabelExport(&internal_6f746f0, 0x6f74878);
