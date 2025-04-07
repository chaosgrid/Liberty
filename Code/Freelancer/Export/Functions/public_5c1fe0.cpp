#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59ce40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5c1fe8 _public_5c1fe8
#define public_5c2000 _public_5c2000
#define public_5c2007 _public_5c2007
#define public_5c200f _public_5c200f
#define public_5c202a _public_5c202a

PROC_DECLARE(0x5c1fe0, internal_5c1fe0, public_5c1fe0);
/* CHUNK of public_5661b0 */
extern "C" NAKED register_t __cdecl internal_5c1fe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c1fe8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5c2000
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x7C
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5c2007
        public_5c2000 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5c2007 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
/*FIXUP public_5c200f : nop
        push offset _public_59ce40 @0x5c200f*/
  FIXUP public_5c200f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ce40
        push 5
        push 0xF0
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x84
        push eax
        call public_5b7ec6
        ret 
        public_5c202a : nop
        mov eax, offset public_5fc2e8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1fe0)
        ASM_EXPORT_ENTRY_FIRST(0x5c1fe8, public_5c1fe8)
        ASM_EXPORT_ENTRY(0x5c2000, public_5c2000)
        ASM_EXPORT_ENTRY(0x5c2007, public_5c2007)
        ASM_EXPORT_ENTRY(0x5c200f, public_5c200f)
        ASM_EXPORT_ENTRY_LAST(0x5c202a, public_5c202a)
    }
}

#undef public_5c1fe8
#undef public_5c2000
#undef public_5c2007
#undef public_5c200f
#undef public_5c202a

#pragma init_seg(compiler)
extern "C" void const* const public_5c1fe8 = __AsmFindLabelExport(&internal_5c1fe0, 0x5c1fe8);
extern "C" void const* const public_5c2000 = __AsmFindLabelExport(&internal_5c1fe0, 0x5c2000);
extern "C" void const* const public_5c2007 = __AsmFindLabelExport(&internal_5c1fe0, 0x5c2007);
extern "C" void const* const public_5c200f = __AsmFindLabelExport(&internal_5c1fe0, 0x5c200f);
extern "C" void const* const public_5c202a = __AsmFindLabelExport(&internal_5c1fe0, 0x5c202a);
