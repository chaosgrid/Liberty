#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d167a0);

#define public_6d167b0 _public_6d167b0
#define public_6d167b9 _public_6d167b9
#define public_6d167bb _public_6d167bb
#define public_6d167d1 _public_6d167d1
#define public_6d167d8 _public_6d167d8

PROC_DECLARE(0x6d167a0, internal_6d167a0, public_6d167a0);
extern "C" NAKED register_t __cdecl internal_6d167a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        xor esi, esi
        nop 
        lea esp, ss:[esp]
        public_6d167b0 : nop
        test esi, esi
        jne public_6d167b9
        mov esi, dword ptr ds : [ebx+8]
        jmp public_6d167bb
        public_6d167b9 : nop
        mov esi, dword ptr ds : [esi]
        public_6d167bb : nop
        test esi, esi
        je public_6d167d8
        test edi, edi
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+4]
        je public_6d167d1
        test eax, eax
        je public_6d167d1
        cmp eax, edi
        jne public_6d167b0
        public_6d167d1 : nop
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax]
        jmp public_6d167b0
        public_6d167d8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+0x94]
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d167a0)
    }
}

#undef public_6d167b0
#undef public_6d167b9
#undef public_6d167bb
#undef public_6d167d1
#undef public_6d167d8
