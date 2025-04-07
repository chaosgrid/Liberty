#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1df0);

#define public_65f1e08 _public_65f1e08
#define public_65f1e1d _public_65f1e1d
#define public_65f1e32 _public_65f1e32
#define public_65f1e47 _public_65f1e47

PROC_DECLARE(0x65f1df0, internal_65f1df0, public_65f1df0);
extern "C" NAKED register_t __cdecl internal_65f1df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6603130]
        push esi
        xor esi, esi
        cmp eax, esi
        je public_65f1e08
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6603130], esi
        public_65f1e08 : nop
        mov eax, dword ptr ds : [public_660312c]
        cmp eax, esi
        je public_65f1e1d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_660312c], esi
        public_65f1e1d : nop
        mov eax, dword ptr ds : [public_6603148]
        cmp eax, esi
        je public_65f1e32
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6603148], esi
        public_65f1e32 : nop
        mov eax, dword ptr ds : [public_6603144]
        cmp eax, esi
        je public_65f1e47
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6603144], esi
        public_65f1e47 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f1df0)
    }
}

#undef public_65f1e08
#undef public_65f1e1d
#undef public_65f1e32
#undef public_65f1e47
