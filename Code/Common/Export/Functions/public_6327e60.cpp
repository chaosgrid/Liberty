#include "Common-PCH.h"


#define public_6327ead _public_6327ead
#define public_6327edb _public_6327edb
#define public_6327eea _public_6327eea
#define public_6327ef6 _public_6327ef6
#define public_6327ef9 _public_6327ef9
#define public_6327f1f _public_6327f1f
#define public_6327f34 _public_6327f34
#define public_6327f5d _public_6327f5d
#define public_6327f72 _public_6327f72
#define public_6327f7a _public_6327f7a
#define public_6327f8b _public_6327f8b
#define public_6327fa6 _public_6327fa6

PROC_DECLARE(0x6327e60, internal_6327e60, public_6327e60);
extern "C" NAKED register_t __cdecl internal_6327e60()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        mov ecx, offset public_640956c
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6327ead
        mov edi, dword ptr ds : [public_6409570]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [public_6409570]
        mov dword ptr ds : [public_6409574], ebx
        mov byte ptr ds : [ecx+ebx], 0
        public_6327ead : nop
        mov eax, dword ptr ds : [public_6409570]
        test eax, eax
        je public_6327eea
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6327edb
        cmp cl, 0xFF
        je public_6327edb
        mov edx, dword ptr ds : [public_6409574]
        push 0
        push edx
        mov ecx, offset public_640956c
        call dword ptr ds : [public_63991d4]
        mov eax, dword ptr ds : [public_6409570]
        public_6327edb : nop
        test eax, eax
        je public_6327eea
        mov byte ptr ds : [eax-1], 0xFF
        mov eax, dword ptr ds : [public_6409570]
        test eax, eax
        public_6327eea : nop
        mov edx, dword ptr ds : [public_6409574]
        jne public_6327ef6
        xor ecx, ecx
        jmp public_6327ef9
        public_6327ef6 : nop
        lea ecx, ds:[edx+eax]
        public_6327ef9 : nop
        cmp byte ptr ds : [ecx-1], 0x5C
        je public_6327fa6
        mov ecx, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [public_63991b4]
        sub ecx, edx
        cmp ecx, 1
        ja public_6327f1f
        call edi
        mov eax, dword ptr ds : [public_6409570]
        public_6327f1f : nop
        mov edx, dword ptr ds : [public_6409574]
        lea esi, ds:[edx+1]
        cmp esi, 0xFFFFFFFD
        jbe public_6327f34
        call edi
        mov eax, dword ptr ds : [public_6409570]
        public_6327f34 : nop
        test eax, eax
        je public_6327f5d
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6327f5d
        cmp cl, 0xFF
        je public_6327f5d
        test esi, esi
        jne public_6327f7a
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, offset public_640956c
        call dword ptr ds : [public_63991b8]
        pop edi
        pop esi
        pop ebx
        ret 
        public_6327f5d : nop
        test esi, esi
        jne public_6327f72
        test eax, eax
        je public_6327fa6
        pop edi
        mov dword ptr ds : [public_6409574], esi
        pop esi
        mov byte ptr ds : [eax], 0
        pop ebx
        ret 
        public_6327f72 : nop
        cmp dword ptr ds : [public_6409578], esi
        jae public_6327f8b
        public_6327f7a : nop
        mov ecx, offset public_640956c
        push esi
        call dword ptr ds : [public_63991b0]
        mov eax, dword ptr ds : [public_6409570]
        public_6327f8b : nop
        mov ecx, dword ptr ds : [public_6409574]
        add ecx, eax
        mov byte ptr ds : [ecx], 0x5C
        mov edx, dword ptr ds : [public_6409570]
        mov dword ptr ds : [public_6409574], esi
        mov byte ptr ds : [edx+esi], 0
        public_6327fa6 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6327e60)
    }
}

#undef public_6327ead
#undef public_6327edb
#undef public_6327eea
#undef public_6327ef6
#undef public_6327ef9
#undef public_6327f1f
#undef public_6327f34
#undef public_6327f5d
#undef public_6327f72
#undef public_6327f7a
#undef public_6327f8b
#undef public_6327fa6
