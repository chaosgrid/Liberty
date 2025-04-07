#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62abde0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62abd7c _public_62abd7c
#define public_62abd9b _public_62abd9b

PROC_DECLARE(0x62abd50, internal_62abd50, public_62abd50);
extern "C" NAKED register_t __cdecl internal_62abd50()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x16C]
        test al, al
        jne public_62abd7c
        lea eax, ds:[esi+0x174]
        push eax
        lea ecx, ds:[esi+0x170]
        push ecx
        mov ecx, esi
        mov byte ptr ds : [esi+0x16C], 1
        call public_62abde0
        public_62abd7c : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0x170]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [public_63fc2e4]
        test eax, eax
        jne public_62abd9b
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62abd9b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x174]
        push edx
        add esi, 8
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62abd50)
    }
}

#undef public_62abd7c
#undef public_62abd9b
