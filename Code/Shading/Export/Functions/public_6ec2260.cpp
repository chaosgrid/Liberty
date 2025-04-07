#include "Shading-PCH.h"


#define public_6ec227f _public_6ec227f
#define public_6ec2291 _public_6ec2291
#define public_6ec22a0 _public_6ec22a0
#define public_6ec22b8 _public_6ec22b8
#define public_6ec22c4 _public_6ec22c4
#define public_6ec22d0 _public_6ec22d0
#define public_6ec22da _public_6ec22da
#define public_6ec22e1 _public_6ec22e1
#define public_6ec22eb _public_6ec22eb
#define public_6ec22f6 _public_6ec22f6

PROC_DECLARE(0x6ec2260, internal_6ec2260, public_6ec2260);
extern "C" NAKED register_t __cdecl internal_6ec2260()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x4C]
        or eax, 0xFFFFFFFF
        inc esi
        cmp edx, esi
        push edi
        jb public_6ec227f
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_6ec227f : nop
        test edx, edx
        jne public_6ec2291
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ec2291 : nop
        mov edi, dword ptr ds : [ecx+0x40]
        mov ecx, dword ptr ds : [edi]
        xor esi, esi
        cmp ecx, edi
        je public_6ec22f6
        lea ebx, ds:[edx-1]
        nop 
        public_6ec22a0 : nop
        cmp esi, ebx
        je public_6ec22eb
        mov edx, dword ptr ds : [ecx+8]
        inc esi
        cmp byte ptr ds : [edx+0x25], 0
        jne public_6ec22c4
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x25], 0
        jne public_6ec22e1
        public_6ec22b8 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x25], 0
        je public_6ec22b8
        jmp public_6ec22e1
        public_6ec22c4 : nop
        mov edx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_6ec22da
        lea esp, ss:[esp]
        public_6ec22d0 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        je public_6ec22d0
        public_6ec22da : nop
        cmp dword ptr ds : [ecx+8], edx
        je public_6ec22e1
        mov ecx, edx
        public_6ec22e1 : nop
        cmp ecx, edi
        jne public_6ec22a0
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6ec22eb : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        public_6ec22f6 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2260)
    }
}

#undef public_6ec227f
#undef public_6ec2291
#undef public_6ec22a0
#undef public_6ec22b8
#undef public_6ec22c4
#undef public_6ec22d0
#undef public_6ec22da
#undef public_6ec22e1
#undef public_6ec22eb
#undef public_6ec22f6
