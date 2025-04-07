#include "Alchemy-PCH.h"


#define public_6242ee1 _public_6242ee1
#define public_6242f06 _public_6242f06
#define public_6242f0b _public_6242f0b

PROC_DECLARE(0x6242ec0, internal_6242ec0, public_6242ec0);
extern "C" NAKED register_t __cdecl internal_6242ec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax+8]
        test ebx, ebx
        je public_6242f0b
        push esi
        mov esi, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ds : [ebx+0xC]
        mov edx, edi
        cmp edx, edi
        je public_6242f06
        lea eax, ds:[esi+8]
        lea ecx, ds:[edx+8]
        push ebp
        public_6242ee1 : nop
        mov ebp, dword ptr ds : [edx]
        add edx, 0x10
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [ecx-4]
        mov dword ptr ds : [eax-4], ebp
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ebp
        add esi, 0x10
        add eax, 0x10
        add ecx, 0x10
        cmp edx, edi
        jne public_6242ee1
        pop ebp
        public_6242f06 : nop
        mov dword ptr ds : [ebx+0xC], esi
        pop edi
        pop esi
        public_6242f0b : nop
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6242ec0)
    }
}

#undef public_6242ee1
#undef public_6242f06
#undef public_6242f0b
