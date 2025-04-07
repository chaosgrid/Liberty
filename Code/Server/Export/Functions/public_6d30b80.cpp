#include "Server-PCH.h"


#define public_6d30ba0 _public_6d30ba0
#define public_6d30bb6 _public_6d30bb6
#define public_6d30bc9 _public_6d30bc9
#define public_6d30bcb _public_6d30bcb
#define public_6d30bd7 _public_6d30bd7
#define public_6d30be3 _public_6d30be3

PROC_DECLARE(0x6d30b80, internal_6d30b80, public_6d30b80);
extern "C" NAKED register_t __cdecl internal_6d30b80()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        cmp edx, esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6d30bb6
        mov ebx, dword ptr ds : [edi+0xC]
        lea esp, ss:[esp]
        public_6d30ba0 : nop
        cmp ebx, eax
        je public_6d30be3
        mov bp, word ptr ds : [edx]
        cmp bp, word ptr ds : [eax]
        jne public_6d30be3
        add edx, 2
        add eax, 2
        cmp edx, esi
        jne public_6d30ba0
        public_6d30bb6 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d30bd7
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d30bc9 : nop
        je public_6d30be3
        public_6d30bcb : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6d30bd7 : nop
        mov cl, byte ptr ds : [edi+0x1C]
        test cl, cl
        je public_6d30bcb
        cmp dword ptr ds : [edi+8], eax
        jmp public_6d30bc9
        public_6d30be3 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d30b80)
    }
}

#undef public_6d30ba0
#undef public_6d30bb6
#undef public_6d30bc9
#undef public_6d30bcb
#undef public_6d30bd7
#undef public_6d30be3
