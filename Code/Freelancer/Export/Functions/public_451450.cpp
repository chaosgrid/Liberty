#include "Freelancer-PCH.h"


#define public_451470 _public_451470
#define public_451481 _public_451481
#define public_45148c _public_45148c
#define public_45148e _public_45148e
#define public_4514e2 _public_4514e2

PROC_DECLARE(0x451450, internal_451450, public_451450);
extern "C" NAKED register_t __cdecl internal_451450()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0x74], 0xFFFFFFFF
        push edi
        je public_4514e2
        mov edx, dword ptr ss : [esp+0x10]
        or edi, 0xFFFFFFFF
        xor eax, eax
        lea ecx, ds:[esi+0x120]
        push ebp
        public_451470 : nop
        cmp byte ptr ds : [esi+eax+0x160], 0
        je public_451481
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, dword ptr ds : [edx+0x14]
        je public_45148c
        public_451481 : nop
        inc eax
        add ecx, 4
        cmp eax, 0x10
        jl public_451470
        jmp public_45148e
        public_45148c : nop
        mov edi, eax
        public_45148e : nop
        mov al, byte ptr ds : [edi+esi+0x160]
        test al, al
        pop ebp
        je public_4514e2
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi+edi*4+0xE0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi+edi*4+0xE0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+edi*4+0xE0], 0xFFFFFFFF
        mov dword ptr ds : [esi+edi*4+0x120], 0xFFFFFFFF
        mov byte ptr ds : [edi+esi+0x160], 0
        public_4514e2 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x451450)
    }
}

#undef public_451470
#undef public_451481
#undef public_45148c
#undef public_45148e
#undef public_4514e2
