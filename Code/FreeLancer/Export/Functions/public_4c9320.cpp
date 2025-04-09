#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421050);
CLANG_FORWARD_PROC_SYMBOL(public_421070);

PROC_DECLARE(0x4c9320, internal_4c9320, public_4c9320);
extern "C" NAKED register_t __cdecl internal_4c9320()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi]
        lea edx, ds:[eax+0x60]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], edi
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0xD0]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ds:[eax+0x3C]
        lea esi, ds:[eax+0xAC]
        mov edi, edx
        mov ecx, 0xC
        rep movsd
        lea esi, ds:[eax+0x7C]
        push edx
        mov ecx, esi
        call public_421050
        mov ecx, esi
        call public_421070
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c9320)
    }
}
