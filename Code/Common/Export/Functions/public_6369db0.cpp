#include "Common-PCH.h"


#define public_6369dcf _public_6369dcf
#define public_6369dd2 _public_6369dd2
#define public_6369dfe _public_6369dfe
#define public_6369e01 _public_6369e01
#define public_6369e12 _public_6369e12

PROC_DECLARE(0x6369db0, internal_6369db0, public_6369db0);
extern "C" NAKED register_t __cdecl internal_6369db0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edi+0xC]
        test edx, edx
        jl public_6369dcf
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x26]
        cmp edx, eax
        jge public_6369dcf
        mov eax, dword ptr ds : [ecx+0x28]
        cmp dword ptr ds : [eax+edx*4], edi
        je public_6369dd2
        public_6369dcf : nop
        mov edx, dword ptr ds : [edi+0x10]
        public_6369dd2 : nop
        dec word ptr ds : [ecx+0x26]
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x26]
        and eax, 0xFFFF
        cmp eax, edx
        jle public_6369e01
        mov esi, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [esi+eax*4]
        mov dword ptr ds : [esi+edx*4], eax
        xor esi, esi
        mov si, word ptr ds : [ecx+0x26]
        cmp dword ptr ds : [eax+0xC], esi
        jne public_6369dfe
        mov dword ptr ds : [eax+0xC], edx
        jmp public_6369e01
        public_6369dfe : nop
        mov dword ptr ds : [eax+0x10], edx
        public_6369e01 : nop
        cmp dword ptr ds : [edi+0xC], edx
        jne public_6369e12
        mov dword ptr ds : [edi+0xC], 0xFFFFFFFF
        pop edi
        pop esi
        ret 4
        public_6369e12 : nop
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6369db0)
    }
}

#undef public_6369dcf
#undef public_6369dd2
#undef public_6369dfe
#undef public_6369e01
#undef public_6369e12
