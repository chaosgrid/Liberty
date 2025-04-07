#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a180);

#define public_6b3a1a1 _public_6b3a1a1
#define public_6b3a1c2 _public_6b3a1c2
#define public_6b3a1d5 _public_6b3a1d5
#define public_6b3a1ff _public_6b3a1ff
#define public_6b3a21a _public_6b3a21a
#define public_6b3a21c _public_6b3a21c

PROC_DECLARE(0x6b3a180, internal_6b3a180, public_6b3a180);
extern "C" NAKED register_t __cdecl internal_6b3a180()
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
        jbe public_6b3a1a1
        mov dword ptr ds : [ecx+0x1C], eax
        public_6b3a1a1 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        test edx, edx
        jne public_6b3a21c
        mov edx, dword ptr ds : [ecx+0x18]
        mov word ptr ds : [edx], si
        add edx, 2
        test si, si
        mov dword ptr ds : [ecx+0x18], edx
        jbe public_6b3a21a
        mov edi, dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [edi]
        cmp edx, edi
        je public_6b3a21a
        public_6b3a1c2 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        mov ebp, dword ptr ds : [ecx+0x14]
        add esi, 2
        cmp esi, ebp
        mov dword ptr ds : [ecx+0x10], esi
        jbe public_6b3a1d5
        mov dword ptr ds : [ecx+0x1C], eax
        public_6b3a1d5 : nop
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6b3a21c
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
        jbe public_6b3a1ff
        mov dword ptr ds : [ecx+0x1C], eax
        public_6b3a1ff : nop
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6b3a21c
        fld dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [esi]
        add esi, 4
        mov dword ptr ds : [ecx+0x18], esi
        mov edx, dword ptr ds : [edx]
        cmp edx, edi
        jne public_6b3a1c2
        public_6b3a21a : nop
        xor eax, eax
        public_6b3a21c : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6b3a180)
    }
}

#undef public_6b3a1a1
#undef public_6b3a1c2
#undef public_6b3a1d5
#undef public_6b3a1ff
#undef public_6b3a21a
#undef public_6b3a21c
