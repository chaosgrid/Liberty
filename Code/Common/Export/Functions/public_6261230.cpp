#include "Common-PCH.h"

PROC_DECLARE(0x6261230, internal_6261230, public_6261230);
extern "C" NAKED register_t __cdecl internal_6261230()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea eax, ds:[esi+0x24]
        mov edi, dword ptr ds : [eax]
        mov edx, ecx
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [eax+8]
        lea edi, ds:[ecx+0xC]
        mov ecx, 9
        mov dword ptr ds : [edx+8], eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261230)
    }
}
