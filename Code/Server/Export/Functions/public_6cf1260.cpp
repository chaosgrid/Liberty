#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ec00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cf12c1 _public_6cf12c1
#define public_6cf12c7 _public_6cf12c7
#define public_6cf12da _public_6cf12da

PROC_DECLARE(0x6cf1260, internal_6cf1260, public_6cf1260);
extern "C" NAKED register_t __cdecl internal_6cf1260()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        jbe public_6cf12da
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edi-1]
        cmp eax, ecx
        jae public_6cf12da
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cf12da
        push esi
        push 4
        call public_6d60012
        add esp, 4
        mov esi, eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cf12c1
        mov eax, dword ptr ds : [public_6d90260]
        mov edx, edi
        imul edx, 0x418
        lea ecx, ds:[edx+eax-0x418]
        call public_6d4ec00
        mov dword ptr ds : [esi], eax
        jmp public_6cf12c7
        public_6cf12c1 : nop
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6cf12c7 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push 4
        push esi
        push edi
        call dword ptr ds : [edx+0x18C]
        pop esi
        public_6cf12da : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6cf1260)
    }
}

#undef public_6cf12c1
#undef public_6cf12c7
#undef public_6cf12da
