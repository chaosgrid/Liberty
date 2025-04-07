#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c4c0);

#define public_6d5c4d8 _public_6d5c4d8
#define public_6d5c4f2 _public_6d5c4f2
#define public_6d5c4ff _public_6d5c4ff
#define public_6d5c507 _public_6d5c507
#define public_6d5c511 _public_6d5c511
#define public_6d5c518 _public_6d5c518
#define public_6d5c51c _public_6d5c51c
#define public_6d5c523 _public_6d5c523

PROC_DECLARE(0x6d5c4c0, internal_6d5c4c0, public_6d5c4c0);
extern "C" NAKED register_t __cdecl internal_6d5c4c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push ebx
        push esi
        jl public_6d5c51c
        cmp edx, dword ptr ds : [ecx+0x18]
        jae public_6d5c51c
        mov esi, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6d5c51c
        public_6d5c4d8 : nop
        test edx, edx
        je public_6d5c523
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        dec edx
        test bl, bl
        jne public_6d5c4ff
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_6d5c518
        public_6d5c4f2 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6d5c4f2
        jmp public_6d5c518
        public_6d5c4ff : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5c511
        public_6d5c507 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d5c507
        public_6d5c511 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d5c518
        mov eax, ecx
        public_6d5c518 : nop
        cmp eax, esi
        jne public_6d5c4d8
        public_6d5c51c : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_6d5c523 : nop
        mov eax, dword ptr ds : [eax+0xC]
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5c4c0)
    }
}

#undef public_6d5c4d8
#undef public_6d5c4f2
#undef public_6d5c4ff
#undef public_6d5c507
#undef public_6d5c511
#undef public_6d5c518
#undef public_6d5c51c
#undef public_6d5c523
