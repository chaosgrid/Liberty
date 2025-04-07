#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6616090);
CLANG_FORWARD_PROC_SYMBOL(public_661a260);
CLANG_FORWARD_PROC_SYMBOL(public_661ad90);

#define public_661647e _public_661647e
#define public_6616486 _public_6616486
#define public_66164c3 _public_66164c3

PROC_DECLARE(0x6616430, internal_6616430, public_6616430);
extern "C" NAKED register_t __cdecl internal_6616430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        xor bl, bl
        push esi
        cmp eax, 0xFFFFFFFF
        push edi
        je public_66164c3
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        je public_66164c3
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        lea esi, ss:[ebp+0x20]
        push eax
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], eax
        je public_661647e
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_661647e
        lea eax, ss:[esp+0x1C]
        jmp public_6616486
        public_661647e : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6616486 : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x24]
        cmp esi, eax
        je public_66164c3
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        call public_661ad90
        mov ecx, dword ptr ds : [esi+0xC]
        mov dl, byte ptr ds : [ecx+0x38]
        mov bl, dl
        xor bl, al
        and bl, 1
        xor bl, dl
        mov byte ptr ds : [ecx+0x38], bl
        and bl, 1
        je public_66164c3
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        push eax
        push ecx
        lea ecx, ss:[ebp-8]
        call public_6616090
        public_66164c3 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6616430)
    }
}

#undef public_661647e
#undef public_6616486
#undef public_66164c3
