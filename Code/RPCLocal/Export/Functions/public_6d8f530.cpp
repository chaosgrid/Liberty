#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f530);

#define public_6d8f551 _public_6d8f551
#define public_6d8f572 _public_6d8f572
#define public_6d8f585 _public_6d8f585
#define public_6d8f5af _public_6d8f5af
#define public_6d8f5ca _public_6d8f5ca
#define public_6d8f5cc _public_6d8f5cc

PROC_DECLARE(0x6d8f530, internal_6d8f530, public_6d8f530);
extern "C" NAKED register_t __cdecl internal_6d8f530()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ds : [ecx+0x10]
        push esi
        mov si, word ptr ds : [ecx+0x28]
        add ebp, 2
        push edi
        mov edi, dword ptr ds : [ecx+0x14]
        mov edx, ebp
        cmp edx, edi
        mov dword ptr ds : [ecx+0x10], ebp
        mov eax, 0x16
        jbe public_6d8f551
        mov dword ptr ds : [ecx+0x1C], eax
        public_6d8f551 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        test edx, edx
        jne public_6d8f5cc
        mov edx, dword ptr ds : [ecx+0x18]
        mov word ptr ds : [edx], si
        add edx, 2
        test si, si
        mov dword ptr ds : [ecx+0x18], edx
        jbe public_6d8f5ca
        mov edi, dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [edi]
        cmp edx, edi
        je public_6d8f5ca
        public_6d8f572 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        mov ebp, dword ptr ds : [ecx+0x14]
        add esi, 2
        cmp esi, ebp
        mov dword ptr ds : [ecx+0x10], esi
        jbe public_6d8f585
        mov dword ptr ds : [ecx+0x1C], eax
        public_6d8f585 : nop
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6d8f5cc
        mov esi, dword ptr ds : [ecx+0x18]
        mov bp, word ptr ds : [edx+8]
        mov word ptr ds : [esi], bp
        add esi, 2
        mov dword ptr ds : [ecx+0x18], esi
        mov esi, dword ptr ds : [ecx+0x10]
        mov ebp, dword ptr ds : [ecx+0x14]
        add esi, 4
        cmp esi, ebp
        mov dword ptr ds : [ecx+0x10], esi
        jbe public_6d8f5af
        mov dword ptr ds : [ecx+0x1C], eax
        public_6d8f5af : nop
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6d8f5cc
        fld dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [esi]
        add esi, 4
        mov dword ptr ds : [ecx+0x18], esi
        mov edx, dword ptr ds : [edx]
        cmp edx, edi
        jne public_6d8f572
        public_6d8f5ca : nop
        xor eax, eax
        public_6d8f5cc : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d8f530)
    }
}

#undef public_6d8f551
#undef public_6d8f572
#undef public_6d8f585
#undef public_6d8f5af
#undef public_6d8f5ca
#undef public_6d8f5cc
