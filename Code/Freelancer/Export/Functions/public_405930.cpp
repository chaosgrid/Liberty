#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405930);

#define public_405950 _public_405950
#define public_40595e _public_40595e
#define public_405966 _public_405966
#define public_405988 _public_405988
#define public_405997 _public_405997
#define public_4059a5 _public_4059a5
#define public_4059ad _public_4059ad
#define public_4059c7 _public_4059c7

PROC_DECLARE(0x405930, internal_405930, public_405930);
extern "C" NAKED register_t __cdecl internal_405930()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        xor eax, eax
        test ecx, ecx
        push edi
        jle public_405966
        mov esi, dword ptr ss : [ebp]
        lea edx, ds:[esi+0x10]
        lea esp, ss:[esp]
        public_405950 : nop
        cmp dword ptr ds : [edx], ebx
        je public_40595e
        inc eax
        add edx, 0x1C
        cmp eax, ecx
        jl public_405950
        jmp public_405966
        public_40595e : nop
        imul eax, 0x1C
        mov byte ptr ds : [eax+esi+0x18], 1
        public_405966 : nop
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        je public_4059c7
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        cmp eax, 0xFFFFFFFF
        je public_4059c7
        public_405988 : nop
        mov esi, dword ptr ss : [ebp+4]
        xor ecx, ecx
        test esi, esi
        jle public_4059ad
        mov edi, dword ptr ss : [ebp]
        lea edx, ds:[edi+0x10]
        public_405997 : nop
        cmp dword ptr ds : [edx], eax
        je public_4059a5
        inc ecx
        add edx, 0x1C
        cmp ecx, esi
        jl public_405997
        jmp public_4059ad
        public_4059a5 : nop
        imul ecx, 0x1C
        mov byte ptr ds : [ecx+edi+0x18], 1
        public_4059ad : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push ebx
        push ecx
        call dword ptr ds : [edx+0xD8]
        cmp eax, 0xFFFFFFFF
        jne public_405988
        public_4059c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x405930)
    }
}

#undef public_405950
#undef public_40595e
#undef public_405966
#undef public_405988
#undef public_405997
#undef public_4059a5
#undef public_4059ad
#undef public_4059c7
