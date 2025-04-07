#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_631bb70);
CLANG_FORWARD_PROC_SYMBOL(public_631be30);

#define public_6310948 _public_6310948
#define public_6310960 _public_6310960
#define public_631096f _public_631096f
#define public_631097e _public_631097e
#define public_631099d _public_631099d
#define public_63109e3 _public_63109e3
#define public_63109ed _public_63109ed

PROC_DECLARE(0x63108f0, internal_63108f0, public_63108f0);
extern "C" NAKED register_t __cdecl internal_63108f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov al, byte ptr ds : [ecx+0x1564]
        sub esp, 0x104
        test al, al
        je public_63109ed
        fld dword ptr ds : [public_6399408]
        push esi
        mov esi, dword ptr ds : [ecx+0x145C]
        fst dword ptr ss : [esp+4]
        test esi, esi
        je public_63109e3
        movzx eax, byte ptr ds : [esi+2]
        mov edx, dword ptr ss : [esp+0x10C]
        cmp edx, eax
        jae public_631099d
        lea eax, ds:[edx+edx*4]
        add eax, dword ptr ds : [ecx+0x1460]
        movzx edx, byte ptr ds : [eax]
        cmp edx, 3
        ja public_63109e3
/*FIXUP jmp dword ptr ds : [edx*4+public_6310a14] @0x6310941*/
  JMPTB cmp edx, 0
  JMPTB je public_6310948
  JMPTB cmp edx, 1
  JMPTB je public_6310960
  JMPTB cmp edx, 2
  JMPTB je public_631096f
  JMPTB cmp edx, 3
  JMPTB je public_631097e
  JMPTB int 3
        public_6310948 : nop
        movzx ecx, byte ptr ds : [eax+1]
        fstp st(0)
        mov dword ptr ss : [esp+4], ecx
        pop esi
        fild dword ptr ss : [esp]
        add esp, 0x104
        ret 4
        public_6310960 : nop
        fstp st(0)
        pop esi
        fild dword ptr ds : [eax+1]
        add esp, 0x104
        ret 4
        public_631096f : nop
        fstp st(0)
        pop esi
        fld dword ptr ds : [eax+1]
        add esp, 0x104
        ret 4
        public_631097e : nop
        mov edx, dword ptr ds : [eax+1]
        fstp st(0)
        add edx, dword ptr ds : [ecx+0x1450]
        push edx
        call dword ptr ds : [public_63992f0]
        add esp, 4
        pop esi
        add esp, 0x104
        ret 4
        public_631099d : nop
        mov eax, dword ptr ds : [ecx+0x1450]
        fstp st(0)
        mov ecx, dword ptr ds : [ecx+0x1454]
        push edx
        movzx edx, word ptr ds : [esi]
        add edx, eax
        push edx
        movzx edx, word ptr ds : [ecx]
        add edx, eax
        push edx
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_63a35f8 @0x63109bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f8
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        push 0
/*FIXUP push offset public_63a35f0 @0x63109cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f0
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        call dword ptr ds : [public_6399394]
        fld dword ptr ss : [esp+4]
        public_63109e3 : nop
        pop esi
        add esp, 0x104
        ret 4
        public_63109ed : nop
        mov edx, dword ptr ss : [esp+0x108]
        push edx
        add ecx, 0x828
        push ecx
        call public_631be30
        push eax
        call public_631bb70
        add esp, 0xC
        add esp, 0x104
        ret 4
        UNREACHABLE_TRAP(0x63108f0)
        ASM_EXPORT_ENTRY_FIRST(0x6310948, public_6310948)
        ASM_EXPORT_ENTRY(0x6310960, public_6310960)
        ASM_EXPORT_ENTRY(0x631096f, public_631096f)
        ASM_EXPORT_ENTRY_LAST(0x631097e, public_631097e)
    }
}

#undef public_6310948
#undef public_6310960
#undef public_631096f
#undef public_631097e
#undef public_631099d
#undef public_63109e3
#undef public_63109ed

#pragma init_seg(compiler)
extern "C" void const* const public_6310948 = __AsmFindLabelExport(&internal_63108f0, 0x6310948);
extern "C" void const* const public_6310960 = __AsmFindLabelExport(&internal_63108f0, 0x6310960);
extern "C" void const* const public_631096f = __AsmFindLabelExport(&internal_63108f0, 0x631096f);
extern "C" void const* const public_631097e = __AsmFindLabelExport(&internal_63108f0, 0x631097e);
