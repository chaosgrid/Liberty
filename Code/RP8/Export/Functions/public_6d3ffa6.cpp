#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3fe65);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ffa6);
CLANG_FORWARD_PROC_SYMBOL(public_6d46f15);

#define public_6d3ffd3 _public_6d3ffd3
#define public_6d3fff8 _public_6d3fff8
#define public_6d40004 _public_6d40004
#define public_6d40007 _public_6d40007

PROC_DECLARE(0x6d3ffa6, internal_6d3ffa6, public_6d3ffa6);
extern "C" NAKED register_t __cdecl internal_6d3ffa6()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 0xC8
        je public_6d3ffd3
        cmp eax, 0xC9
        je public_6d3ffd3
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x12
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d3ffd3 : nop
        push esi
        call public_6d3fe65
        pop ecx
        mov ecx, eax
        dec ecx
        je public_6d40004
        dec ecx
        jne public_6d40007
        cmp byte ptr ss : [esp+0xC], 0
        je public_6d3fff8
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x32
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d3fff8 : nop
        push esi
        call public_6d46f15
        pop ecx
        push 2
        pop eax
        pop esi
        ret 
        public_6d40004 : nop
        xor eax, eax
        inc eax
        public_6d40007 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d3ffa6)
    }
}

#undef public_6d3ffd3
#undef public_6d3fff8
#undef public_6d40004
#undef public_6d40007
