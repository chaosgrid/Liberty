#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d162d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17040);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d162d7 _public_6d162d7
#define public_6d162e0 _public_6d162e0
#define public_6d162e3 _public_6d162e3
#define public_6d16301 _public_6d16301
#define public_6d1630c _public_6d1630c
#define public_6d1630e _public_6d1630e
#define public_6d16326 _public_6d16326
#define public_6d16330 _public_6d16330
#define public_6d16359 _public_6d16359
#define public_6d1635e _public_6d1635e
#define public_6d16374 _public_6d16374
#define public_6d1637c _public_6d1637c
#define public_6d16387 _public_6d16387
#define public_6d1639d _public_6d1639d
#define public_6d163a6 _public_6d163a6

PROC_DECLARE(0x6d162d0, internal_6d162d0, public_6d162d0);
extern "C" NAKED register_t __cdecl internal_6d162d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor ebp, ebp
        public_6d162d7 : nop
        test ebp, ebp
        jne public_6d162e0
        mov ebp, dword ptr ds : [ebx+8]
        jmp public_6d162e3
        public_6d162e0 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d162e3 : nop
        test ebp, ebp
        je public_6d163a6
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d162d7
        push edi
        xor edi, edi
        public_6d16301 : nop
        test edi, edi
        jne public_6d1630c
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [edx+4]
        jmp public_6d1630e
        public_6d1630c : nop
        mov edi, dword ptr ds : [edi]
        public_6d1630e : nop
        test edi, edi
        je public_6d16330
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov ecx, dword ptr ds : [esi+4]
        je public_6d16326
        test ecx, ecx
        je public_6d16326
        cmp ecx, eax
        jne public_6d16301
        public_6d16326 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        jmp public_6d16301
        public_6d16330 : nop
        mov ecx, esi
        call public_6d17040
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp eax, ebp
        pop edi
        jne public_6d1635e
        mov eax, dword ptr ss : [ebp]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], eax
        jne public_6d16359
        mov dword ptr ds : [ebx+0xC], ecx
        jmp public_6d16387
        public_6d16359 : nop
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d16387
        public_6d1635e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ebp
        jne public_6d1637c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6d16374
        mov dword ptr ds : [ebx+8], eax
        jmp public_6d16387
        public_6d16374 : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d16387
        public_6d1637c : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_6d16387 : nop
        mov al, byte ptr ds : [ebx+0x10]
        test al, al
        je public_6d1639d
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp], eax
        pop esi
        mov dword ptr ds : [ebx+0x14], ebp
        pop ebp
        pop ebx
        ret 4
        public_6d1639d : nop
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d163a6 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d162d0)
    }
}

#undef public_6d162d7
#undef public_6d162e0
#undef public_6d162e3
#undef public_6d16301
#undef public_6d1630c
#undef public_6d1630e
#undef public_6d16326
#undef public_6d16330
#undef public_6d16359
#undef public_6d1635e
#undef public_6d16374
#undef public_6d1637c
#undef public_6d16387
#undef public_6d1639d
#undef public_6d163a6
