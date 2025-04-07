#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6200);

#define public_62ccc69 _public_62ccc69
#define public_62ccc6e _public_62ccc6e

PROC_DECLARE(0x62ccc10, internal_62ccc10, public_62ccc10);
extern "C" NAKED register_t __cdecl internal_62ccc10()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_62ccc69
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+7]
        mov byte ptr ss : [esp+7], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x134]
        mov al, byte ptr ss : [esp+7]
        test al, al
        jne public_62ccc69
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_62e6200
        add esp, 4
        test eax, 0x7F0000
        mov eax, 1
        jne public_62ccc6e
        public_62ccc69 : nop
        mov eax, 2
        public_62ccc6e : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62ccc10)
    }
}

#undef public_62ccc69
#undef public_62ccc6e
