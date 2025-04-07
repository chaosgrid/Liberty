#include "Server-PCH.h"


#define public_6cffa06 _public_6cffa06
#define public_6cffa16 _public_6cffa16
#define public_6cffa30 _public_6cffa30
#define public_6cffa3c _public_6cffa3c
#define public_6cffa3e _public_6cffa3e
#define public_6cffa60 _public_6cffa60
#define public_6cffa6c _public_6cffa6c

PROC_DECLARE(0x6cff9d0, internal_6cff9d0, public_6cff9d0);
extern "C" NAKED register_t __cdecl internal_6cff9d0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6cffa16
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ss : [esp+4], 4
        mov byte ptr ss : [esp+8], al
        mov byte ptr ss : [esp+9], al
        mov dword ptr ss : [esp+0xC], 0
        jne public_6cffa06
        mov dword ptr ss : [esp+0xC], 0x3F800000
        public_6cffa06 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+4]
        push eax
        call dword ptr ds : [edx+0x194]
        public_6cffa16 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], edx
        je public_6cffa3c
        nop 
        public_6cffa30 : nop
        cmp word ptr ds : [eax], dx
        je public_6cffa3e
        add eax, 2
        cmp eax, ecx
        jne public_6cffa30
        public_6cffa3c : nop
        mov eax, ecx
        public_6cffa3e : nop
        cmp eax, ecx
        jne public_6cffa6c
        lea edx, ss:[esp+0x18]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d641b4]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cffa6c
        mov ecx, dword ptr ss : [esp+0x18]
        public_6cffa60 : nop
        cmp word ptr ds : [eax], cx
        je public_6cffa6c
        add eax, 2
        cmp eax, esi
        jne public_6cffa60
        public_6cffa6c : nop
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6cff9d0)
    }
}

#undef public_6cffa06
#undef public_6cffa16
#undef public_6cffa30
#undef public_6cffa3c
#undef public_6cffa3e
#undef public_6cffa60
#undef public_6cffa6c
