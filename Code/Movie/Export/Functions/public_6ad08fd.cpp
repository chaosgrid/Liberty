#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad089c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad08fd);

#define public_6ad093a _public_6ad093a
#define public_6ad093e _public_6ad093e
#define public_6ad0941 _public_6ad0941
#define public_6ad0945 _public_6ad0945
#define public_6ad094e _public_6ad094e

PROC_DECLARE(0x6ad08fd, internal_6ad08fd, public_6ad08fd);
extern "C" NAKED register_t __cdecl internal_6ad08fd()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa08 @0x6ad0902*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa08
/*FIXUP push offset _public_6ad023c @0x6ad0907*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        and dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ds : [public_6add568]
        test eax, eax
        je public_6ad0945
        mov dword ptr ss : [ebp-4], 1
        call eax
        jmp public_6ad0941
        public_6ad093a : nop
        push 1
        pop eax
        ret 
        public_6ad093e : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6ad0941 : nop
        and dword ptr ss : [ebp-4], 0
        public_6ad0945 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad094e
        public_6ad094e : nop
        jmp public_6ad089c
        UNREACHABLE_TRAP(0x6ad08fd)
        ASM_EXPORT_ENTRY_FIRST(0x6ad093a, public_6ad093a)
        ASM_EXPORT_ENTRY(0x6ad093e, public_6ad093e)
        ASM_EXPORT_ENTRY_LAST(0x6ad094e, public_6ad094e)
    }
}

#undef public_6ad093a
#undef public_6ad093e
#undef public_6ad0941
#undef public_6ad0945
#undef public_6ad094e

#pragma init_seg(compiler)
extern "C" void const* const public_6ad093a = __AsmFindLabelExport(&internal_6ad08fd, 0x6ad093a);
extern "C" void const* const public_6ad093e = __AsmFindLabelExport(&internal_6ad08fd, 0x6ad093e);
extern "C" void const* const public_6ad094e = __AsmFindLabelExport(&internal_6ad08fd, 0x6ad094e);
