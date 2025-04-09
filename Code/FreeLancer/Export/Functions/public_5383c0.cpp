#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5383c0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae700);

#define public_5383e3 _public_5383e3
#define public_538429 _public_538429
#define public_53844b _public_53844b
#define public_538471 _public_538471
#define public_538483 _public_538483
#define public_538487 _public_538487
#define public_538498 _public_538498
#define public_5384a9 _public_5384a9
#define public_5384b0 _public_5384b0
#define public_5384cc _public_5384cc
#define public_5384dc _public_5384dc
#define public_5384f4 _public_5384f4
#define public_53850b _public_53850b

PROC_DECLARE(0x5383c0, internal_5383c0, public_5383c0);
extern "C" NAKED register_t __cdecl internal_5383c0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_675570]
        xor ebx, ebx
        xor ecx, ecx
        xor ebp, ebp
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ecx
        je public_5384a9
        push edi
        public_5383e3 : nop
        mov eax, dword ptr ds : [esi+0xC8]
        mov ecx, dword ptr ds : [esi+0xD0]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0xD4]
        inc ecx
        cmp eax, ebx
        mov dword ptr ds : [esi+0xD0], ecx
        je public_53844b
        mov eax, dword ptr ds : [esi+0xDC]
        cmp eax, ebx
        je public_538429
        mov ecx, dword ptr ds : [esi+0xD4]
        push ecx
        lea ecx, ds:[eax+0x38]
        call public_5ae700
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        public_538429 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0xD0]
        dec ecx
        mov eax, ecx
        cmp eax, ebx
        mov dword ptr ds : [esi+0xD0], ecx
        jg public_53844b
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        public_53844b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0xD0]
        dec ecx
        mov edi, ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0xD0], ecx
        jg public_538471
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp edi, ebx
        je public_538498
        public_538471 : nop
        cmp ebp, ebx
        mov dword ptr ds : [esi+0xCC], ebp
        je public_538483
        mov dword ptr ss : [ebp+0xC8], esi
        jmp public_538487
        public_538483 : nop
        mov dword ptr ss : [esp+0x18], esi
        public_538487 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        mov ebp, esi
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ss : [esp+0x14], eax
        public_538498 : nop
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, ebx
        jne public_5383e3
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        public_5384a9 : nop
        cmp ecx, ebx
        je public_53850b
        lea ecx, ds:[ecx]
        public_5384b0 : nop
        mov eax, dword ptr ds : [ecx+0xCC]
        cmp eax, ebx
        mov esi, dword ptr ds : [ecx+0xC8]
        jne public_5384cc
        cmp esi, ebx
        je public_5384f4
        mov dword ptr ds : [esi+0xCC], ebx
        jmp public_5384f4
        public_5384cc : nop
        cmp esi, ebx
        jne public_5384dc
        cmp eax, ebx
        je public_5384f4
        mov dword ptr ds : [eax+0xC8], ebx
        jmp public_5384f4
        public_5384dc : nop
        mov dword ptr ds : [eax+0xC8], esi
        mov edx, dword ptr ds : [ecx+0xC8]
        mov eax, dword ptr ds : [ecx+0xCC]
        mov dword ptr ds : [edx+0xCC], eax
        public_5384f4 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+0xCC], ebx
        mov dword ptr ds : [ecx+0xC8], ebx
        call dword ptr ds : [edx+4]
        cmp esi, ebx
        mov ecx, esi
        jne public_5384b0
        public_53850b : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5383c0)
    }
}

#undef public_5383e3
#undef public_538429
#undef public_53844b
#undef public_538471
#undef public_538483
#undef public_538487
#undef public_538498
#undef public_5384a9
#undef public_5384b0
#undef public_5384cc
#undef public_5384dc
#undef public_5384f4
#undef public_53850b
