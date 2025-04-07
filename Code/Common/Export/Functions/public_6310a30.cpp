#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_631be30);

#define public_6310a7e _public_6310a7e
#define public_6310a85 _public_6310a85
#define public_6310a89 _public_6310a89
#define public_6310a9c _public_6310a9c
#define public_6310aab _public_6310aab
#define public_6310ad6 _public_6310ad6
#define public_6310ae9 _public_6310ae9
#define public_6310b29 _public_6310b29
#define public_6310b38 _public_6310b38

PROC_DECLARE(0x6310a30, internal_6310a30, public_6310a30);
extern "C" NAKED register_t __cdecl internal_6310a30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov al, byte ptr ds : [ecx+0x1564]
        sub esp, 0x100
        test al, al
        je public_6310b38
        push esi
        mov esi, dword ptr ds : [ecx+0x145C]
        test esi, esi
        je public_6310b29
        movzx edx, byte ptr ds : [esi+2]
        mov eax, dword ptr ss : [esp+0x108]
        cmp eax, edx
        jae public_6310ae9
        lea edx, ds:[eax+eax*4]
        add edx, dword ptr ds : [ecx+0x1460]
        movzx eax, byte ptr ds : [edx]
        cmp eax, 3
        ja public_6310a9c
/*FIXUP jmp dword ptr ds : [eax*4+public_6310b58] @0x6310a77*/
  JMPTB cmp eax, 0
  JMPTB je public_6310a7e
  JMPTB cmp eax, 1
  JMPTB je public_6310a85
  JMPTB cmp eax, 2
  JMPTB je public_6310aab
  JMPTB cmp eax, 3
  JMPTB je public_6310ad6
  JMPTB int 3
        public_6310a7e : nop
        movzx eax, byte ptr ds : [edx+1]
        push eax
        jmp public_6310a89
        public_6310a85 : nop
        mov ecx, dword ptr ds : [edx+1]
        push ecx
/*FIXUP public_6310a89 : nop
        push offset public_63a362c @0x6310a89*/
  FIXUP public_6310a89 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
/*FIXUP push offset public_658e900 @0x6310a8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        public_6310a9c : nop
        mov eax, offset public_658e900
        pop esi
        add esp, 0x100
        ret 4
        public_6310aab : nop
        fld dword ptr ds : [edx+1]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63a3628 @0x6310ab4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3628
/*FIXUP push offset public_658e900 @0x6310ab9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0x10
        mov eax, offset public_658e900
        pop esi
        add esp, 0x100
        ret 4
        public_6310ad6 : nop
        mov eax, dword ptr ds : [ecx+0x1450]
        add eax, dword ptr ds : [edx+1]
        pop esi
        add esp, 0x100
        ret 4
        public_6310ae9 : nop
        mov edx, dword ptr ds : [ecx+0x1450]
        mov ecx, dword ptr ds : [ecx+0x1454]
        push eax
        movzx eax, word ptr ds : [esi]
        add eax, edx
        push eax
        movzx eax, word ptr ds : [ecx]
        add eax, edx
        push eax
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_63a35f8 @0x6310b06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f8
        push ecx
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        push 0
/*FIXUP push offset public_63a35f0 @0x6310b17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f0
        lea edx, ss:[esp+0xC]
        push edx
        push 0
        call dword ptr ds : [public_6399394]
        public_6310b29 : nop
        mov eax, offset public_63997b0
        pop esi
        add esp, 0x100
        ret 4
        public_6310b38 : nop
        mov eax, dword ptr ss : [esp+0x104]
        push eax
        add ecx, 0x828
        push ecx
        call public_631be30
        add esp, 8
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x6310a30)
        ASM_EXPORT_ENTRY_FIRST(0x6310a7e, public_6310a7e)
        ASM_EXPORT_ENTRY(0x6310a85, public_6310a85)
        ASM_EXPORT_ENTRY(0x6310aab, public_6310aab)
        ASM_EXPORT_ENTRY_LAST(0x6310ad6, public_6310ad6)
    }
}

#undef public_6310a7e
#undef public_6310a85
#undef public_6310a89
#undef public_6310a9c
#undef public_6310aab
#undef public_6310ad6
#undef public_6310ae9
#undef public_6310b29
#undef public_6310b38

#pragma init_seg(compiler)
extern "C" void const* const public_6310a7e = __AsmFindLabelExport(&internal_6310a30, 0x6310a7e);
extern "C" void const* const public_6310a85 = __AsmFindLabelExport(&internal_6310a30, 0x6310a85);
extern "C" void const* const public_6310aab = __AsmFindLabelExport(&internal_6310a30, 0x6310aab);
extern "C" void const* const public_6310ad6 = __AsmFindLabelExport(&internal_6310a30, 0x6310ad6);
