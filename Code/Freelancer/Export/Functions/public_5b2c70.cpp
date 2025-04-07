#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b2c70);

#define public_5b2ca9 _public_5b2ca9

PROC_DECLARE(0x5b2c70, internal_5b2c70, public_5b2c70);
extern "C" NAKED register_t __cdecl internal_5b2c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp byte ptr ds : [eax], 0
        je public_5b2ca9
        push eax
        mov ecx, offset public_67ea78
        mov dword ptr ds : [public_67ecc4], 7
        call dword ptr ds : [public_5c63cc]
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_5b2ca9
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x60]
        public_5b2ca9 : nop
        ret 
        UNREACHABLE_TRAP(0x5b2c70)
    }
}

#undef public_5b2ca9
