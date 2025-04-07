#include "Server-PCH.h"


#define public_6cfe08e _public_6cfe08e
#define public_6cfe0a7 _public_6cfe0a7
#define public_6cfe0b3 _public_6cfe0b3
#define public_6cfe0b5 _public_6cfe0b5
#define public_6cfe0d7 _public_6cfe0d7
#define public_6cfe0e3 _public_6cfe0e3

PROC_DECLARE(0x6cfe070, internal_6cfe070, public_6cfe070);
extern "C" NAKED register_t __cdecl internal_6cfe070()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6cfe08e
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 1
        call dword ptr ds : [edx+0x158]
        public_6cfe08e : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+8], edx
        je public_6cfe0b3
        public_6cfe0a7 : nop
        cmp word ptr ds : [eax], dx
        je public_6cfe0b5
        add eax, 2
        cmp eax, ecx
        jne public_6cfe0a7
        public_6cfe0b3 : nop
        mov eax, ecx
        public_6cfe0b5 : nop
        cmp eax, ecx
        jne public_6cfe0e3
        lea edx, ss:[esp+8]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d641b4]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cfe0e3
        mov ecx, dword ptr ss : [esp+8]
        public_6cfe0d7 : nop
        cmp word ptr ds : [eax], cx
        je public_6cfe0e3
        add eax, 2
        cmp eax, esi
        jne public_6cfe0d7
        public_6cfe0e3 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cfe070)
    }
}

#undef public_6cfe08e
#undef public_6cfe0a7
#undef public_6cfe0b3
#undef public_6cfe0b5
#undef public_6cfe0d7
#undef public_6cfe0e3
