#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366c00);
CLANG_FORWARD_PROC_SYMBOL(public_6367130);

#define public_6366c23 _public_6366c23
#define public_6366c2f _public_6366c2f
#define public_6366c33 _public_6366c33
#define public_6366c41 _public_6366c41
#define public_6366c72 _public_6366c72
#define public_6366c7e _public_6366c7e
#define public_6366c83 _public_6366c83
#define public_6366c8f _public_6366c8f
#define public_6366ca6 _public_6366ca6

PROC_DECLARE(0x6366c00, internal_6366c00, public_6366c00);
extern "C" NAKED register_t __cdecl internal_6366c00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x44]
        cmp eax, 2
        jl public_6366ca6
        mov ecx, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [esi+0x5C]
        inc ecx
        add edx, 2
        cmp ecx, eax
        mov dword ptr ds : [esi+0x58], ecx
        mov dword ptr ds : [esi+0x5C], edx
        jl public_6366c2f
        public_6366c23 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        sub ecx, eax
        cmp ecx, eax
        mov dword ptr ds : [esi+0x58], ecx
        jge public_6366c23
        public_6366c2f : nop
        cmp edx, eax
        jl public_6366c41
        public_6366c33 : nop
        mov edx, dword ptr ds : [esi+0x5C]
        sub edx, eax
        mov ecx, edx
        cmp ecx, eax
        mov dword ptr ds : [esi+0x5C], edx
        jge public_6366c33
        public_6366c41 : nop
        mov eax, dword ptr ds : [esi+0x5C]
        mov ecx, dword ptr ds : [esi+0x58]
        push eax
        push ecx
        mov ecx, esi
        call public_6367130
        mov eax, dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [esi+0x4C]
        add eax, 2
        mov dword ptr ds : [esi+0x64], eax
        mov eax, dword ptr ds : [esi+0x3C]
        inc ecx
        sub eax, edx
        dec eax
        cmp eax, 2
        mov dword ptr ds : [esi+0x60], ecx
        jl public_6366ca6
        cmp ecx, eax
        jl public_6366c7e
        public_6366c72 : nop
        mov ecx, dword ptr ds : [esi+0x60]
        sub ecx, eax
        cmp ecx, eax
        mov dword ptr ds : [esi+0x60], ecx
        jge public_6366c72
        public_6366c7e : nop
        cmp dword ptr ds : [esi+0x64], eax
        jl public_6366c8f
        public_6366c83 : nop
        mov ecx, dword ptr ds : [esi+0x64]
        sub ecx, eax
        cmp ecx, eax
        mov dword ptr ds : [esi+0x64], ecx
        jge public_6366c83
        public_6366c8f : nop
        mov eax, dword ptr ds : [esi+0x64]
        lea ecx, ds:[eax+edx+1]
        mov eax, dword ptr ds : [esi+0x60]
        push ecx
        lea ecx, ds:[eax+edx+1]
        push ecx
        mov ecx, esi
        call public_6367130
        public_6366ca6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6366c00)
    }
}

#undef public_6366c23
#undef public_6366c2f
#undef public_6366c33
#undef public_6366c41
#undef public_6366c72
#undef public_6366c7e
#undef public_6366c83
#undef public_6366c8f
#undef public_6366ca6
