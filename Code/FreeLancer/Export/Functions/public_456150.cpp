#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ed00);
CLANG_FORWARD_PROC_SYMBOL(public_44f7f0);
CLANG_FORWARD_PROC_SYMBOL(public_44f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_454fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4554c0);
CLANG_FORWARD_PROC_SYMBOL(public_455fc0);
CLANG_FORWARD_PROC_SYMBOL(public_456150);

#define public_456160 _public_456160
#define public_456170 _public_456170
#define public_456182 _public_456182
#define public_4561d8 _public_4561d8
#define public_4561f7 _public_4561f7
#define public_45621a _public_45621a
#define public_45621e _public_45621e
#define public_456226 _public_456226
#define public_456235 _public_456235
#define public_456273 _public_456273
#define public_45628e _public_45628e
#define public_4562a4 _public_4562a4
#define public_4562b7 _public_4562b7

PROC_DECLARE(0x456150, internal_456150, public_456150);
extern "C" NAKED register_t __cdecl internal_456150()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2D]
        test al, al
        jne public_456160
        xor al, al
        pop esi
        ret 4
        public_456160 : nop
        mov al, byte ptr ds : [esi+0xC4]
        test al, al
        jne public_456170
        mov al, 1
        pop esi
        ret 4
        public_456170 : nop
        mov al, byte ptr ds : [esi+0x2E]
        push ebx
        push edi
        xor bl, bl
        or edi, 0xFFFFFFFF
        test al, al
        je public_456235
        public_456182 : nop
        test bl, bl
        jne public_45628e
        mov eax, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+0xB4]
        shl eax, 6
        mov ecx, dword ptr ds : [eax+ecx]
        call public_44f9d0
        mov edx, dword ptr ds : [esi+0xC0]
        mov eax, dword ptr ds : [esi+0xB4]
        shl edx, 6
        mov ecx, dword ptr ds : [edx+eax]
        push 0
        call public_44f7f0
        mov eax, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ds : [esi+0xB4]
        shl eax, 6
        add eax, edx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_4561d8
        mov ecx, eax
        call public_44ed00
        public_4561d8 : nop
        mov ecx, esi
        xor bl, bl
        call public_455fc0
        cmp eax, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [esi+0xC0], eax
        jl public_4561f7
        mov dword ptr ds : [esi+0xC0], edi
        mov bl, 1
        public_4561f7 : nop
        test bl, bl
        jne public_456226
        mov ecx, dword ptr ds : [esi+0xC0]
        mov eax, dword ptr ds : [esi+0xB4]
        mov edx, ecx
        shl edx, 6
        mov eax, dword ptr ds : [edx+eax+0x3C]
        cmp eax, 1
        je public_45621a
        cmp eax, 4
        jne public_45621e
        public_45621a : nop
        mov byte ptr ds : [esi+0x2E], 0
        public_45621e : nop
        push ecx
        mov ecx, esi
        call public_454fb0
        public_456226 : nop
        mov al, byte ptr ds : [esi+0x2E]
        test al, al
        jne public_456182
        test bl, bl
        jne public_45628e
        public_456235 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ss : [esp+0x10]
        shl ecx, 6
        mov ecx, dword ptr ds : [ecx+edx]
        push eax
        call public_44f7f0
        test al, al
        je public_4562a4
        mov eax, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ds : [esi+0xB4]
        shl eax, 6
        add eax, edx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_456273
        mov ecx, eax
        call public_44ed00
        public_456273 : nop
        mov ecx, esi
        call public_455fc0
        cmp eax, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [esi+0xC0], eax
        jl public_4562b7
        mov dword ptr ds : [esi+0xC0], edi
        public_45628e : nop
        push 0
        mov ecx, esi
        call public_4554c0
        mov dword ptr ds : [esi+0xC0], edi
        mov byte ptr ds : [esi+0xC4], 0
        public_4562a4 : nop
        mov cl, byte ptr ds : [esi+0xC4]
        pop edi
        xor eax, eax
        test cl, cl
        pop ebx
        sete al
        pop esi
        ret 4
        public_4562b7 : nop
        push eax
        mov ecx, esi
        call public_454fb0
        mov cl, byte ptr ds : [esi+0xC4]
        pop edi
        xor eax, eax
        test cl, cl
        pop ebx
        sete al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x456150)
    }
}

#undef public_456160
#undef public_456170
#undef public_456182
#undef public_4561d8
#undef public_4561f7
#undef public_45621a
#undef public_45621e
#undef public_456226
#undef public_456235
#undef public_456273
#undef public_45628e
#undef public_4562a4
#undef public_4562b7
