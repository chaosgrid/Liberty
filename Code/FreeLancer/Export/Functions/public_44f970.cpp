#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f970);

#define public_44f982 _public_44f982
#define public_44f992 _public_44f992
#define public_44f99b _public_44f99b

PROC_DECLARE(0x44f970, internal_44f970, public_44f970);
extern "C" NAKED register_t __cdecl internal_44f970()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x4C]
        xor esi, esi
        test eax, eax
        jle public_44f99b
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_44f982 : nop
        mov eax, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ds : [eax+esi*4]
        test ecx, ecx
        je public_44f992
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0x48]
        public_44f992 : nop
        mov eax, dword ptr ds : [edi+0x4C]
        inc esi
        cmp esi, eax
        jl public_44f982
        pop ebx
        public_44f99b : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44f970)
    }
}

#undef public_44f982
#undef public_44f992
#undef public_44f99b
