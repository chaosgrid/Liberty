#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6eac240);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ebfb4c _public_6ebfb4c

PROC_DECLARE(0x6ebfac0, internal_6ebfac0, public_6ebfac0);
extern "C" NAKED register_t __cdecl internal_6ebfac0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ebfb4c
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ebfb4c
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f47980
        mov edx, dword ptr ds : [eax+0x48]
        cmp edx, dword ptr ds : [esi+0x34]
        jne public_6ebfb4c
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, dword ptr ds : [eax+0x308]
        jne public_6ebfb4c
        mov ecx, dword ptr ds : [eax+8]
        call public_6f47980
        test eax, eax
        je public_6ebfb4c
        mov edx, dword ptr ds : [esi+4]
        add edx, 0x308
        push edx
        mov ecx, eax
        call public_6eac110
        test eax, eax
        je public_6ebfb4c
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edx+0xC]
        push ecx
        add esi, 0x10
        push esi
        mov ecx, eax
        call public_6eac240
        test al, al
        je public_6ebfb4c
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x14]
        cmp eax, dword ptr ds : [edi]
        jne public_6ebfb4c
        mov bl, 1
        public_6ebfb4c : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ebfac0)
    }
}

#undef public_6ebfb4c
