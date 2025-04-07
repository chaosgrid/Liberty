#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62857a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629acaa _public_629acaa
#define public_629acdc _public_629acdc

PROC_DECLARE(0x629ac70, internal_629ac70, public_629ac70);
extern "C" NAKED register_t __cdecl internal_629ac70()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0xE0], 7
        je public_629acdc
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_629acdc
        push edi
        lea eax, ss:[esp+0x14]
        push esi
        push eax
        call public_62857a0
        mov edi, eax
        mov eax, dword ptr ds : [public_63fc1e4]
        add esp, 8
        test eax, eax
        jne public_629acaa
        call public_6391cf0
        mov dword ptr ds : [public_63fc1e4], eax
        public_629acaa : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        add esi, 8
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x18
        ret 4
        public_629acdc : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x629ac70)
    }
}

#undef public_629acaa
#undef public_629acdc
