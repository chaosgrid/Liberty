#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_631be30);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6310811 _public_6310811
#define public_6310822 _public_6310822
#define public_6310832 _public_6310832
#define public_6310847 _public_6310847
#define public_6310867 _public_6310867
#define public_63108a7 _public_63108a7
#define public_63108b4 _public_63108b4

PROC_DECLARE(0x63107c0, internal_63107c0, public_63107c0);
extern "C" NAKED register_t __cdecl internal_63107c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov al, byte ptr ds : [ecx+0x1564]
        sub esp, 0x100
        test al, al
        je public_63108b4
        push esi
        mov esi, dword ptr ds : [ecx+0x145C]
        push edi
        xor edi, edi
        test esi, esi
        je public_63108a7
        movzx eax, byte ptr ds : [esi+2]
        mov edx, dword ptr ss : [esp+0x10C]
        cmp edx, eax
        jae public_6310867
        lea eax, ds:[edx+edx*4]
        add eax, dword ptr ds : [ecx+0x1460]
        movzx edx, byte ptr ds : [eax]
        cmp edx, 3
        ja public_63108a7
/*FIXUP jmp dword ptr ds : [edx*4+public_63108dc] @0x631080a*/
  JMPTB cmp edx, 0
  JMPTB je public_6310811
  JMPTB cmp edx, 1
  JMPTB je public_6310822
  JMPTB cmp edx, 2
  JMPTB je public_6310832
  JMPTB cmp edx, 3
  JMPTB je public_6310847
  JMPTB int 3
        public_6310811 : nop
        movzx edi, byte ptr ds : [eax+1]
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x100
        ret 4
        public_6310822 : nop
        mov edi, dword ptr ds : [eax+1]
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x100
        ret 4
        public_6310832 : nop
        fld dword ptr ds : [eax+1]
        call public_6391dae
        mov edi, eax
        pop edi
        pop esi
        add esp, 0x100
        ret 4
        public_6310847 : nop
        mov edx, dword ptr ds : [eax+1]
        add edx, dword ptr ds : [ecx+0x1450]
        push edx
        call dword ptr ds : [public_6399254]
        add esp, 4
        mov edi, eax
        pop edi
        pop esi
        add esp, 0x100
        ret 4
        public_6310867 : nop
        mov eax, dword ptr ds : [ecx+0x1450]
        mov ecx, dword ptr ds : [ecx+0x1454]
        push edx
        movzx edx, word ptr ds : [esi]
        add edx, eax
        push edx
        movzx edx, word ptr ds : [ecx]
        add edx, eax
        push edx
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_63a35f8 @0x6310884*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f8
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        push 0
/*FIXUP push offset public_63a35f0 @0x6310895*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f0
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        call dword ptr ds : [public_6399394]
        public_63108a7 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x100
        ret 4
        public_63108b4 : nop
        mov edx, dword ptr ss : [esp+0x104]
        push edx
        add ecx, 0x828
        push ecx
        call public_631be30
        push eax
        call dword ptr ds : [public_6399254]
        add esp, 0xC
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x63107c0)
        ASM_EXPORT_ENTRY_FIRST(0x6310811, public_6310811)
        ASM_EXPORT_ENTRY(0x6310822, public_6310822)
        ASM_EXPORT_ENTRY(0x6310832, public_6310832)
        ASM_EXPORT_ENTRY_LAST(0x6310847, public_6310847)
    }
}

#undef public_6310811
#undef public_6310822
#undef public_6310832
#undef public_6310847
#undef public_6310867
#undef public_63108a7
#undef public_63108b4

#pragma init_seg(compiler)
extern "C" void const* const public_6310811 = __AsmFindLabelExport(&internal_63107c0, 0x6310811);
extern "C" void const* const public_6310822 = __AsmFindLabelExport(&internal_63107c0, 0x6310822);
extern "C" void const* const public_6310832 = __AsmFindLabelExport(&internal_63107c0, 0x6310832);
extern "C" void const* const public_6310847 = __AsmFindLabelExport(&internal_63107c0, 0x6310847);
