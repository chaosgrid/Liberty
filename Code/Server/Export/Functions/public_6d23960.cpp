#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23960);

#define public_6d23976 _public_6d23976

PROC_DECLARE(0x6d23960, internal_6d23960, public_6d23960);
extern "C" NAKED register_t __cdecl internal_6d23960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp eax, ecx
        je public_6d23976
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d68e04
        public_6d23976 : nop
        ret 
        UNREACHABLE_TRAP(0x6d23960)
    }
}

#undef public_6d23976
