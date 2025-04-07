#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447850);
CLANG_FORWARD_PROC_SYMBOL(public_4c4260);

#define public_4c4313 _public_4c4313

PROC_DECLARE(0x4c4260, internal_4c4260, public_4c4260);
extern "C" NAKED register_t __cdecl internal_4c4260()
{
    __asm
    {
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        sub esp, 0x20
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x7C]
        push esi
        mov ecx, offset public_672960
        xor bl, bl
        call dword ptr ds : [public_5c6370]
        test eax, eax
        je public_4c4313
        mov cl, byte ptr ds : [eax]
        mov dx, word ptr ds : [eax+2]
        mov byte ptr ss : [esp+0xC], cl
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov cl, byte ptr ds : [eax+0xC]
        mov word ptr ss : [esp+0xE], dx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ss : [esp+0x18], cl
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [public_673384]
        mov dword ptr ss : [esp+0x1C], edx
        mov dl, byte ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0x1C]
        inc ecx
        push edi
        mov dword ptr ds : [public_673384], ecx
        push esi
        mov ecx, offset public_672960
        mov bl, 1
        mov byte ptr ss : [esp+0x2C], dl
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_5c6438]
        mov esi, eax
        call public_446be0
        test eax, eax
        je public_4c4313
        mov edx, dword ptr ss : [esp+0xE]
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call public_447850
        public_4c4313 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x4c4260)
    }
}

#undef public_4c4313
