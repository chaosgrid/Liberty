#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4f8a20);

PROC_DECLARE(0x513510, internal_513510, public_513510);
extern "C" NAKED register_t __cdecl internal_513510()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x40]
        push eax
        mov ebx, ecx
        call public_4f7ef0
        mov ebp, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0x40]
        lea edi, ss:[esp+0x10]
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        lea edi, ds:[ebx+0x10]
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        push ebp
        rep movsd
        push eax
        mov ecx, ebx
        call public_4f8a20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x513510)
    }
}
