#include "Common-PCH.h"


#define public_62cf174 _public_62cf174
#define public_62cf185 _public_62cf185
#define public_62cf1ab _public_62cf1ab
#define public_62cf1ba _public_62cf1ba

PROC_DECLARE(0x62cf150, internal_62cf150, public_62cf150);
extern "C" NAKED register_t __cdecl internal_62cf150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        xor ebx, ebx
        cmp eax, 0xFFFFFFFF
        mov esi, ecx
        mov byte ptr ds : [esi+0x29], bl
        je public_62cf174
        mov byte ptr ds : [esi+0x2A], 1
        mov dword ptr ds : [esi+4], 3
        pop esi
        xor al, al
        pop ebx
        ret 0xC
        public_62cf174 : nop
        mov dword ptr ds : [esi+4], 6
        cmp byte ptr ds : [esi+0x29], bl
        jne public_62cf185
        cmp byte ptr ds : [esi+0x2A], bl
        je public_62cf1ab
        public_62cf185 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi-0x18]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        push 2
        call dword ptr ds : [edx+0x60]
        mov byte ptr ds : [esi+0x29], bl
        mov byte ptr ds : [esi+0x2A], bl
        public_62cf1ab : nop
        cmp byte ptr ds : [esi+0x28], bl
        je public_62cf1ba
        mov byte ptr ds : [esi+0x28], bl
        mov dword ptr ds : [esi+4], 6
        public_62cf1ba : nop
        pop esi
        xor al, al
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62cf150)
    }
}

#undef public_62cf174
#undef public_62cf185
#undef public_62cf1ab
#undef public_62cf1ba
