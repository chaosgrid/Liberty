#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630ff40);

#define public_630ff76 _public_630ff76
#define public_630ff7d _public_630ff7d
#define public_630ff81 _public_630ff81
#define public_630ff94 _public_630ff94
#define public_630ffa3 _public_630ffa3
#define public_630ffce _public_630ffce
#define public_630ffde _public_630ffde
#define public_6310018 _public_6310018

PROC_DECLARE(0x630ff40, internal_630ff40, public_630ff40);
extern "C" NAKED register_t __cdecl internal_630ff40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x100
        push esi
        mov esi, dword ptr ds : [ecx+0x34]
        test esi, esi
        je public_6310018
        movzx edx, byte ptr ds : [esi+2]
        mov eax, dword ptr ss : [esp+0x108]
        cmp eax, edx
        jae public_630ffde
        lea edx, ds:[eax+eax*4]
        add edx, dword ptr ds : [ecx+0x38]
        movzx eax, byte ptr ds : [edx]
        cmp eax, 3
        ja public_630ff94
/*FIXUP jmp dword ptr ds : [eax*4+public_6310028] @0x630ff6f*/
  JMPTB cmp eax, 0
  JMPTB je public_630ff76
  JMPTB cmp eax, 1
  JMPTB je public_630ff7d
  JMPTB cmp eax, 2
  JMPTB je public_630ffa3
  JMPTB cmp eax, 3
  JMPTB je public_630ffce
  JMPTB int 3
        public_630ff76 : nop
        movzx eax, byte ptr ds : [edx+1]
        push eax
        jmp public_630ff81
        public_630ff7d : nop
        mov ecx, dword ptr ds : [edx+1]
        push ecx
/*FIXUP public_630ff81 : nop
        push offset public_63a362c @0x630ff81*/
  FIXUP public_630ff81 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
/*FIXUP push offset public_658e900 @0x630ff86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        public_630ff94 : nop
        mov eax, offset public_658e900
        pop esi
        add esp, 0x100
        ret 4
        public_630ffa3 : nop
        fld dword ptr ds : [edx+1]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63a3628 @0x630ffac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3628
/*FIXUP push offset public_658e900 @0x630ffb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0x10
        mov eax, offset public_658e900
        pop esi
        add esp, 0x100
        ret 4
        public_630ffce : nop
        mov eax, dword ptr ds : [ecx+0x28]
        add eax, dword ptr ds : [edx+1]
        pop esi
        add esp, 0x100
        ret 4
        public_630ffde : nop
        mov edx, dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ds : [ecx+0x2C]
        push eax
        movzx eax, word ptr ds : [esi]
        add eax, edx
        push eax
        movzx eax, word ptr ds : [ecx]
        add eax, edx
        push eax
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_63a35f8 @0x630fff5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f8
        push ecx
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        push 0
/*FIXUP push offset public_63a35f0 @0x6310006*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f0
        lea edx, ss:[esp+0xC]
        push edx
        push 0
        call dword ptr ds : [public_6399394]
        public_6310018 : nop
        mov eax, offset public_63997b0
        pop esi
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x630ff40)
        ASM_EXPORT_ENTRY_FIRST(0x630ff76, public_630ff76)
        ASM_EXPORT_ENTRY(0x630ff7d, public_630ff7d)
        ASM_EXPORT_ENTRY(0x630ffa3, public_630ffa3)
        ASM_EXPORT_ENTRY_LAST(0x630ffce, public_630ffce)
    }
}

#undef public_630ff76
#undef public_630ff7d
#undef public_630ff81
#undef public_630ff94
#undef public_630ffa3
#undef public_630ffce
#undef public_630ffde
#undef public_6310018

#pragma init_seg(compiler)
extern "C" void const* const public_630ff76 = __AsmFindLabelExport(&internal_630ff40, 0x630ff76);
extern "C" void const* const public_630ff7d = __AsmFindLabelExport(&internal_630ff40, 0x630ff7d);
extern "C" void const* const public_630ffa3 = __AsmFindLabelExport(&internal_630ff40, 0x630ffa3);
extern "C" void const* const public_630ffce = __AsmFindLabelExport(&internal_630ff40, 0x630ffce);
