#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661adc0);

#define public_661adf8 _public_661adf8
#define public_661ae3f _public_661ae3f
#define public_661ae46 _public_661ae46
#define public_661ae4d _public_661ae4d
#define public_661ae54 _public_661ae54
#define public_661ae5b _public_661ae5b
#define public_661ae62 _public_661ae62
#define public_661ae64 _public_661ae64
#define public_661ae66 _public_661ae66
#define public_661ae76 _public_661ae76
#define public_661ae7e _public_661ae7e
#define public_661ae86 _public_661ae86
#define public_661ae90 _public_661ae90
#define public_661ae98 _public_661ae98
#define public_661ae9f _public_661ae9f
#define public_661aea7 _public_661aea7
#define public_661aeb8 _public_661aeb8
#define public_661aecc _public_661aecc
#define public_661aedc _public_661aedc
#define public_661aee4 _public_661aee4
#define public_661aeec _public_661aeec
#define public_661aef6 _public_661aef6
#define public_661aefe _public_661aefe
#define public_661af05 _public_661af05
#define public_661af0d _public_661af0d

PROC_DECLARE(0x661adc0, internal_661adc0, public_661adc0);
extern "C" NAKED register_t __cdecl internal_661adc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push edi
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+8]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0x18], ecx
        je public_661adf8
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_661adf8 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        jne public_661aeb8
        mov eax, dword ptr ds : [public_662acec]
        test eax, eax
        je public_661aeb8
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        xor edi, edi
        call dword ptr ds : [edx+0xC4]
        test eax, eax
        je public_661ae66
        mov eax, dword ptr ds : [eax]
        dec eax
        cmp eax, 5
        ja public_661ae62
/*FIXUP jmp dword ptr ds : [eax*4+public_661af18] @0x661ae38*/
  JMPTB cmp eax, 0
  JMPTB je public_661ae3f
  JMPTB cmp eax, 1
  JMPTB je public_661ae3f
  JMPTB cmp eax, 2
  JMPTB je public_661ae46
  JMPTB cmp eax, 3
  JMPTB je public_661ae54
  JMPTB cmp eax, 4
  JMPTB je public_661ae4d
  JMPTB cmp eax, 5
  JMPTB je public_661ae5b
  JMPTB int 3
        public_661ae3f : nop
        mov eax, 1
        jmp public_661ae64
        public_661ae46 : nop
        mov eax, 2
        jmp public_661ae64
        public_661ae4d : nop
        mov eax, 3
        jmp public_661ae64
        public_661ae54 : nop
        mov eax, 4
        jmp public_661ae64
        public_661ae5b : nop
        mov eax, 7
        jmp public_661ae64
        public_661ae62 : nop
        xor eax, eax
        public_661ae64 : nop
        mov edi, eax
        public_661ae66 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        xor eax, eax
        test cl, 1
        je public_661ae76
        mov eax, 4
        public_661ae76 : nop
        test cl, 2
        je public_661ae7e
        add eax, 0xC
        public_661ae7e : nop
        test cl, 4
        je public_661ae86
        add eax, 0x10
        public_661ae86 : nop
        test cl, 8
        je public_661ae90
        mov eax, 4
        public_661ae90 : nop
        test cl, 0x40
        je public_661ae98
        add eax, 6
        public_661ae98 : nop
        test cl, cl
        jns public_661ae9f
        add eax, 6
        public_661ae9f : nop
        test ch, 1
        je public_661aea7
        add eax, 8
        public_661aea7 : nop
        lea edx, ds:[edi*4]
        pop edi
        cmp edx, eax
        pop esi
        sete al
        ret 8
        public_661aeb8 : nop
        cmp ecx, 2
        jne public_661aecc
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        cmp eax, 8
        pop esi
        sete al
        ret 8
        public_661aecc : nop
        mov ecx, dword ptr ss : [esp+0xC]
        xor eax, eax
        test cl, 1
        je public_661aedc
        mov eax, 4
        public_661aedc : nop
        test cl, 2
        je public_661aee4
        add eax, 0xC
        public_661aee4 : nop
        test cl, 4
        je public_661aeec
        add eax, 0x10
        public_661aeec : nop
        test cl, 8
        je public_661aef6
        mov eax, 4
        public_661aef6 : nop
        test cl, 0x40
        je public_661aefe
        add eax, 6
        public_661aefe : nop
        test cl, cl
        jns public_661af05
        add eax, 6
        public_661af05 : nop
        test ch, 1
        je public_661af0d
        add eax, 8
        public_661af0d : nop
        cmp eax, 0x1C
        pop edi
        sete al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x661adc0)
        ASM_EXPORT_ENTRY_FIRST(0x661ae3f, public_661ae3f)
        ASM_EXPORT_ENTRY(0x661ae46, public_661ae46)
        ASM_EXPORT_ENTRY(0x661ae4d, public_661ae4d)
        ASM_EXPORT_ENTRY(0x661ae54, public_661ae54)
        ASM_EXPORT_ENTRY_LAST(0x661ae5b, public_661ae5b)
    }
}

#undef public_661adf8
#undef public_661ae3f
#undef public_661ae46
#undef public_661ae4d
#undef public_661ae54
#undef public_661ae5b
#undef public_661ae62
#undef public_661ae64
#undef public_661ae66
#undef public_661ae76
#undef public_661ae7e
#undef public_661ae86
#undef public_661ae90
#undef public_661ae98
#undef public_661ae9f
#undef public_661aea7
#undef public_661aeb8
#undef public_661aecc
#undef public_661aedc
#undef public_661aee4
#undef public_661aeec
#undef public_661aef6
#undef public_661aefe
#undef public_661af05
#undef public_661af0d

#pragma init_seg(compiler)
extern "C" void const* const public_661ae3f = __AsmFindLabelExport(&internal_661adc0, 0x661ae3f);
extern "C" void const* const public_661ae46 = __AsmFindLabelExport(&internal_661adc0, 0x661ae46);
extern "C" void const* const public_661ae4d = __AsmFindLabelExport(&internal_661adc0, 0x661ae4d);
extern "C" void const* const public_661ae54 = __AsmFindLabelExport(&internal_661adc0, 0x661ae54);
extern "C" void const* const public_661ae5b = __AsmFindLabelExport(&internal_661adc0, 0x661ae5b);
