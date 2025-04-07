#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62193b0);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);

#define public_621949a _public_621949a

PROC_DECLARE(0x62193b0, internal_62193b0, public_62193b0);
extern "C" NAKED register_t __cdecl internal_62193b0()
{
    __asm
    {
        sub esp, 0x30
        mov ecx, offset public_62579dc
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        call public_6241070
        test eax, eax
        je public_621949a
        mov eax, dword ptr ds : [public_62578e8]
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        mov edx, dword ptr ds : [esi+0xFC]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi+0xFC]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0xC8]
        push edx
        push 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [public_6257bc0]
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+4], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov ecx, offset public_62579dc
        call public_6241180
        public_621949a : nop
        xor eax, eax
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x62193b0)
    }
}

#undef public_621949a
