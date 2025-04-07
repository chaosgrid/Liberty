#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c261b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c261e0 _public_6c261e0
#define public_6c261ef _public_6c261ef
#define public_6c261f4 _public_6c261f4

PROC_DECLARE(0x6c261b0, internal_6c261b0, public_6c261b0);
extern "C" NAKED register_t __cdecl internal_6c261b0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1E8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x24]
        test ecx, ecx
        je public_6c261f4
        push esi
        mov esi, dword ptr ds : [eax+0x28]
        shr esi, 1
        lea ecx, ds:[esi+esi]
        push ecx
        call public_6c34eac
        mov dword ptr ds : [edi+0x204], eax
        add esp, 4
        xor eax, eax
        test esi, esi
        jle public_6c261ef
        public_6c261e0 : nop
        mov edx, dword ptr ds : [edi+0x204]
        mov word ptr ds : [edx+eax*2], ax
        inc eax
        cmp eax, esi
        jl public_6c261e0
        public_6c261ef : nop
        pop esi
        xor eax, eax
        pop edi
        ret 
        public_6c261f4 : nop
        or eax, 0xFFFFFFFF
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6c261b0)
    }
}

#undef public_6c261e0
#undef public_6c261ef
#undef public_6c261f4
