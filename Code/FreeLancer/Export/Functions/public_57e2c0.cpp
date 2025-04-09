#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57db50);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);

#define public_57e2fd _public_57e2fd

PROC_DECLARE(0x57e2c0, internal_57e2c0, public_57e2c0);
extern "C" NAKED register_t __cdecl internal_57e2c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6c50]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+esi]
        push ecx
        push edi
        push ebx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6c4c]
        test al, al
        jne public_57e2fd
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebx
        push esi
        push edi
        call public_57db50
        add esp, 0x10
        public_57e2fd : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x57e2c0)
    }
}

#undef public_57e2fd
