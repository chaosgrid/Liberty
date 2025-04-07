#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_548eb0);

#define public_5356b0 _public_5356b0

PROC_DECLARE(0x535650, internal_535650, public_535650);
extern "C" NAKED register_t __cdecl internal_535650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push eax
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c66c8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0x20]
        push eax
        call public_548eb0
        add esp, 4
        test al, al
        je public_5356b0
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x104]
        public_5356b0 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x535650)
    }
}

#undef public_5356b0
