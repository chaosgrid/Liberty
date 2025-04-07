#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a680);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_52c45d _public_52c45d
#define public_52c465 _public_52c465
#define public_52c476 _public_52c476

PROC_DECLARE(0x52c420, internal_52c420, public_52c420);
extern "C" NAKED register_t __cdecl internal_52c420()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x2C]
        test al, al
        je public_52c476
        push esi
        push edi
        mov byte ptr ds : [ebx+0x2C], 0
        call public_52a680
        mov esi, eax
        lea edi, ds:[ebx+0x28]
        push edi
        mov ecx, esi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_52c45d
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_52c45d
        lea eax, ss:[esp+0xC]
        jmp public_52c465
        public_52c45d : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_52c465 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        pop edi
        pop esi
        je public_52c476
        call dword ptr ds : [public_5c68a8]
        public_52c476 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c6850]
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x52c420)
    }
}

#undef public_52c45d
#undef public_52c465
#undef public_52c476
