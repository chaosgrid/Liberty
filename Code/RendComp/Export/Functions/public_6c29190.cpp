#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c24c60);
CLANG_FORWARD_PROC_SYMBOL(public_6c29190);

PROC_DECLARE(0x6c29190, internal_6c29190, public_6c29190);
extern "C" NAKED register_t __cdecl internal_6c29190()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+0x68]
        mov dword ptr ds : [edi+0x68], ecx
        mov edx, dword ptr ds : [esi+0x6C]
        mov dword ptr ds : [edi+0x6C], edx
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+4]
        push ecx
        lea edx, ds:[esi+4]
        push edx
        call public_6c24c60
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+0x18]
        push ecx
        lea edx, ds:[esi+0x18]
        push edx
        call public_6c24c60
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+0x2C]
        push ecx
        lea edx, ds:[esi+0x2C]
        push edx
        call public_6c24c60
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+0x40]
        push ecx
        lea edx, ds:[esi+0x40]
        push edx
        call public_6c24c60
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        add edi, 0x54
        push edi
        add esi, 0x54
        push esi
        call public_6c24c60
        add esp, 0x3C
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c29190)
    }
}
