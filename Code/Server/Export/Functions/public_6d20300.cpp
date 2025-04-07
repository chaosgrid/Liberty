#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d2034f _public_6d2034f
#define public_6d20351 _public_6d20351
#define public_6d20359 _public_6d20359
#define public_6d2035e _public_6d2035e
#define public_6d20390 _public_6d20390
#define public_6d20392 _public_6d20392
#define public_6d20398 _public_6d20398

PROC_DECLARE(0x6d20300, internal_6d20300, public_6d20300);
extern "C" NAKED register_t __cdecl internal_6d20300()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x18]
        cmp eax, 0xFFFFFFFF
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        push edi
        je public_6d2035e
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi+0x1008]
        shl eax, 5
        lea edi, ds:[edx+eax+0xC]
        mov edx, dword ptr ds : [esi+0x100C]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d2034f
        add eax, 0xFFFFFFFC
        push 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x1008], eax
        call public_6d1f540
        jmp public_6d20351
        public_6d2034f : nop
        mov eax, ecx
        public_6d20351 : nop
        test eax, eax
        je public_6d20359
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        public_6d20359 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi], edx
        public_6d2035e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [esi+0x1008]
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0x100C]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d20390
        add eax, 0xFFFFFFFC
        push 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x1008], eax
        call public_6d1f540
        jmp public_6d20392
        public_6d20390 : nop
        mov eax, ecx
        public_6d20392 : nop
        test eax, eax
        je public_6d20398
        mov dword ptr ds : [eax], edi
        public_6d20398 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d20300)
    }
}

#undef public_6d2034f
#undef public_6d20351
#undef public_6d20359
#undef public_6d2035e
#undef public_6d20390
#undef public_6d20392
#undef public_6d20398
