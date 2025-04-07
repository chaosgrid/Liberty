#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d4b550 _public_6d4b550
#define public_6d4b575 _public_6d4b575

PROC_DECLARE(0x6d4b520, internal_6d4b520, public_6d4b520);
extern "C" NAKED register_t __cdecl internal_6d4b520()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x3B0]
        lea ebp, ds:[esi+esi*4+4]
        push ebp
        call public_6d60012
        mov ebx, eax
        mov dword ptr ds : [ebx], esi
        mov eax, dword ptr ds : [edi+0x3A4]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        lea esi, ds:[ebx+4]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ds:[ecx]
        public_6d4b550 : nop
        cmp eax, dword ptr ds : [edi+0x3A4]
        je public_6d4b575
        mov cl, byte ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi], edx
        mov byte ptr ds : [esi+4], cl
        lea ecx, ss:[esp+0x10]
        add esi, 5
        call public_6d160d0
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6d4b550
        public_6d4b575 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebx
        push edx
        call dword ptr ds : [eax+0x170]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d4b520)
    }
}

#undef public_6d4b550
#undef public_6d4b575
