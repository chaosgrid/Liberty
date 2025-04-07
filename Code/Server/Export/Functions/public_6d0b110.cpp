#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6730);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b110);

#define public_6d0b122 _public_6d0b122
#define public_6d0b134 _public_6d0b134
#define public_6d0b136 _public_6d0b136
#define public_6d0b14a _public_6d0b14a
#define public_6d0b152 _public_6d0b152

PROC_DECLARE(0x6d0b110, internal_6d0b110, public_6d0b110);
extern "C" NAKED register_t __cdecl internal_6d0b110()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0b152
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d0b122 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6d0b134
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0b136
        public_6d0b134 : nop
        xor eax, eax
        public_6d0b136 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        cmp edx, dword ptr ds : [esi+0x40]
        je public_6d0b14a
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf6730
        public_6d0b14a : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d0b122
        pop edi
        public_6d0b152 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d0b110)
    }
}

#undef public_6d0b122
#undef public_6d0b134
#undef public_6d0b136
#undef public_6d0b14a
#undef public_6d0b152
