#include "Shading-PCH.h"


#define public_6ecd86f _public_6ecd86f
#define public_6ecd881 _public_6ecd881
#define public_6ecd890 _public_6ecd890
#define public_6ecd8a8 _public_6ecd8a8
#define public_6ecd8b4 _public_6ecd8b4
#define public_6ecd8c0 _public_6ecd8c0
#define public_6ecd8ca _public_6ecd8ca
#define public_6ecd8d1 _public_6ecd8d1
#define public_6ecd8db _public_6ecd8db
#define public_6ecd8e6 _public_6ecd8e6

PROC_DECLARE(0x6ecd850, internal_6ecd850, public_6ecd850);
extern "C" NAKED register_t __cdecl internal_6ecd850()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x38]
        or eax, 0xFFFFFFFF
        inc esi
        cmp edx, esi
        push edi
        jb public_6ecd86f
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_6ecd86f : nop
        test edx, edx
        jne public_6ecd881
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ecd881 : nop
        mov edi, dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ds : [edi]
        xor esi, esi
        cmp ecx, edi
        je public_6ecd8e6
        lea ebx, ds:[edx-1]
        nop 
        public_6ecd890 : nop
        cmp esi, ebx
        je public_6ecd8db
        mov edx, dword ptr ds : [ecx+8]
        inc esi
        cmp byte ptr ds : [edx+0x25], 0
        jne public_6ecd8b4
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x25], 0
        jne public_6ecd8d1
        public_6ecd8a8 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x25], 0
        je public_6ecd8a8
        jmp public_6ecd8d1
        public_6ecd8b4 : nop
        mov edx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_6ecd8ca
        lea esp, ss:[esp]
        public_6ecd8c0 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        je public_6ecd8c0
        public_6ecd8ca : nop
        cmp dword ptr ds : [ecx+8], edx
        je public_6ecd8d1
        mov ecx, edx
        public_6ecd8d1 : nop
        cmp ecx, edi
        jne public_6ecd890
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6ecd8db : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        public_6ecd8e6 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ecd850)
    }
}

#undef public_6ecd86f
#undef public_6ecd881
#undef public_6ecd890
#undef public_6ecd8a8
#undef public_6ecd8b4
#undef public_6ecd8c0
#undef public_6ecd8ca
#undef public_6ecd8d1
#undef public_6ecd8db
#undef public_6ecd8e6
