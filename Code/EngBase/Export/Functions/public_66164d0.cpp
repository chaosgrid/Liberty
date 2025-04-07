#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);
CLANG_FORWARD_PROC_SYMBOL(public_661b070);

#define public_6616512 _public_6616512
#define public_661651a _public_661651a
#define public_6616541 _public_6616541

PROC_DECLARE(0x66164d0, internal_66164d0, public_66164d0);
extern "C" NAKED register_t __cdecl internal_66164d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        xor bl, bl
        cmp eax, 0xFFFFFFFF
        push esi
        je public_6616541
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6616512
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6616512
        lea eax, ss:[esp+0x14]
        jmp public_661651a
        public_6616512 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_661651a : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+0x24]
        cmp esi, eax
        pop edi
        je public_6616541
        mov ecx, dword ptr ds : [esi+0xC]
        test byte ptr ds : [ecx+0x38], 1
        je public_6616541
        call public_661b070
        mov ecx, dword ptr ds : [esi+0xC]
        pop esi
        mov al, 1
        pop ebx
        and byte ptr ds : [ecx+0x38], 0xFE
        pop ecx
        ret 8
        public_6616541 : nop
        mov al, bl
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66164d0)
    }
}

#undef public_6616512
#undef public_661651a
#undef public_6616541
