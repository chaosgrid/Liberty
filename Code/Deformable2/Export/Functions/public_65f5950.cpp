#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5950);

#define public_65f5978 _public_65f5978
#define public_65f5980 _public_65f5980
#define public_65f59a3 _public_65f59a3

PROC_DECLARE(0x65f5950, internal_65f5950, public_65f5950);
extern "C" NAKED register_t __cdecl internal_65f5950()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, 0xFFFFFFFF
        je public_65f59a3
        mov eax, dword ptr ds : [edi+4]
        or byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ds : [public_6603138]
        test eax, eax
        je public_65f59a3
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ecx+0x14]
        cmp esi, dword ptr ds : [ecx+0x10]
        je public_65f59a3
        jmp public_65f5980
        public_65f5978 : nop
        mov eax, dword ptr ds : [public_6603138]
        lea ecx, ds:[ecx]
        public_65f5980 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x98]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0xD4]
        mov esi, eax
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+0x10]
        jne public_65f5978
        public_65f59a3 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f5950)
    }
}

#undef public_65f5978
#undef public_65f5980
#undef public_65f59a3
