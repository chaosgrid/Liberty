#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca780);

#define public_6eca797 _public_6eca797
#define public_6eca7a2 _public_6eca7a2
#define public_6eca7af _public_6eca7af
#define public_6eca7c0 _public_6eca7c0
#define public_6eca7cc _public_6eca7cc
#define public_6eca7d5 _public_6eca7d5

PROC_DECLARE(0x6eca780, internal_6eca780, public_6eca780);
extern "C" NAKED register_t __cdecl internal_6eca780()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x1D]
        test al, al
        jne public_6eca7af
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6eca7a2
        public_6eca797 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6eca797
        public_6eca7a2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6eca7af : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6eca7cc
        lea esp, ss:[esp]
        public_6eca7c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6eca7c0
        public_6eca7cc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6eca7d5
        mov dword ptr ds : [ecx], eax
        public_6eca7d5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eca780)
    }
}

#undef public_6eca797
#undef public_6eca7a2
#undef public_6eca7af
#undef public_6eca7c0
#undef public_6eca7cc
#undef public_6eca7d5
