#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f745a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f745b6 _public_6f745b6
#define public_6f745c1 _public_6f745c1
#define public_6f745ed _public_6f745ed
#define public_6f74600 _public_6f74600
#define public_6f7460c _public_6f7460c
#define public_6f74613 _public_6f74613

PROC_DECLARE(0x6f745a0, internal_6f745a0, public_6f745a0);
extern "C" NAKED register_t __cdecl internal_6f745a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB0]
        mov edx, dword ptr ds : [ecx+0xAC]
        cmp edx, eax
        push esi
        push edi
        je public_6f745c1
        mov esi, dword ptr ss : [esp+0xC]
        public_6f745b6 : nop
        cmp dword ptr ds : [edx], esi
        je public_6f745c1
        add edx, 4
        cmp edx, eax
        jne public_6f745b6
        public_6f745c1 : nop
        push ebx
        mov bl, byte ptr ss : [esp+0x14]
        test bl, bl
        pop ebx
        je public_6f745ed
        cmp edx, eax
        jne public_6f74613
        mov edx, dword ptr ds : [ecx+0xB0]
        lea eax, ss:[esp+0xC]
        push eax
        add ecx, 0xA8
        push 1
        push edx
        call public_6f937c0
        pop edi
        pop esi
        ret 8
        public_6f745ed : nop
        cmp edx, eax
        je public_6f74613
        mov esi, dword ptr ds : [ecx+0xB0]
        lea eax, ds:[edx+4]
        cmp eax, esi
        je public_6f7460c
        sub edx, eax
        public_6f74600 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], edi
        add eax, 4
        cmp eax, esi
        jne public_6f74600
        public_6f7460c : nop
        add dword ptr ds : [ecx+0xB0], 0xFFFFFFFC
        public_6f74613 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f745a0)
    }
}

#undef public_6f745b6
#undef public_6f745c1
#undef public_6f745ed
#undef public_6f74600
#undef public_6f7460c
#undef public_6f74613
