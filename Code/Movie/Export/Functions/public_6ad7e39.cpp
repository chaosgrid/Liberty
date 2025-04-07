#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7e39);

PROC_DECLARE(0x6ad7e39, internal_6ad7e39, public_6ad7e39);
extern "C" NAKED register_t __cdecl internal_6ad7e39()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        mov ecx, esi
        add esi, esi
        mov dword ptr ds : [eax], esi
        lea esi, ds:[edi+edi]
        shr ecx, 0x1F
        or esi, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, edi
        mov dword ptr ds : [eax+4], esi
        shr edx, 0x1F
        shl ecx, 1
        or ecx, edx
        pop edi
        mov dword ptr ds : [eax+8], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad7e39)
    }
}
