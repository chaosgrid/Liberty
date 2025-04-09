#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_583b90);

PROC_DECLARE(0x583b90, internal_583b90, public_583b90);
extern "C" NAKED register_t __cdecl internal_583b90()
{
    __asm
    {
        sub esp, 0xC
        xor eax, eax
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x4FC], eax
        mov dword ptr ds : [ecx+0x500], eax
        mov dword ptr ds : [ecx+0x504], eax
        mov dword ptr ds : [ecx+0x4F4], eax
        mov dword ptr ds : [ecx+0x4F8], eax
        mov byte ptr ds : [ecx+0x518], al
        mov dword ptr ds : [ecx+0x4B8], edx
        mov dword ptr ds : [ecx+0x508], edx
        mov dword ptr ds : [ecx+0x4F0], edx
        mov dword ptr ss : [esp], eax
        mov edx, dword ptr ss : [esp]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        lea eax, ds:[ecx+0x52C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ss : [esp], 0
        mov eax, dword ptr ss : [esp]
        add ecx, 0x520
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x583b90)
    }
}
