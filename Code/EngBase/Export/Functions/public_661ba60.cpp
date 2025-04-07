#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661bac8 _public_661bac8
#define public_661bafc _public_661bafc

PROC_DECLARE(0x661ba60, internal_661ba60, public_661ba60);
extern "C" NAKED register_t __cdecl internal_661ba60()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push ecx
        push edx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, 0x3F800000
        je public_661bafc
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        mov dword ptr ss : [esp+8], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        jne public_661bac8
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661bac8 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0xC]
        push edx
        lea edx, ss:[esp+0xC]
        push esi
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        public_661bafc : nop
        pop edi
        pop esi
        add esp, 0x20
        ret 0x14
        UNREACHABLE_TRAP(0x661ba60)
    }
}

#undef public_661bac8
#undef public_661bafc
