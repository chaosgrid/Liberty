#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef23c0);

#define public_6ef23db _public_6ef23db
#define public_6ef2421 _public_6ef2421

PROC_DECLARE(0x6ef23c0, internal_6ef23c0, public_6ef23c0);
extern "C" NAKED register_t __cdecl internal_6ef23c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, dword ptr ds : [esi+0xBC]
        jb public_6ef23db
        mov dword ptr ds : [esi+0xC0], 0
        public_6ef23db : nop
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jbe public_6ef2421
        mov eax, dword ptr ds : [esi+0xB8]
        push ebx
        mov edx, dword ptr ds : [eax]
        push 0
        lea ebx, ds:[esi+0x10C]
        push ebx
        lea ebx, ds:[esi+0x108]
        push ebx
        lea ebx, ds:[esi+0x104]
        push ebx
        lea ebx, ds:[esi+0x100]
        push ebx
        push ecx
        mov ecx, dword ptr ds : [esi+0xC0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        pop ebx
        jl public_6ef2421
        mov al, 1
        pop esi
        ret 4
        public_6ef2421 : nop
        mov dword ptr ds : [esi+0x100], 0
        mov dword ptr ds : [esi+0x108], 0
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef23c0)
    }
}

#undef public_6ef23db
#undef public_6ef2421
