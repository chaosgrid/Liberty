#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a401 _public_6c0a401
#define public_6c0a40a _public_6c0a40a

PROC_DECLARE(0x6c0a3f0, internal_6c0a3f0, public_6c0a3f0);
/* CHUNK of public_6bd9f70 */
extern "C" NAKED register_t __cdecl internal_6c0a3f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6bda0f0
        add esp, 8
        ret 
        public_6c0a401 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a40a : nop
        mov eax, offset public_6c0ead8
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a3f0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a401, public_6c0a401)
        ASM_EXPORT_ENTRY_LAST(0x6c0a40a, public_6c0a40a)
    }
}

#undef public_6c0a401
#undef public_6c0a40a

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a401 = __AsmFindLabelExport(&internal_6c0a3f0, 0x6c0a401);
extern "C" void const* const public_6c0a40a = __AsmFindLabelExport(&internal_6c0a3f0, 0x6c0a40a);
