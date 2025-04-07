#include "Server-PCH.h"


#define public_6d30dd0 _public_6d30dd0
#define public_6d30de3 _public_6d30de3
#define public_6d30ded _public_6d30ded
#define public_6d30e00 _public_6d30e00
#define public_6d30e02 _public_6d30e02
#define public_6d30e0e _public_6d30e0e
#define public_6d30e1a _public_6d30e1a

PROC_DECLARE(0x6d30db0, internal_6d30db0, public_6d30db0);
extern "C" NAKED register_t __cdecl internal_6d30db0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+0x18]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        cmp eax, edi
        je public_6d30ded
        mov ebx, esi
        sub ebx, eax
        lea ecx, ds:[ecx]
        public_6d30dd0 : nop
        cmp dword ptr ss : [ebp+0xC], edx
        je public_6d30e1a
        mov si, word ptr ds : [edx]
        cmp word ptr ds : [eax], si
        je public_6d30de3
        cmp word ptr ds : [eax+ebx], si
        jne public_6d30e1a
        public_6d30de3 : nop
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6d30dd0
        public_6d30ded : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d30e0e
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebp
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d30e00 : nop
        je public_6d30e1a
        public_6d30e02 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6d30e0e : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d30e02
        cmp dword ptr ss : [ebp+8], edx
        jmp public_6d30e00
        public_6d30e1a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d30db0)
    }
}

#undef public_6d30dd0
#undef public_6d30de3
#undef public_6d30ded
#undef public_6d30e00
#undef public_6d30e02
#undef public_6d30e0e
#undef public_6d30e1a
