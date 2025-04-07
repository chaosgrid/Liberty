#include "Server-PCH.h"


#define public_6d310e0 _public_6d310e0
#define public_6d310f7 _public_6d310f7
#define public_6d31101 _public_6d31101

PROC_DECLARE(0x6d310c0, internal_6d310c0, public_6d310c0);
extern "C" NAKED register_t __cdecl internal_6d310c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+0x18], eax
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp edx, ecx
        mov eax, dword ptr ds : [edi+0x10]
        je public_6d310f7
        lea esp, ss:[esp]
        public_6d310e0 : nop
        mov si, word ptr ds : [eax]
        test si, si
        je public_6d31101
        cmp word ptr ds : [edx], si
        jne public_6d31101
        add edx, 2
        add eax, 2
        cmp edx, ecx
        jne public_6d310e0
        public_6d310f7 : nop
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6d31101 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d310c0)
    }
}

#undef public_6d310e0
#undef public_6d310f7
#undef public_6d31101
