#include "Server-PCH.h"


#define public_6ce8eb1 _public_6ce8eb1
#define public_6ce8eb3 _public_6ce8eb3
#define public_6ce8efd _public_6ce8efd
#define public_6ce8f05 _public_6ce8f05
#define public_6ce8f3e _public_6ce8f3e

PROC_DECLARE(0x6ce8e90, internal_6ce8e90, public_6ce8e90);
extern "C" NAKED register_t __cdecl internal_6ce8e90()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6ce8eb1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6ce8eb1
        mov esi, eax
        jmp public_6ce8eb3
        public_6ce8eb1 : nop
        xor esi, esi
        public_6ce8eb3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push 0
        push edx
        call dword ptr ds : [public_6d64250]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 8
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[esi+0xE4]
        call dword ptr ds : [public_6d64254]
        mov esi, eax
        test esi, esi
        je public_6ce8f3e
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        mov bl, 1
        je public_6ce8f05
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x210]
        public_6ce8efd : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0x10
        public_6ce8f05 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        fsub dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ce8efd
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x210]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0x10
        public_6ce8f3e : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ce8e90)
    }
}

#undef public_6ce8eb1
#undef public_6ce8eb3
#undef public_6ce8efd
#undef public_6ce8f05
#undef public_6ce8f3e
