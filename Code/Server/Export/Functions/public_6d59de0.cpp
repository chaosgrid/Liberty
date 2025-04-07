#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59de0);

#define public_6d59df3 _public_6d59df3
#define public_6d59e01 _public_6d59e01
#define public_6d59e08 _public_6d59e08

PROC_DECLARE(0x6d59de0, internal_6d59de0, public_6d59de0);
extern "C" NAKED register_t __cdecl internal_6d59de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6d59e08
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6d59df3 : nop
        test eax, eax
        je public_6d59e01
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6d59e01 : nop
        add eax, 8
        dec edx
        jne public_6d59df3
        pop esi
        public_6d59e08 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d59de0)
    }
}

#undef public_6d59df3
#undef public_6d59e01
#undef public_6d59e08
