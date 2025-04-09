#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555a90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_555aa6 _public_555aa6
#define public_555aba _public_555aba
#define public_555acd _public_555acd
#define public_555ae0 _public_555ae0
#define public_555afe _public_555afe

PROC_DECLARE(0x555a90, internal_555a90, public_555a90);
extern "C" NAKED register_t __cdecl internal_555a90()
{
    __asm
    {
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        xor ebp, ebp
        xor edi, edi
        cmp eax, ebp
        jle public_555aba
        push ebx
        mov ebx, dword ptr ds : [public_5c60c8]
        public_555aa6 : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[eax+edi*4]
        push ecx
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 4
        inc edi
        cmp edi, eax
        jl public_555aa6
        pop ebx
        public_555aba : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_555acd
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        public_555acd : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        je public_555ae0
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        public_555ae0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        or edi, 0xFFFFFFFF
        cmp ecx, edi
        mov dword ptr ds : [esi], ebp
        je public_555afe
        mov edx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xC], edi
        public_555afe : nop
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        pop edi
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0x14], ebp
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x555a90)
    }
}

#undef public_555aa6
#undef public_555aba
#undef public_555acd
#undef public_555ae0
#undef public_555afe
