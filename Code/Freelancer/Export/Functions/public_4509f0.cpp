#include "Freelancer-PCH.h"

PROC_DECLARE(0x4509f0, internal_4509f0, public_4509f0);
extern "C" NAKED register_t __cdecl internal_4509f0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x60]
        shl ecx, 6
        add ecx, offset public_668b04
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], ecx
        lea edx, ss:[esp]
        push edx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[eax+0x20]
        call dword ptr ds : [public_5c6278]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4509f0)
    }
}
