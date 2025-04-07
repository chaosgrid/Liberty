#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623dd14 _public_623dd14
#define public_623dd25 _public_623dd25
#define public_623dd2e _public_623dd2e
#define public_623dd37 _public_623dd37
#define public_623dd4f _public_623dd4f
#define public_623dd66 _public_623dd66
#define public_623dd7b _public_623dd7b

PROC_DECLARE(0x623dcd0, internal_623dcd0, public_623dcd0);
extern "C" NAKED register_t __cdecl internal_623dcd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_623dd4f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_623dd7b
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x44]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x40], ecx
        jl public_623dd37
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_623dd14
        test edx, edx
        je public_623dd14
        push edx
        call public_62460e0
        add esp, 4
        public_623dd14 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_623dd25
        xor eax, eax
        jmp public_623dd2e
        public_623dd25 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623dd2e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_623dd37 : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edi, dword ptr ds : [ebx+0x3C]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_623dd7b
        public_623dd4f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_623dd66
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_623dd66
        push eax
        call public_62460e0
        add esp, 4
        public_623dd66 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_623dd7b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x623dcd0)
    }
}

#undef public_623dd14
#undef public_623dd25
#undef public_623dd2e
#undef public_623dd37
#undef public_623dd4f
#undef public_623dd66
#undef public_623dd7b
