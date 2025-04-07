#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23910);

#define public_6d23926 _public_6d23926

PROC_DECLARE(0x6d23910, internal_6d23910, public_6d23910);
extern "C" NAKED register_t __cdecl internal_6d23910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp eax, ecx
        je public_6d23926
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d68cd8
        public_6d23926 : nop
        ret 
        UNREACHABLE_TRAP(0x6d23910)
    }
}

#undef public_6d23926
