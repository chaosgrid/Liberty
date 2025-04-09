#include "FreeLancer-PCH.h"


#define public_5343e6 _public_5343e6
#define public_534406 _public_534406
#define public_53440c _public_53440c

PROC_DECLARE(0x5343d0, internal_5343d0, public_5343d0);
extern "C" NAKED register_t __cdecl internal_5343d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC4]
        mov esi, dword ptr ds : [edi]
        xor bl, bl
        cmp esi, edi
        je public_53440c
        mov ebp, dword ptr ss : [esp+0x1C]
        public_5343e6 : nop
        test bl, bl
        jne public_53440c
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_534406
        mov edx, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        lea ecx, ds:[esi+8]
        mov bl, 1
        call dword ptr ds : [public_5c697c]
        public_534406 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_5343e6
        public_53440c : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5343d0)
    }
}

#undef public_5343e6
#undef public_534406
#undef public_53440c
