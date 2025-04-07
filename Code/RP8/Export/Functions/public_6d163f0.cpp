#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d163f0);

#define public_6d16413 _public_6d16413
#define public_6d16429 _public_6d16429
#define public_6d1643d _public_6d1643d
#define public_6d16457 _public_6d16457
#define public_6d16471 _public_6d16471
#define public_6d16487 _public_6d16487
#define public_6d164a5 _public_6d164a5
#define public_6d164ae _public_6d164ae
#define public_6d164de _public_6d164de
#define public_6d164e9 _public_6d164e9
#define public_6d164f4 _public_6d164f4
#define public_6d164ff _public_6d164ff
#define public_6d16508 _public_6d16508
#define public_6d1650a _public_6d1650a

PROC_DECLARE(0x6d163f0, internal_6d163f0, public_6d163f0);
extern "C" NAKED register_t __cdecl internal_6d163f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0xC
        cmp eax, 0xC
        jne public_6d16413
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0x1C
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1643d
        public_6d16413 : nop
        mov edx, dword ptr ss : [ebp+8]
        and edx, 4
        cmp edx, 4
        jne public_6d16429
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0x10
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d1643d
        public_6d16429 : nop
        mov ecx, dword ptr ss : [ebp+8]
        and ecx, 2
        cmp ecx, 2
        jne public_6d1643d
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0xC
        mov dword ptr ss : [ebp-4], edx
        public_6d1643d : nop
        mov dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0x10
        test eax, eax
        je public_6d16457
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0xC
        mov dword ptr ss : [ebp-8], ecx
        public_6d16457 : nop
        mov dword ptr ss : [ebp-0xC], 0
        mov edx, dword ptr ss : [ebp+8]
        and edx, 0x40
        test edx, edx
        je public_6d16471
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 4
        mov dword ptr ss : [ebp-0xC], eax
        public_6d16471 : nop
        mov ecx, dword ptr ss : [ebp+8]
        and ecx, 0x80
        test ecx, ecx
        je public_6d16487
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 4
        mov dword ptr ss : [ebp-0xC], edx
        public_6d16487 : nop
        mov dword ptr ss : [ebp-0x10], 0
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0xF00
        shr eax, 8
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x14], 0
        jmp public_6d164ae
        public_6d164a5 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 1
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d164ae : nop
        mov edx, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ss : [ebp-0x18]
        jge public_6d1650a
        mov eax, dword ptr ss : [ebp-0x14]
        lea ecx, ds:[eax+eax+0x10]
        mov edx, dword ptr ss : [ebp+8]
        shr edx, cl
        and edx, 3
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x20], eax
        cmp dword ptr ss : [ebp-0x20], 3
        ja public_6d16508
        mov ecx, dword ptr ss : [ebp-0x20]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d1651a] @0x6d164d7*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d164e9
  JMPTB cmp ecx, 1
  JMPTB je public_6d164f4
  JMPTB cmp ecx, 2
  JMPTB je public_6d164ff
  JMPTB cmp ecx, 3
  JMPTB je public_6d164de
  JMPTB int 3
        public_6d164de : nop
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 4
        mov dword ptr ss : [ebp-0x10], edx
        jmp public_6d16508
        public_6d164e9 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 8
        mov dword ptr ss : [ebp-0x10], eax
        jmp public_6d16508
        public_6d164f4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d16508
        public_6d164ff : nop
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x10], edx
        public_6d16508 : nop
        jmp public_6d164a5
        public_6d1650a : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, dword ptr ss : [ebp-8]
        add eax, dword ptr ss : [ebp-0xC]
        add eax, dword ptr ss : [ebp-0x10]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d163f0)
        ASM_EXPORT_ENTRY_FIRST(0x6d164de, public_6d164de)
        ASM_EXPORT_ENTRY(0x6d164e9, public_6d164e9)
        ASM_EXPORT_ENTRY(0x6d164f4, public_6d164f4)
        ASM_EXPORT_ENTRY_LAST(0x6d164ff, public_6d164ff)
    }
}

#undef public_6d16413
#undef public_6d16429
#undef public_6d1643d
#undef public_6d16457
#undef public_6d16471
#undef public_6d16487
#undef public_6d164a5
#undef public_6d164ae
#undef public_6d164de
#undef public_6d164e9
#undef public_6d164f4
#undef public_6d164ff
#undef public_6d16508
#undef public_6d1650a

#pragma init_seg(compiler)
extern "C" void const* const public_6d164de = __AsmFindLabelExport(&internal_6d163f0, 0x6d164de);
extern "C" void const* const public_6d164e9 = __AsmFindLabelExport(&internal_6d163f0, 0x6d164e9);
extern "C" void const* const public_6d164f4 = __AsmFindLabelExport(&internal_6d163f0, 0x6d164f4);
extern "C" void const* const public_6d164ff = __AsmFindLabelExport(&internal_6d163f0, 0x6d164ff);
