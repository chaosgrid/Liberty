#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4e0);

#define public_6bda501 _public_6bda501
#define public_6bda522 _public_6bda522
#define public_6bda535 _public_6bda535
#define public_6bda55f _public_6bda55f
#define public_6bda57a _public_6bda57a
#define public_6bda57c _public_6bda57c

PROC_DECLARE(0x6bda4e0, internal_6bda4e0, public_6bda4e0);
extern "C" NAKED register_t __cdecl internal_6bda4e0()
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
        jbe public_6bda501
        mov dword ptr ds : [ecx+0x1C], eax
        public_6bda501 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        test edx, edx
        jne public_6bda57c
        mov edx, dword ptr ds : [ecx+0x18]
        mov word ptr ds : [edx], si
        add edx, 2
        test si, si
        mov dword ptr ds : [ecx+0x18], edx
        jbe public_6bda57a
        mov edi, dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [edi]
        cmp edx, edi
        je public_6bda57a
        public_6bda522 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        mov ebp, dword ptr ds : [ecx+0x14]
        add esi, 2
        cmp esi, ebp
        mov dword ptr ds : [ecx+0x10], esi
        jbe public_6bda535
        mov dword ptr ds : [ecx+0x1C], eax
        public_6bda535 : nop
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6bda57c
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
        jbe public_6bda55f
        mov dword ptr ds : [ecx+0x1C], eax
        public_6bda55f : nop
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6bda57c
        fld dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [esi]
        add esi, 4
        mov dword ptr ds : [ecx+0x18], esi
        mov edx, dword ptr ds : [edx]
        cmp edx, edi
        jne public_6bda522
        public_6bda57a : nop
        xor eax, eax
        public_6bda57c : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6bda4e0)
    }
}

#undef public_6bda501
#undef public_6bda522
#undef public_6bda535
#undef public_6bda55f
#undef public_6bda57a
#undef public_6bda57c
