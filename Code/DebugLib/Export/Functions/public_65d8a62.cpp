#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8a62);
CLANG_FORWARD_PROC_SYMBOL(public_65d9068);

#define public_65d8a73 _public_65d8a73

PROC_DECLARE(0x65d8a62, internal_65d8a62, public_65d8a62);
extern "C" NAKED register_t __cdecl internal_65d8a62()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_65d8a73
        xor eax, eax
        ret 
        public_65d8a73 : nop
        jmp public_65d9068
        UNREACHABLE_TRAP(0x65d8a62)
    }
}

#undef public_65d8a73
