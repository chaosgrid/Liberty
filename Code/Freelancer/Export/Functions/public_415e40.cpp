#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415e40);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);

PROC_DECLARE(0x415e40, internal_415e40, public_415e40);
extern "C" NAKED register_t __cdecl internal_415e40()
{
    __asm
    {
        sub esp, 0x74
        mov eax, dword ptr ss : [esp+0x78]
        push ebx
        push esi
        push edi
        mov ebx, ecx
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0x14]
        rep movsd
        push eax
        mov ecx, ebx
        call public_415ea0
        mov edx, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        pop edi
        pop esi
        fidiv dword ptr ss : [esp+0x80]
        pop ebx
        add esp, 0x74
        ret 8
        UNREACHABLE_TRAP(0x415e40)
    }
}
