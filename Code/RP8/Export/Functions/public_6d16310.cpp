#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16310);

#define public_6d16334 _public_6d16334
#define public_6d1633d _public_6d1633d
#define public_6d1636d _public_6d1636d
#define public_6d16378 _public_6d16378
#define public_6d16383 _public_6d16383
#define public_6d1638e _public_6d1638e
#define public_6d16397 _public_6d16397
#define public_6d16399 _public_6d16399

PROC_DECLARE(0x6d16310, internal_6d16310, public_6d16310);
extern "C" NAKED register_t __cdecl internal_6d16310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0xF00
        shr eax, 8
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-8], 0
        jmp public_6d1633d
        public_6d16334 : nop
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 1
        mov dword ptr ss : [ebp-8], ecx
        public_6d1633d : nop
        mov edx, dword ptr ss : [ebp-8]
        cmp edx, dword ptr ss : [ebp-0xC]
        jge public_6d16399
        mov eax, dword ptr ss : [ebp-8]
        lea ecx, ds:[eax+eax+0x10]
        mov edx, dword ptr ss : [ebp+8]
        shr edx, cl
        and edx, 3
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x14], eax
        cmp dword ptr ss : [ebp-0x14], 3
        ja public_6d16397
        mov ecx, dword ptr ss : [ebp-0x14]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d163a0] @0x6d16366*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d16378
  JMPTB cmp ecx, 1
  JMPTB je public_6d16383
  JMPTB cmp ecx, 2
  JMPTB je public_6d1638e
  JMPTB cmp ecx, 3
  JMPTB je public_6d1636d
  JMPTB int 3
        public_6d1636d : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 4
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d16397
        public_6d16378 : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 8
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d16397
        public_6d16383 : nop
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0xC
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d16397
        public_6d1638e : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0x10
        mov dword ptr ss : [ebp-4], edx
        public_6d16397 : nop
        jmp public_6d16334
        public_6d16399 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d16310)
        ASM_EXPORT_ENTRY_FIRST(0x6d1636d, public_6d1636d)
        ASM_EXPORT_ENTRY(0x6d16378, public_6d16378)
        ASM_EXPORT_ENTRY(0x6d16383, public_6d16383)
        ASM_EXPORT_ENTRY_LAST(0x6d1638e, public_6d1638e)
    }
}

#undef public_6d16334
#undef public_6d1633d
#undef public_6d1636d
#undef public_6d16378
#undef public_6d16383
#undef public_6d1638e
#undef public_6d16397
#undef public_6d16399

#pragma init_seg(compiler)
extern "C" void const* const public_6d1636d = __AsmFindLabelExport(&internal_6d16310, 0x6d1636d);
extern "C" void const* const public_6d16378 = __AsmFindLabelExport(&internal_6d16310, 0x6d16378);
extern "C" void const* const public_6d16383 = __AsmFindLabelExport(&internal_6d16310, 0x6d16383);
extern "C" void const* const public_6d1638e = __AsmFindLabelExport(&internal_6d16310, 0x6d1638e);
