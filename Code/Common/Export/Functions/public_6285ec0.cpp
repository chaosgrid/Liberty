#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349fd0);

#define public_6285edb _public_6285edb
#define public_6285ee5 _public_6285ee5
#define public_6285ef0 _public_6285ef0
#define public_6285ef7 _public_6285ef7
#define public_6285efa _public_6285efa

PROC_DECLARE(0x6285ec0, internal_6285ec0, public_6285ec0);
extern "C" NAKED register_t __cdecl internal_6285ec0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edx+0x5C]
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi+4]
        jne public_6285edb
        mov eax, dword ptr ds : [edx+4]
        jmp public_6285efa
        public_6285edb : nop
        mov eax, dword ptr ds : [edx+0x68]
        mov edx, dword ptr ds : [edx+0x6C]
        cmp eax, edx
        je public_6285ef0
        public_6285ee5 : nop
        cmp dword ptr ds : [eax], esi
        je public_6285ef7
        add eax, 0xC
        cmp eax, edx
        jne public_6285ee5
        public_6285ef0 : nop
        pop edi
        pop esi
        xor eax, eax
        ret 4
        public_6285ef7 : nop
        mov eax, dword ptr ds : [eax+4]
        public_6285efa : nop
        cmp eax, 0xFFFFFFFF
        je public_6285ef0
        push edi
        call public_6349fd0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6285ec0)
    }
}

#undef public_6285edb
#undef public_6285ee5
#undef public_6285ef0
#undef public_6285ef7
#undef public_6285efa
