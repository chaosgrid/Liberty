#include "Common-PCH.h"


#define public_6362c1f _public_6362c1f
#define public_6362c22 _public_6362c22
#define public_6362c4e _public_6362c4e
#define public_6362c51 _public_6362c51
#define public_6362c62 _public_6362c62

PROC_DECLARE(0x6362c00, internal_6362c00, public_6362c00);
extern "C" NAKED register_t __cdecl internal_6362c00()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edi+0xC]
        test edx, edx
        jl public_6362c1f
        xor eax, eax
        mov ax, word ptr ds : [ecx+0xA]
        cmp edx, eax
        jge public_6362c1f
        mov eax, dword ptr ds : [ecx+0xC]
        cmp dword ptr ds : [eax+edx*4], edi
        je public_6362c22
        public_6362c1f : nop
        mov edx, dword ptr ds : [edi+0x10]
        public_6362c22 : nop
        dec word ptr ds : [ecx+0xA]
        xor eax, eax
        mov ax, word ptr ds : [ecx+0xA]
        and eax, 0xFFFF
        cmp eax, edx
        jle public_6362c51
        mov esi, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi+eax*4]
        mov dword ptr ds : [esi+edx*4], eax
        xor esi, esi
        mov si, word ptr ds : [ecx+0xA]
        cmp dword ptr ds : [eax+0xC], esi
        jne public_6362c4e
        mov dword ptr ds : [eax+0xC], edx
        jmp public_6362c51
        public_6362c4e : nop
        mov dword ptr ds : [eax+0x10], edx
        public_6362c51 : nop
        cmp dword ptr ds : [edi+0xC], edx
        jne public_6362c62
        mov dword ptr ds : [edi+0xC], 0xFFFFFFFF
        pop edi
        pop esi
        ret 4
        public_6362c62 : nop
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6362c00)
    }
}

#undef public_6362c1f
#undef public_6362c22
#undef public_6362c4e
#undef public_6362c51
#undef public_6362c62
