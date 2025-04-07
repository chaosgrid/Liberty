#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6271203 _public_6271203
#define public_627120b _public_627120b
#define public_627121e _public_627121e

PROC_DECLARE(0x62711d0, internal_62711d0, public_62711d0);
extern "C" NAKED register_t __cdecl internal_62711d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0xC]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6271203
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6271203
        lea eax, ss:[esp+0xC]
        jmp public_627120b
        public_6271203 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_627120b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_627121e
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_627121e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62711d0)
    }
}

#undef public_6271203
#undef public_627120b
#undef public_627121e
