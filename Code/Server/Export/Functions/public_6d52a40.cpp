#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d583b0);

#define public_6d52a78 _public_6d52a78
#define public_6d52a7c _public_6d52a7c

PROC_DECLARE(0x6d52a40, internal_6d52a40, public_6d52a40);
extern "C" NAKED register_t __cdecl internal_6d52a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[esi+0x44]
        call public_6d583b0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x48]
        je public_6d52a7c
        mov esi, dword ptr ds : [eax+0x1C]
        test esi, esi
        je public_6d52a7c
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        jbe public_6d52a78
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x44]
        public_6d52a78 : nop
        mov byte ptr ds : [esi+0x30], 1
        public_6d52a7c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d52a40)
    }
}

#undef public_6d52a78
#undef public_6d52a7c
