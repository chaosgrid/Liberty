#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);

#define public_62f0d63 _public_62f0d63

PROC_DECLARE(0x62f0d50, internal_62f0d50, public_62f0d50);
extern "C" NAKED register_t __cdecl internal_62f0d50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x3C]
        dec edx
        push esi
        mov esi, edx
        test esi, esi
        mov dword ptr ds : [ecx+0x3C], edx
        jne public_62f0d63
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        public_62f0d63 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62f0d50)
    }
}

#undef public_62f0d63
