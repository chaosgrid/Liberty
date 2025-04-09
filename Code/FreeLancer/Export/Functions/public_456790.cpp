#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450070);
CLANG_FORWARD_PROC_SYMBOL(public_456790);

#define public_4567b0 _public_4567b0
#define public_4567e0 _public_4567e0
#define public_456803 _public_456803
#define public_45680d _public_45680d
#define public_456815 _public_456815
#define public_45682f _public_45682f
#define public_456831 _public_456831

PROC_DECLARE(0x456790, internal_456790, public_456790);
extern "C" NAKED register_t __cdecl internal_456790()
{
    __asm
    {
        sub esp, 8
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        xor eax, eax
        cmp edx, ecx
        push edi
        mov dword ptr ss : [esp+0xC], edx
        je public_456831
        lea ecx, ds:[ecx]
        public_4567b0 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov al, byte ptr ds : [ecx+0x2F]
        test al, al
        je public_456815
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_456815
        mov ecx, dword ptr ds : [ecx+0xB4]
        shl eax, 6
        mov edi, dword ptr ds : [eax+ecx]
        test edi, edi
        je public_456815
        mov eax, dword ptr ds : [edi+0x4C]
        xor ebx, ebx
        test eax, eax
        jle public_456815
        mov edi, edi
        public_4567e0 : nop
        mov eax, dword ptr ds : [edi+0x48]
        mov esi, dword ptr ds : [eax+ebx*4]
        test esi, esi
        je public_456803
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        mov ecx, esi
        call public_450070
        test al, al
        jne public_45680d
        mov edx, dword ptr ss : [esp+0xC]
        public_456803 : nop
        mov eax, dword ptr ds : [edi+0x4C]
        inc ebx
        cmp ebx, eax
        jl public_4567e0
        jmp public_456815
        public_45680d : nop
        test esi, esi
        jne public_45682f
        mov edx, dword ptr ss : [esp+0xC]
        public_456815 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx]
        cmp edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], edx
        jne public_4567b0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_45682f : nop
        mov eax, esi
        public_456831 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x456790)
    }
}

#undef public_4567b0
#undef public_4567e0
#undef public_456803
#undef public_45680d
#undef public_456815
#undef public_45682f
#undef public_456831
