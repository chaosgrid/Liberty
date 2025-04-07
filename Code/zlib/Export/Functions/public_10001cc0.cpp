#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001cc0);

PROC_DECLARE(0x10001cc0, internal_10001cc0, public_10001cc0);
extern "C" NAKED register_t __cdecl internal_10001cc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov edx, ecx
        push edi
        mov edi, dword ptr ds : [eax+0x14]
        shr edx, 8
        mov byte ptr ds : [esi+edi], dl
        mov edx, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [eax+8]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov byte ptr ds : [edx+esi], cl
        mov ecx, dword ptr ds : [eax+0x14]
        inc ecx
        pop edi
        mov dword ptr ds : [eax+0x14], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10001cc0)
    }
}
