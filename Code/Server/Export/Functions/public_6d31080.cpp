#include "Server-PCH.h"


#define public_6d31092 _public_6d31092
#define public_6d310a9 _public_6d310a9
#define public_6d310b2 _public_6d310b2

PROC_DECLARE(0x6d31080, internal_6d31080, public_6d31080);
extern "C" NAKED register_t __cdecl internal_6d31080()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        cmp edx, esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        je public_6d310a9
        public_6d31092 : nop
        mov cx, word ptr ds : [eax]
        test cx, cx
        je public_6d310b2
        cmp word ptr ds : [edx], cx
        jne public_6d310b2
        add edx, 2
        add eax, 2
        cmp edx, esi
        jne public_6d31092
        public_6d310a9 : nop
        mov dword ptr ds : [edi], eax
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6d310b2 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d31080)
    }
}

#undef public_6d31092
#undef public_6d310a9
#undef public_6d310b2
