#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6d55ecd _public_6d55ecd
#define public_6d55f23 _public_6d55f23

PROC_DECLARE(0x6d55e60, internal_6d55e60, public_6d55e60);
extern "C" NAKED register_t __cdecl internal_6d55e60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x34
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d55f23
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6d55f23
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov esi, dword ptr ds : [ecx+edx+0x348]
        test esi, esi
        je public_6d55f23
        mov esi, dword ptr ss : [esp+0x40]
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_6d902f0]
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6d55ecd
        call public_6d5ff70
        mov dword ptr ds : [public_6d902f0], eax
        public_6d55ecd : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        push edx
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x160]
        xor eax, eax
        public_6d55f23 : nop
        pop esi
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6d55e60)
    }
}

#undef public_6d55ecd
#undef public_6d55f23
