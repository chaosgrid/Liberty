#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced360);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0ed40);

#define public_6d06a79 _public_6d06a79
#define public_6d06a7b _public_6d06a7b
#define public_6d06aa1 _public_6d06aa1
#define public_6d06aa3 _public_6d06aa3
#define public_6d06af3 _public_6d06af3

PROC_DECLARE(0x6d06a40, internal_6d06a40, public_6d06a40);
extern "C" NAKED register_t __cdecl internal_6d06a40()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x18
        push ebx
        push esi
        push edi
        mov ebx, ecx
        jne public_6d06af3
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_6d06af3
        lea esi, ds:[eax-0x9C]
        test esi, esi
        je public_6d06af3
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6d06a79
        add eax, 0xC
        jmp public_6d06a7b
        public_6d06a79 : nop
        xor eax, eax
        public_6d06a7b : nop
        test eax, eax
        mov edx, dword ptr ds : [esi+0xEC]
        je public_6d06aa1
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d06aa1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d06aa1
        mov ecx, eax
        jmp public_6d06aa3
        public_6d06aa1 : nop
        xor ecx, ecx
        public_6d06aa3 : nop
        push edx
        call dword ptr ds : [public_6d64654]
        mov edi, eax
        test edi, edi
        je public_6d06af3
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [edx+0x28]
        push 0x10000000
        push eax
        call public_6d0c8d0
        mov esi, eax
        test esi, esi
        je public_6d06af3
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d06af3
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        xor edx, edx
        mov dx, word ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+0x28]
        push edx
        push edi
        push eax
        push esi
        call public_6d0ed40
        public_6d06af3 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov ecx, ebx
        call public_6ced360
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d06a40)
    }
}

#undef public_6d06a79
#undef public_6d06a7b
#undef public_6d06aa1
#undef public_6d06aa3
#undef public_6d06af3
