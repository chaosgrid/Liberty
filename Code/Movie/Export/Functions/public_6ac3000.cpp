#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3000);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4080);

PROC_DECLARE(0x6ac3000, internal_6ac3000, public_6ac3000);
extern "C" NAKED register_t __cdecl internal_6ac3000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x14
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea eax, ss:[esp+8]
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ecx
        call public_6ac4080
        mov ecx, 5
        lea esi, ss:[esp+8]
        mov edx, dword ptr ss : [esp+0x24]
        lea edi, ss:[esp+8]
        rep movsd
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], eax
        mov eax, 1
        mov dword ptr ds : [edx+0xC], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3000)
    }
}
