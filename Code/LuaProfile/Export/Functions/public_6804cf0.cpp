#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804cf0);
CLANG_FORWARD_PROC_SYMBOL(public_68058a0);
CLANG_FORWARD_PROC_SYMBOL(public_680bb70);

PROC_DECLARE(0x6804cf0, internal_6804cf0, public_6804cf0);
extern "C" NAKED register_t __cdecl internal_6804cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0x20]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [esi+0x20]
        lea eax, ds:[ebx+ebp]
        push edi
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_680bb70
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        add esi, 0x28
        mov edi, eax
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x1C]
        and ecx, 3
        rep movsb
        lea esi, ds:[edx+0x28]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        lea edi, ds:[eax+ebx]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        call public_68058a0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6804cf0)
    }
}
