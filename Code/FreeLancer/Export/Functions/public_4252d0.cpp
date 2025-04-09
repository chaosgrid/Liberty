#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4252d0);

#define public_4252f0 _public_4252f0
#define public_42531f _public_42531f
#define public_42532c _public_42532c

PROC_DECLARE(0x4252d0, internal_4252d0, public_4252d0);
extern "C" NAKED register_t __cdecl internal_4252d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        cmp esi, eax
        mov dword ptr ss : [esp+8], eax
        je public_42532c
        push ebx
        mov ebx, dword ptr ds : [public_5c603c]
        push edi
        nop 
        lea esp, ss:[esp]
        public_4252f0 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call ebx
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_42531f
        mov ecx, esi
        call dword ptr ds : [public_5c60b4]
        test al, al
        jne public_42531f
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_42531f
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x20]
        public_42531f : nop
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x20
        cmp esi, eax
        jne public_4252f0
        pop edi
        pop ebx
        public_42532c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4252d0)
    }
}

#undef public_4252f0
#undef public_42531f
#undef public_42532c
