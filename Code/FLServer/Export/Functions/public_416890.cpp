#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416890);

#define public_4168b0 _public_4168b0
#define public_4168ba _public_4168ba
#define public_4168be _public_4168be
#define public_4168c3 _public_4168c3
#define public_4168e4 _public_4168e4

PROC_DECLARE(0x416890, internal_416890, public_416890);
extern "C" NAKED register_t __cdecl internal_416890()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_4168c3
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_4168b0 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_4168ba
        mov eax, dword ptr ds : [eax+8]
        jmp public_4168be
        public_4168ba : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_4168be : nop
        cmp eax, ecx
        jne public_4168b0
        pop edi
        public_4168c3 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_4168e4
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_4168e4
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_4168e4 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x416890)
    }
}

#undef public_4168b0
#undef public_4168ba
#undef public_4168be
#undef public_4168c3
#undef public_4168e4
