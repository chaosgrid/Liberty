#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a10);

PROC_DECLARE(0x62cff40, internal_62cff40, public_62cff40);
extern "C" NAKED register_t __cdecl internal_62cff40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ebp
        push ecx
        mov ecx, esi
        call public_62d2090
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x30]
        mov bl, al
        mov eax, dword ptr ds : [esi+0x24]
        push ebp
        push eax
        lea edi, ds:[esi+0x30]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx]
        push 1
        mov ecx, edi
        call public_62d5a10
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0xA8]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0xA8]
        push eax
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62cff40)
    }
}
