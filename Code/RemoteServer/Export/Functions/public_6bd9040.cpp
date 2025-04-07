#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd909a _public_6bd909a
#define public_6bd90a0 _public_6bd90a0
#define public_6bd90be _public_6bd90be

PROC_DECLARE(0x6bd9040, internal_6bd9040, public_6bd9040);
extern "C" NAKED register_t __cdecl internal_6bd9040()
{
    __asm
    {
        push ecx
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        push 5
        push 1
        call public_6be1750
        test eax, eax
        jne public_6bd90be
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        xor edx, edx
        cmp esi, edx
        push edi
        mov edi, eax
        je public_6bd909a
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, edx
        je public_6bd909a
        push ebx
        lea ebx, ds:[eax+0x28]
        push ecx
        mov dword ptr ds : [ebx], ecx
        call public_6c09d26
        mov ecx, dword ptr ds : [ebx]
        mov edx, ecx
        mov dword ptr ds : [edi+0x2C], eax
        shr ecx, 2
        mov edi, eax
        rep movsd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop ebx
        jmp public_6bd90a0
        public_6bd909a : nop
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [edi+0x2C], edx
        public_6bd90a0 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x20], ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        push eax
        call dword ptr ds : [edx+0x170]
        pop edi
        pop esi
        public_6bd90be : nop
        pop ebp
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6bd9040)
    }
}

#undef public_6bd909a
#undef public_6bd90a0
#undef public_6bd90be
