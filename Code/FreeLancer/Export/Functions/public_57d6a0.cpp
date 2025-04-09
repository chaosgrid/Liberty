#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57d6a0);

#define public_57d6bb _public_57d6bb
#define public_57d6c9 _public_57d6c9
#define public_57d6e1 _public_57d6e1
#define public_57d6f3 _public_57d6f3
#define public_57d70b _public_57d70b
#define public_57d711 _public_57d711
#define public_57d74c _public_57d74c
#define public_57d764 _public_57d764
#define public_57d780 _public_57d780
#define public_57d79a _public_57d79a
#define public_57d7a9 _public_57d7a9

PROC_DECLARE(0x57d6a0, internal_57d6a0, public_57d6a0);
extern "C" NAKED register_t __cdecl internal_57d6a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov dword ptr ds : [ecx+0x49C], esi
        jge public_57d6bb
        mov dword ptr ds : [ecx+0x49C], 0
        jmp public_57d711
        public_57d6bb : nop
        mov eax, dword ptr ds : [ecx+0x4C8]
        test eax, eax
        jne public_57d6c9
        xor edx, edx
        jmp public_57d6e1
        public_57d6c9 : nop
        mov edx, dword ptr ds : [ecx+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57d6e1 : nop
        cmp esi, edx
        jbe public_57d711
        mov eax, dword ptr ds : [ecx+0x4C8]
        test eax, eax
        jne public_57d6f3
        xor edx, edx
        jmp public_57d70b
        public_57d6f3 : nop
        mov edx, dword ptr ds : [ecx+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57d70b : nop
        mov dword ptr ds : [ecx+0x49C], edx
        public_57d711 : nop
        mov eax, dword ptr ds : [ecx+0x4C8]
        test eax, eax
        pop esi
        je public_57d7a9
        mov edx, dword ptr ds : [ecx+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+4], edx
        je public_57d7a9
        mov eax, dword ptr ds : [ecx+0x4C8]
        test eax, eax
        jne public_57d74c
        xor edx, edx
        jmp public_57d764
        public_57d74c : nop
        mov edx, dword ptr ds : [ecx+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57d764 : nop
        mov eax, dword ptr ds : [ecx+0x49C]
        cmp eax, edx
        jne public_57d780
        mov edx, dword ptr ds : [ecx+0x4CC]
        mov eax, dword ptr ds : [edx-8]
        mov dword ptr ds : [ecx+0x4D4], eax
        ret 4
        public_57d780 : nop
        test eax, eax
        jle public_57d79a
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [ecx+0x4C8]
        mov edx, dword ptr ds : [eax+edx*4-8]
        mov dword ptr ds : [ecx+0x4D4], edx
        ret 4
        public_57d79a : nop
        mov eax, dword ptr ds : [ecx+0x4C8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x4D4], edx
        public_57d7a9 : nop
        ret 4
        UNREACHABLE_TRAP(0x57d6a0)
    }
}

#undef public_57d6bb
#undef public_57d6c9
#undef public_57d6e1
#undef public_57d6f3
#undef public_57d70b
#undef public_57d711
#undef public_57d74c
#undef public_57d764
#undef public_57d780
#undef public_57d79a
#undef public_57d7a9
