#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6eac240);
CLANG_FORWARD_PROC_SYMBOL(public_6eba430);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6eba454 _public_6eba454
#define public_6eba458 _public_6eba458
#define public_6eba461 _public_6eba461
#define public_6eba464 _public_6eba464
#define public_6eba484 _public_6eba484
#define public_6eba488 _public_6eba488
#define public_6eba48d _public_6eba48d
#define public_6eba508 _public_6eba508
#define public_6eba50f _public_6eba50f
#define public_6eba520 _public_6eba520

PROC_DECLARE(0x6eba430, internal_6eba430, public_6eba430);
extern "C" NAKED register_t __cdecl internal_6eba430()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x2F4]
        push ebp
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6eba520
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        lea esi, ds:[eax+4]
        push edi
        mov dword ptr ss : [esp+0x18], esi
        jmp public_6eba458
        public_6eba454 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_6eba458 : nop
        test esi, esi
        jne public_6eba461
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6eba48d
        public_6eba461 : nop
        lea eax, ss:[ebp+0xC]
        public_6eba464 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6eba488
        test cl, cl
        je public_6eba484
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6eba488
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eba464
        public_6eba484 : nop
        xor eax, eax
        jmp public_6eba48d
        public_6eba488 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eba48d : nop
        test eax, eax
        sete al
        test al, al
        je public_6eba50f
        lea edi, ds:[ebx+0xC]
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eba50f
        mov ecx, dword ptr ds : [ebx+8]
        call public_6f47980
        test eax, eax
        je public_6eba508
        lea ecx, ds:[ebx+0x308]
        push ecx
        mov ecx, eax
        call public_6eac110
        mov esi, eax
        test esi, esi
        je public_6eba508
        mov eax, dword ptr ss : [ebp+0x90]
        test eax, eax
        je public_6eba508
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eba508
        mov edx, dword ptr ss : [ebp+0x90]
        mov eax, dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6eac240
        test al, al
        je public_6eba508
        mov eax, dword ptr ss : [esp+0x10]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+8]
        call public_6ea7ce0
        public_6eba508 : nop
        mov byte ptr ss : [ebp+0x94], 1
        public_6eba50f : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ebx+0x2F4]
        jne public_6eba454
        pop edi
        pop esi
        public_6eba520 : nop
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eba430)
    }
}

#undef public_6eba454
#undef public_6eba458
#undef public_6eba461
#undef public_6eba464
#undef public_6eba484
#undef public_6eba488
#undef public_6eba48d
#undef public_6eba508
#undef public_6eba50f
#undef public_6eba520
