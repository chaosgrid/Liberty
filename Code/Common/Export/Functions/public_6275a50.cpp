#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62783e0);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

PROC_DECLARE(0x6275a50, internal_6275a50, public_6275a50);
extern "C" NAKED register_t __cdecl internal_6275a50()
{
    __asm
    {
        push ebx
        push esi
        push edi
        add ecx, 0x134
        call public_62783e0
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ebx
        call public_6334400
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x1C]
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x34], ecx
        mov edx, dword ptr ds : [eax+4]
        add esp, 8
        mov dword ptr ds : [ebx+0x38], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x3C], eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6275a50)
    }
}
