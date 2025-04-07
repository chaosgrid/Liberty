#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a970);

#define public_6d5a982 _public_6d5a982
#define public_6d5a997 _public_6d5a997
#define public_6d5a9a4 _public_6d5a9a4
#define public_6d5a9b0 _public_6d5a9b0
#define public_6d5a9ba _public_6d5a9ba
#define public_6d5a9bf _public_6d5a9bf
#define public_6d5a9c1 _public_6d5a9c1
#define public_6d5a9c6 _public_6d5a9c6

PROC_DECLARE(0x6d5a970, internal_6d5a970, public_6d5a970);
extern "C" NAKED register_t __cdecl internal_6d5a970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_6d5a9c6
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        public_6d5a982 : nop
        inc dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_6d5a9a4
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6d5a9bf
        public_6d5a997 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6d5a997
        jmp public_6d5a9bf
        public_6d5a9a4 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5a9ba
        lea esp, ss:[esp]
        public_6d5a9b0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d5a9b0
        public_6d5a9ba : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d5a9c1
        public_6d5a9bf : nop
        mov eax, ecx
        public_6d5a9c1 : nop
        cmp eax, esi
        jne public_6d5a982
        pop ebx
        public_6d5a9c6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5a970)
    }
}

#undef public_6d5a982
#undef public_6d5a997
#undef public_6d5a9a4
#undef public_6d5a9b0
#undef public_6d5a9ba
#undef public_6d5a9bf
#undef public_6d5a9c1
#undef public_6d5a9c6
