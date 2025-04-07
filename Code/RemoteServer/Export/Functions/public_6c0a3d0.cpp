#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a3db _public_6c0a3db

PROC_DECLARE(0x6c0a3d0, internal_6c0a3d0, public_6c0a3d0);
/* CHUNK of public_6bd9930 */
extern "C" NAKED register_t __cdecl internal_6c0a3d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a3db : nop
        mov eax, offset public_6c0eaac
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a3d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a3db, public_6c0a3db)
    }
}

#undef public_6c0a3db

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a3db = __AsmFindLabelExport(&internal_6c0a3d0, 0x6c0a3db);
