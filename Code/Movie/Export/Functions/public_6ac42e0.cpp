#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac42e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac45a0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca890);

PROC_DECLARE(0x6ac42e0, internal_6ac42e0, public_6ac42e0);
extern "C" NAKED register_t __cdecl internal_6ac42e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        lea edi, ds:[ebx+0xA74]
        mov eax, dword ptr ds : [esi+0x108]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ecx
        call public_6aca890
        mov ecx, dword ptr ds : [esi+0x100]
        mov eax, dword ptr ds : [esi+0x110]
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push esi
        push edx
        shl ecx, 1
        push eax
        push ecx
        push edi
        call public_6ac45a0
        pop edi
        pop esi
        pop ebx
        ret 0x1C
        UNREACHABLE_TRAP(0x6ac42e0)
    }
}
