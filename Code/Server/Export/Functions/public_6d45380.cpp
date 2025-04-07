#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c5f0);

#define public_6d453c0 _public_6d453c0

PROC_DECLARE(0x6d45380, internal_6d45380, public_6d45380);
extern "C" NAKED register_t __cdecl internal_6d45380()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jbe public_6d453c0
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6d453c0
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        pop esi
        je public_6d453c0
        imul ecx, 0x418
        lea ecx, ds:[ecx+edx-0x418]
        call public_6d4c5f0
        public_6d453c0 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d45380)
    }
}

#undef public_6d453c0
