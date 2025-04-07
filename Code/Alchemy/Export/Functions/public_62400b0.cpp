#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

#define public_62400c4 _public_62400c4
#define public_62400d6 _public_62400d6

PROC_DECLARE(0x62400b0, internal_62400b0, public_62400b0);
extern "C" NAKED register_t __cdecl internal_62400b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        je public_62400d6
        dec eax
        je public_62400c4
        mov eax, 0xFFFFFFFE
        ret 0xC
        public_62400c4 : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        add eax, 0x1C
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        public_62400d6 : nop
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        add edx, 0x4C
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x62400b0)
    }
}

#undef public_62400c4
#undef public_62400d6
