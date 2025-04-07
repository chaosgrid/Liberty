#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6373e20);

#define public_6373e38 _public_6373e38
#define public_6373e3d _public_6373e3d
#define public_6373e50 _public_6373e50
#define public_6373e63 _public_6373e63
#define public_6373e6b _public_6373e6b
#define public_6373e6f _public_6373e6f
#define public_6373e78 _public_6373e78
#define public_6373e7a _public_6373e7a
#define public_6373e7f _public_6373e7f

PROC_DECLARE(0x6373e20, internal_6373e20, public_6373e20);
extern "C" NAKED register_t __cdecl internal_6373e20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+4], ebx
        jne public_6373e38
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [eax+8]
        jmp public_6373e3d
        public_6373e38 : nop
        mov ecx, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [ecx+4]
        public_6373e3d : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6373e78
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6373e78
        public_6373e50 : nop
        cmp eax, edi
        je public_6373e6f
        cmp dword ptr ds : [eax+4], ebx
        jne public_6373e63
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+4]
        jmp public_6373e6b
        public_6373e63 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        public_6373e6b : nop
        cmp edx, ebp
        je public_6373e7f
        public_6373e6f : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_6373e50
        public_6373e78 : nop
        xor eax, eax
        public_6373e7a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6373e7f : nop
        mov edx, dword ptr ss : [esp+0x1C]
        test edx, edx
        je public_6373e7a
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6373e20)
    }
}

#undef public_6373e38
#undef public_6373e3d
#undef public_6373e50
#undef public_6373e63
#undef public_6373e6b
#undef public_6373e6f
#undef public_6373e78
#undef public_6373e7a
#undef public_6373e7f
