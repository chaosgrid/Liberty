#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805bc0);

#define public_6805bd2 _public_6805bd2
#define public_6805be6 _public_6805be6
#define public_6805c06 _public_6805c06
#define public_6805c0d _public_6805c0d

PROC_DECLARE(0x6805bc0, internal_6805bc0, public_6805bc0);
extern "C" NAKED register_t __cdecl internal_6805bc0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        push esi
        xor eax, eax
        push edi
        mov dword ptr ds : [ecx+0x58], eax
        mov edi, 0x174
        public_6805bd2 : nop
        mov edx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [edx+0x60]
        mov ecx, dword ptr ds : [edx+edi]
        add edx, edi
        xor esi, esi
        test ecx, ecx
        jle public_6805c0d
        public_6805be6 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_6805c06
        cmp ecx, offset public_680d810
        je public_6805c06
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+esi*4], offset public_680d810
        public_6805c06 : nop
        mov ecx, dword ptr ds : [edx]
        inc esi
        cmp esi, ecx
        jl public_6805be6
        public_6805c0d : nop
        add edi, 0xC
        cmp edi, 0x2E8
        jl public_6805bd2
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805bc0)
    }
}

#undef public_6805bd2
#undef public_6805be6
#undef public_6805c06
#undef public_6805c0d
