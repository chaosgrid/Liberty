#include "Server-PCH.h"


#define public_6d30040 _public_6d30040
#define public_6d30047 _public_6d30047
#define public_6d30053 _public_6d30053
#define public_6d3006a _public_6d3006a

PROC_DECLARE(0x6d30020, internal_6d30020, public_6d30020);
extern "C" NAKED register_t __cdecl internal_6d30020()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        jne public_6d30047
        public_6d30040 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_6d30047 : nop
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+4]
        cmp ecx, esi
        mov eax, dword ptr ds : [edi+0x10]
        je public_6d3006a
        public_6d30053 : nop
        mov dx, word ptr ds : [eax]
        test dx, dx
        je public_6d30040
        cmp dx, word ptr ds : [ecx]
        jne public_6d30040
        add ecx, 2
        add eax, 2
        cmp ecx, esi
        jne public_6d30053
        public_6d3006a : nop
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d30020)
    }
}

#undef public_6d30040
#undef public_6d30047
#undef public_6d30053
#undef public_6d3006a
