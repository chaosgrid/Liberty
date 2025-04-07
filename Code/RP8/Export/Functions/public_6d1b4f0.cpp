#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b4f0);

#define public_6d1b51f _public_6d1b51f
#define public_6d1b535 _public_6d1b535
#define public_6d1b549 _public_6d1b549
#define public_6d1b563 _public_6d1b563
#define public_6d1b57d _public_6d1b57d
#define public_6d1b592 _public_6d1b592
#define public_6d1b5b1 _public_6d1b5b1
#define public_6d1b5ba _public_6d1b5ba
#define public_6d1b5ea _public_6d1b5ea
#define public_6d1b5f5 _public_6d1b5f5
#define public_6d1b600 _public_6d1b600
#define public_6d1b60b _public_6d1b60b
#define public_6d1b614 _public_6d1b614
#define public_6d1b616 _public_6d1b616

PROC_DECLARE(0x6d1b4f0, internal_6d1b4f0, public_6d1b4f0);
extern "C" NAKED register_t __cdecl internal_6d1b4f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x30
        mov dword ptr ss : [ebp-0x2C], ecx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x28], ecx
        mov dword ptr ss : [ebp-0xC], 0
        mov edx, dword ptr ss : [ebp-0x28]
        and edx, 0xC
        cmp edx, 0xC
        jne public_6d1b51f
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x1C
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d1b549
        public_6d1b51f : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        and ecx, 4
        cmp ecx, 4
        jne public_6d1b535
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x10
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d1b549
        public_6d1b535 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        and eax, 2
        cmp eax, 2
        jne public_6d1b549
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d1b549 : nop
        mov dword ptr ss : [ebp-0x10], 0
        mov edx, dword ptr ss : [ebp-0x28]
        and edx, 0x10
        test edx, edx
        je public_6d1b563
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x10], eax
        public_6d1b563 : nop
        mov dword ptr ss : [ebp-0x14], 0
        mov ecx, dword ptr ss : [ebp-0x28]
        and ecx, 0x40
        test ecx, ecx
        je public_6d1b57d
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 4
        mov dword ptr ss : [ebp-0x14], edx
        public_6d1b57d : nop
        mov eax, dword ptr ss : [ebp-0x28]
        and eax, 0x80
        test eax, eax
        je public_6d1b592
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d1b592 : nop
        mov dword ptr ss : [ebp-0x18], 0
        mov edx, dword ptr ss : [ebp-0x28]
        and edx, 0xF00
        shr edx, 8
        mov dword ptr ss : [ebp-0x20], edx
        mov dword ptr ss : [ebp-0x1C], 0
        jmp public_6d1b5ba
        public_6d1b5b1 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 1
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d1b5ba : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, dword ptr ss : [ebp-0x20]
        jge public_6d1b616
        mov edx, dword ptr ss : [ebp-0x1C]
        lea ecx, ds:[edx+edx+0x10]
        mov eax, dword ptr ss : [ebp-0x28]
        shr eax, cl
        and eax, 3
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x30], ecx
        cmp dword ptr ss : [ebp-0x30], 3
        ja public_6d1b614
        mov edx, dword ptr ss : [ebp-0x30]
/*FIXUP jmp dword ptr ds : [edx*4+public_6d1b639] @0x6d1b5e3*/
  JMPTB cmp edx, 0
  JMPTB je public_6d1b5f5
  JMPTB cmp edx, 1
  JMPTB je public_6d1b600
  JMPTB cmp edx, 2
  JMPTB je public_6d1b60b
  JMPTB cmp edx, 3
  JMPTB je public_6d1b5ea
  JMPTB int 3
        public_6d1b5ea : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d1b614
        public_6d1b5f5 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6d1b614
        public_6d1b600 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x18], edx
        jmp public_6d1b614
        public_6d1b60b : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x18], eax
        public_6d1b614 : nop
        jmp public_6d1b5b1
        public_6d1b616 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, dword ptr ss : [ebp-0x10]
        add ecx, dword ptr ss : [ebp-0x14]
        add ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ss : [ebp-4]
        imul eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1b4f0)
        ASM_EXPORT_ENTRY_FIRST(0x6d1b5ea, public_6d1b5ea)
        ASM_EXPORT_ENTRY(0x6d1b5f5, public_6d1b5f5)
        ASM_EXPORT_ENTRY(0x6d1b600, public_6d1b600)
        ASM_EXPORT_ENTRY_LAST(0x6d1b60b, public_6d1b60b)
    }
}

#undef public_6d1b51f
#undef public_6d1b535
#undef public_6d1b549
#undef public_6d1b563
#undef public_6d1b57d
#undef public_6d1b592
#undef public_6d1b5b1
#undef public_6d1b5ba
#undef public_6d1b5ea
#undef public_6d1b5f5
#undef public_6d1b600
#undef public_6d1b60b
#undef public_6d1b614
#undef public_6d1b616

#pragma init_seg(compiler)
extern "C" void const* const public_6d1b5ea = __AsmFindLabelExport(&internal_6d1b4f0, 0x6d1b5ea);
extern "C" void const* const public_6d1b5f5 = __AsmFindLabelExport(&internal_6d1b4f0, 0x6d1b5f5);
extern "C" void const* const public_6d1b600 = __AsmFindLabelExport(&internal_6d1b4f0, 0x6d1b600);
extern "C" void const* const public_6d1b60b = __AsmFindLabelExport(&internal_6d1b4f0, 0x6d1b60b);
