#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b650);

#define public_6d1b690 _public_6d1b690
#define public_6d1b6ac _public_6d1b6ac
#define public_6d1b6f8 _public_6d1b6f8
#define public_6d1b70e _public_6d1b70e
#define public_6d1b722 _public_6d1b722
#define public_6d1b73c _public_6d1b73c
#define public_6d1b756 _public_6d1b756
#define public_6d1b76b _public_6d1b76b
#define public_6d1b78a _public_6d1b78a
#define public_6d1b793 _public_6d1b793
#define public_6d1b7c3 _public_6d1b7c3
#define public_6d1b7ce _public_6d1b7ce
#define public_6d1b7d9 _public_6d1b7d9
#define public_6d1b7e4 _public_6d1b7e4
#define public_6d1b7ed _public_6d1b7ed
#define public_6d1b7ef _public_6d1b7ef

PROC_DECLARE(0x6d1b650, internal_6d1b650, public_6d1b650);
extern "C" NAKED register_t __cdecl internal_6d1b650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x30
        mov dword ptr ss : [ebp-0x2C], ecx
        mov eax, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [eax+0x20], 0
        je public_6d1b6ac
        mov ecx, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [ecx+0x20], 0
        je public_6d1b6ac
        mov edx, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [edx+0x10], 0
        je public_6d1b690
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x30]
        public_6d1b690 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx+0x20], 0
        public_6d1b6ac : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x28], ecx
        mov dword ptr ss : [ebp-0xC], 0
        mov edx, dword ptr ss : [ebp-0x28]
        and edx, 0xC
        cmp edx, 0xC
        jne public_6d1b6f8
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x1C
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d1b722
        public_6d1b6f8 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        and ecx, 4
        cmp ecx, 4
        jne public_6d1b70e
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x10
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d1b722
        public_6d1b70e : nop
        mov eax, dword ptr ss : [ebp-0x28]
        and eax, 2
        cmp eax, 2
        jne public_6d1b722
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d1b722 : nop
        mov dword ptr ss : [ebp-0x10], 0
        mov edx, dword ptr ss : [ebp-0x28]
        and edx, 0x10
        test edx, edx
        je public_6d1b73c
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x10], eax
        public_6d1b73c : nop
        mov dword ptr ss : [ebp-0x14], 0
        mov ecx, dword ptr ss : [ebp-0x28]
        and ecx, 0x40
        test ecx, ecx
        je public_6d1b756
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 4
        mov dword ptr ss : [ebp-0x14], edx
        public_6d1b756 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        and eax, 0x80
        test eax, eax
        je public_6d1b76b
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d1b76b : nop
        mov dword ptr ss : [ebp-0x18], 0
        mov edx, dword ptr ss : [ebp-0x28]
        and edx, 0xF00
        shr edx, 8
        mov dword ptr ss : [ebp-0x20], edx
        mov dword ptr ss : [ebp-0x1C], 0
        jmp public_6d1b793
        public_6d1b78a : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 1
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d1b793 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, dword ptr ss : [ebp-0x20]
        jge public_6d1b7ef
        mov edx, dword ptr ss : [ebp-0x1C]
        lea ecx, ds:[edx+edx+0x10]
        mov eax, dword ptr ss : [ebp-0x28]
        shr eax, cl
        and eax, 3
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x30], ecx
        cmp dword ptr ss : [ebp-0x30], 3
        ja public_6d1b7ed
        mov edx, dword ptr ss : [ebp-0x30]
/*FIXUP jmp dword ptr ds : [edx*4+public_6d1b836] @0x6d1b7bc*/
  JMPTB cmp edx, 0
  JMPTB je public_6d1b7ce
  JMPTB cmp edx, 1
  JMPTB je public_6d1b7d9
  JMPTB cmp edx, 2
  JMPTB je public_6d1b7e4
  JMPTB cmp edx, 3
  JMPTB je public_6d1b7c3
  JMPTB int 3
        public_6d1b7c3 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d1b7ed
        public_6d1b7ce : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6d1b7ed
        public_6d1b7d9 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x18], edx
        jmp public_6d1b7ed
        public_6d1b7e4 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x18], eax
        public_6d1b7ed : nop
        jmp public_6d1b78a
        public_6d1b7ef : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, dword ptr ss : [ebp-0x10]
        add ecx, dword ptr ss : [ebp-0x14]
        add ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [edx+8]
        imul eax, ecx
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 0x20
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [ecx+0x5C]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1b650)
        ASM_EXPORT_ENTRY_FIRST(0x6d1b7c3, public_6d1b7c3)
        ASM_EXPORT_ENTRY(0x6d1b7ce, public_6d1b7ce)
        ASM_EXPORT_ENTRY(0x6d1b7d9, public_6d1b7d9)
        ASM_EXPORT_ENTRY_LAST(0x6d1b7e4, public_6d1b7e4)
    }
}

#undef public_6d1b690
#undef public_6d1b6ac
#undef public_6d1b6f8
#undef public_6d1b70e
#undef public_6d1b722
#undef public_6d1b73c
#undef public_6d1b756
#undef public_6d1b76b
#undef public_6d1b78a
#undef public_6d1b793
#undef public_6d1b7c3
#undef public_6d1b7ce
#undef public_6d1b7d9
#undef public_6d1b7e4
#undef public_6d1b7ed
#undef public_6d1b7ef

#pragma init_seg(compiler)
extern "C" void const* const public_6d1b7c3 = __AsmFindLabelExport(&internal_6d1b650, 0x6d1b7c3);
extern "C" void const* const public_6d1b7ce = __AsmFindLabelExport(&internal_6d1b650, 0x6d1b7ce);
extern "C" void const* const public_6d1b7d9 = __AsmFindLabelExport(&internal_6d1b650, 0x6d1b7d9);
extern "C" void const* const public_6d1b7e4 = __AsmFindLabelExport(&internal_6d1b650, 0x6d1b7e4);
