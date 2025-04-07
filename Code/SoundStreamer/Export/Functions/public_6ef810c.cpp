#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef810c);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);
CLANG_FORWARD_PROC_SYMBOL(public_6efa148);

#define public_6ef8149 _public_6ef8149
#define public_6ef814d _public_6ef814d
#define public_6ef8150 _public_6ef8150
#define public_6ef8154 _public_6ef8154
#define public_6ef815d _public_6ef815d

PROC_DECLARE(0x6ef810c, internal_6ef810c, public_6ef810c);
extern "C" NAKED register_t __cdecl internal_6ef810c()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc458 @0x6ef8111*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc458
/*FIXUP push offset _public_6efa070 @0x6ef8116*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
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
        mov eax, dword ptr ds : [public_6f010ec]
        test eax, eax
        je public_6ef8154
        mov dword ptr ss : [ebp-4], 1
        call eax
        jmp public_6ef8150
        public_6ef8149 : nop
        push 1
        pop eax
        ret 
        public_6ef814d : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6ef8150 : nop
        and dword ptr ss : [ebp-4], 0
        public_6ef8154 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ef815d
        public_6ef815d : nop
        jmp public_6efa148
        UNREACHABLE_TRAP(0x6ef810c)
        ASM_EXPORT_ENTRY_FIRST(0x6ef8149, public_6ef8149)
        ASM_EXPORT_ENTRY(0x6ef814d, public_6ef814d)
        ASM_EXPORT_ENTRY_LAST(0x6ef815d, public_6ef815d)
    }
}

#undef public_6ef8149
#undef public_6ef814d
#undef public_6ef8150
#undef public_6ef8154
#undef public_6ef815d

#pragma init_seg(compiler)
extern "C" void const* const public_6ef8149 = __AsmFindLabelExport(&internal_6ef810c, 0x6ef8149);
extern "C" void const* const public_6ef814d = __AsmFindLabelExport(&internal_6ef810c, 0x6ef814d);
extern "C" void const* const public_6ef815d = __AsmFindLabelExport(&internal_6ef810c, 0x6ef815d);
