#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356740);

#define public_635676d _public_635676d
#define public_63567b2 _public_63567b2
#define public_63567c5 _public_63567c5
#define public_63567dd _public_63567dd
#define public_63567e7 _public_63567e7
#define public_63567f1 _public_63567f1

PROC_DECLARE(0x6356740, internal_6356740, public_6356740);
extern "C" NAKED register_t __cdecl internal_6356740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        xor eax, eax
        mov ah, byte ptr ds : [ecx+0xE]
        push esi
        mov esi, dword ptr ss : [esp+8]
        movsx edx, word ptr ds : [esi+0x1A]
        push edi
        movsx eax, ax
        sar eax, 8
        cmp eax, edx
        jne public_63567f1
        cmp eax, 3
        ja public_63567e7
/*FIXUP jmp dword ptr ds : [eax*4+public_63567f8] @0x6356766*/
  JMPTB cmp eax, 0
  JMPTB je public_635676d
  JMPTB cmp eax, 1
  JMPTB je public_63567c5
  JMPTB cmp eax, 2
  JMPTB je public_63567b2
  JMPTB cmp eax, 3
  JMPTB je public_63567dd
  JMPTB int 3
        public_635676d : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, esi
        and ecx, 0xFFFFFFF0
        mov edi, dword ptr ds : [ecx]
        and edi, 0xFFF
        mov eax, edx
        and eax, 0xFFFFFFF0
        inc edi
        shl edi, 4
        sub ecx, edi
        mov edi, dword ptr ds : [eax]
        and edi, 0xFFF
        inc edi
        shl edi, 4
        sub eax, edi
        cmp eax, ecx
        jne public_63567f1
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx]
        xor eax, edi
        and eax, 0xFFFF
        neg eax
        sbb eax, eax
        pop edi
        inc eax
        pop esi
        ret 4
        public_63567b2 : nop
        mov eax, dword ptr ds : [esi+0x14]
        xor eax, dword ptr ds : [ecx+0x10]
        and eax, 0xFFFFFFF0
        neg eax
        sbb eax, eax
        pop edi
        inc eax
        pop esi
        ret 4
        public_63567c5 : nop
        mov ecx, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [esi+0x14]
        cmp ecx, esi
        je public_63567dd
        mov eax, dword ptr ds : [ecx]
        shl eax, 1
        sar eax, 0x11
        lea ecx, ds:[ecx+eax*4]
        cmp ecx, esi
        jne public_63567f1
        public_63567dd : nop
        pop edi
        mov eax, 1
        pop esi
        ret 4
        public_63567e7 : nop
        mov dword ptr ds : [0], 0
        public_63567f1 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6356740)
        ASM_EXPORT_ENTRY_FIRST(0x635676d, public_635676d)
        ASM_EXPORT_ENTRY(0x63567b2, public_63567b2)
        ASM_EXPORT_ENTRY(0x63567c5, public_63567c5)
        ASM_EXPORT_ENTRY_LAST(0x63567dd, public_63567dd)
    }
}

#undef public_635676d
#undef public_63567b2
#undef public_63567c5
#undef public_63567dd
#undef public_63567e7
#undef public_63567f1

#pragma init_seg(compiler)
extern "C" void const* const public_635676d = __AsmFindLabelExport(&internal_6356740, 0x635676d);
extern "C" void const* const public_63567b2 = __AsmFindLabelExport(&internal_6356740, 0x63567b2);
extern "C" void const* const public_63567c5 = __AsmFindLabelExport(&internal_6356740, 0x63567c5);
extern "C" void const* const public_63567dd = __AsmFindLabelExport(&internal_6356740, 0x63567dd);
