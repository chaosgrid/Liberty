#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34850);
CLANG_FORWARD_PROC_SYMBOL(public_6f34890);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f34886 _public_6f34886

PROC_DECLARE(0x6f34850, internal_6f34850, public_6f34850);
extern "C" NAKED register_t __cdecl internal_6f34850()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6f5aa78
        mov dword ptr ds : [esi+4], offset public_6f5aa58
        mov dword ptr ds : [esi+8], offset public_6f5aa40
        je public_6f34886
        mov ecx, edi
        call public_6f34890
        push edi
        call public_6f57e26
        add esp, 4
        mov dword ptr ds : [esi+0xC], 0
        public_6f34886 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f34850)
    }
}

#undef public_6f34886
