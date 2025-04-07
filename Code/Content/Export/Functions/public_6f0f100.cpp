#include "Content-PCH.h"


#define public_6f0f12c _public_6f0f12c
#define public_6f0f140 _public_6f0f140

PROC_DECLARE(0x6f0f100, internal_6f0f100, public_6f0f100);
extern "C" NAKED register_t __cdecl internal_6f0f100()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x81]
        test al, al
        jne public_6f0f140
        mov al, byte ptr ds : [esi+0x19]
        test al, al
        jne public_6f0f12c
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x54]
        mov al, byte ptr ds : [esi+0x19]
        test al, al
        je public_6f0f140
        public_6f0f12c : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_6fb3610]
        add esp, 4
        mov byte ptr ds : [esi+0x81], 1
        public_6f0f140 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f0f100)
    }
}

#undef public_6f0f12c
#undef public_6f0f140
