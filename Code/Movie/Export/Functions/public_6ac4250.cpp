#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4250);
CLANG_FORWARD_PROC_SYMBOL(public_6ac45a0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca890);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

PROC_DECLARE(0x6ac4250, internal_6ac4250, public_6ac4250);
extern "C" NAKED register_t __cdecl internal_6ac4250()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x24]
        lea eax, ds:[edi+0x538]
        lea ebx, ds:[edi+0xA4C]
        mov edx, dword ptr ds : [esi+0x108]
        sub ecx, eax
        sar ecx, 2
        not ecx
        and ecx, 1
        push edx
        push ebx
        lea ebp, ds:[edi+0xA74]
        lea eax, ds:[eax+ecx*4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        push eax
        mov eax, dword ptr ds : [esi+0x100]
        push eax
        push ecx
        call public_6acb290
        mov edx, dword ptr ds : [esi+0x108]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push ebp
        push eax
        push ecx
        push ebx
        push edx
        call public_6aca890
        mov edx, dword ptr ds : [esi+0x100]
        mov ecx, dword ptr ds : [esi+0x110]
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push esi
        push eax
        shl edx, 1
        push ecx
        push edx
        push ebp
        call public_6ac45a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6ac4250)
    }
}
