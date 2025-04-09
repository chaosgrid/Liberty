#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a00);

#define public_405a20 _public_405a20
#define public_405a32 _public_405a32
#define public_405a55 _public_405a55
#define public_405a66 _public_405a66
#define public_405a90 _public_405a90
#define public_405aa0 _public_405aa0
#define public_405aae _public_405aae
#define public_405ad1 _public_405ad1
#define public_405ae2 _public_405ae2
#define public_405b00 _public_405b00

PROC_DECLARE(0x405a00, internal_405a00, public_405a00);
extern "C" NAKED register_t __cdecl internal_405a00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        xor eax, eax
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0x13], 0
        jle public_405a66
        mov esi, dword ptr ds : [ebx]
        lea edx, ds:[esi+0x10]
        mov edi, edi
        public_405a20 : nop
        mov ebp, dword ptr ds : [edx]
        cmp ebp, dword ptr ss : [esp+0x18]
        je public_405a32
        inc eax
        add edx, 0x1C
        cmp eax, ecx
        jl public_405a20
        jmp public_405a66
        public_405a32 : nop
        imul eax, 0x1C
        mov ecx, dword ptr ds : [eax+esi+0x14]
        add eax, esi
        cmp edi, ecx
        mov byte ptr ss : [esp+0x13], 1
        mov byte ptr ds : [eax+0x19], 1
        je public_405a66
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        test edx, edx
        mov dword ptr ds : [eax+0x14], edi
        jle public_405a66
        xor edx, edx
        public_405a55 : nop
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+esi+0xC], edi
        mov esi, dword ptr ds : [eax]
        inc ecx
        add edx, 0x10
        cmp ecx, esi
        jl public_405a55
        public_405a66 : nop
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_405b00
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        cmp eax, 0xFFFFFFFF
        je public_405b00
        public_405a90 : nop
        mov esi, dword ptr ds : [ebx+4]
        xor ecx, ecx
        test esi, esi
        jle public_405ae2
        mov ebp, dword ptr ds : [ebx]
        lea edx, ss:[ebp+0x10]
        mov edi, edi
        public_405aa0 : nop
        cmp dword ptr ds : [edx], eax
        je public_405aae
        inc ecx
        add edx, 0x1C
        cmp ecx, esi
        jl public_405aa0
        jmp public_405ae2
        public_405aae : nop
        imul ecx, 0x1C
        mov edx, dword ptr ds : [ecx+ebp+0x14]
        add ecx, ebp
        cmp edi, edx
        mov byte ptr ss : [esp+0x13], 1
        mov byte ptr ds : [ecx+0x19], 1
        je public_405ae2
        mov esi, dword ptr ds : [ecx]
        xor edx, edx
        test esi, esi
        mov dword ptr ds : [ecx+0x14], edi
        jle public_405ae2
        xor esi, esi
        public_405ad1 : nop
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+ebp+0xC], edi
        mov ebp, dword ptr ds : [ecx]
        inc edx
        add esi, 0x10
        cmp edx, ebp
        jl public_405ad1
        public_405ae2 : nop
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0xD8]
        cmp eax, 0xFFFFFFFF
        jne public_405a90
        public_405b00 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x405a00)
    }
}

#undef public_405a20
#undef public_405a32
#undef public_405a55
#undef public_405a66
#undef public_405a90
#undef public_405aa0
#undef public_405aae
#undef public_405ad1
#undef public_405ae2
#undef public_405b00
