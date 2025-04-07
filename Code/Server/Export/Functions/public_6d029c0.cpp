#include "Server-PCH.h"


#define public_6d029de _public_6d029de
#define public_6d029e0 _public_6d029e0
#define public_6d029eb _public_6d029eb
#define public_6d029fd _public_6d029fd
#define public_6d029ff _public_6d029ff
#define public_6d02a27 _public_6d02a27
#define public_6d02a29 _public_6d02a29
#define public_6d02a3e _public_6d02a3e

PROC_DECLARE(0x6d029c0, internal_6d029c0, public_6d029c0);
extern "C" NAKED register_t __cdecl internal_6d029c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        add ecx, 0x1B8
        test ebx, ebx
        push edi
        je public_6d029de
        lea eax, ds:[ebx+8]
        jmp public_6d029e0
        public_6d029de : nop
        xor eax, eax
        public_6d029e0 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_6d029eb
        push eax
        call dword ptr ds : [public_6d6447c]
        public_6d029eb : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6d029fd
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d029ff
        public_6d029fd : nop
        xor eax, eax
        public_6d029ff : nop
        mov edi, dword ptr ds : [eax+0xB4]
        test edi, edi
        je public_6d02a3e
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [edx+0xAC]
        test ebx, ebx
        je public_6d02a27
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        jmp public_6d02a29
        public_6d02a27 : nop
        xor eax, eax
        public_6d02a29 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0xC]
        push esi
        push eax
        push edi
        call dword ptr ds : [edx+0x1E4]
        public_6d02a3e : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d029c0)
    }
}

#undef public_6d029de
#undef public_6d029e0
#undef public_6d029eb
#undef public_6d029fd
#undef public_6d029ff
#undef public_6d02a27
#undef public_6d02a29
#undef public_6d02a3e
