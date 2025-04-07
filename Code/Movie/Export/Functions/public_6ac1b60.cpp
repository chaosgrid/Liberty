#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac23a0);

#define public_6ac1b76 _public_6ac1b76
#define public_6ac1bb8 _public_6ac1bb8
#define public_6ac1bbd _public_6ac1bbd

PROC_DECLARE(0x6ac1b60, internal_6ac1b60, public_6ac1b60);
extern "C" NAKED register_t __cdecl internal_6ac1b60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        test ebx, ebx
        jne public_6ac1b76
        pop edi
        pop esi
        mov eax, 0x80004003
        pop ebx
        ret 0x10
        public_6ac1b76 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, 4
        mov edi, offset public_6add108
        xor eax, eax
        repe cmpsd
        jne public_6ac1bb8
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 4
        mov edi, offset public_6ada960
        xor edx, edx
        repe cmpsd
        jne public_6ac1bb8
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6ac23a0
        test eax, eax
        jl public_6ac1bbd
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ebx], ecx
        pop esi
        pop ebx
        ret 0x10
        public_6ac1bb8 : nop
        mov eax, 0x80004002
        public_6ac1bbd : nop
        pop edi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac1b60)
    }
}

#undef public_6ac1b76
#undef public_6ac1bb8
#undef public_6ac1bbd
