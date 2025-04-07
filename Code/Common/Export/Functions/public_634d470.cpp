#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d320);
CLANG_FORWARD_PROC_SYMBOL(public_634d470);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634d4a6 _public_634d4a6
#define public_634d4b9 _public_634d4b9
#define public_634d4c3 _public_634d4c3
#define public_634d4c7 _public_634d4c7
#define public_634d4d8 _public_634d4d8
#define public_634d4e8 _public_634d4e8

PROC_DECLARE(0x634d470, internal_634d470, public_634d470);
extern "C" NAKED register_t __cdecl internal_634d470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0xC]
        lea ecx, ds:[eax+eax*4]
        lea ecx, ds:[ecx+ecx*4]
        lea edx, ds:[eax+eax*4]
        lea edx, ds:[edx+edx*4]
        lea edx, ds:[edx+edx*4]
        lea ecx, ds:[eax+ecx*4]
        shr ecx, 8
        lea edx, ds:[eax+edx*8]
        add ecx, edx
        mov edx, dword ptr ds : [edi]
        dec edx
        and ecx, edx
        lea ebx, ds:[esi+ecx*4]
        mov esi, dword ptr ds : [ebx]
        xor edx, edx
        test esi, esi
        je public_634d4e8
        public_634d4a6 : nop
        cmp dword ptr ds : [esi+0xC], eax
        je public_634d4b9
        mov edx, esi
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_634d4a6
        pop edi
        pop esi
        pop ebx
        ret 4
        public_634d4b9 : nop
        test edx, edx
        je public_634d4c3
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        jmp public_634d4c7
        public_634d4c3 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], edx
        public_634d4c7 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp esi, dword ptr ds : [eax+ecx*4]
        jne public_634d4d8
        push ecx
        push esi
        mov ecx, edi
        call public_634d320
        public_634d4d8 : nop
        push esi
        call public_6391d5a
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        public_634d4e8 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634d470)
    }
}

#undef public_634d4a6
#undef public_634d4b9
#undef public_634d4c3
#undef public_634d4c7
#undef public_634d4d8
#undef public_634d4e8
