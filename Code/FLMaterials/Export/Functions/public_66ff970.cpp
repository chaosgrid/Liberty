#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff970);

#define public_66ff986 _public_66ff986

PROC_DECLARE(0x66ff970, internal_66ff970, public_66ff970);
extern "C" NAKED register_t __cdecl internal_66ff970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_66ff986
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_66ff986 : nop
        ret 
        UNREACHABLE_TRAP(0x66ff970)
    }
}

#undef public_66ff986
