#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4160);

#define public_6fa417e _public_6fa417e

PROC_DECLARE(0x6fa4160, internal_6fa4160, public_6fa4160);
extern "C" NAKED register_t __cdecl internal_6fa4160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6fa417e
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6fbd3f0
        public_6fa417e : nop
        ret 
        UNREACHABLE_TRAP(0x6fa4160)
    }
}

#undef public_6fa417e
