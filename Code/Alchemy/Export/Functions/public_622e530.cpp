#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e530);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622e574 _public_622e574
#define public_622e585 _public_622e585
#define public_622e58e _public_622e58e
#define public_622e597 _public_622e597
#define public_622e5af _public_622e5af
#define public_622e5c6 _public_622e5c6
#define public_622e5db _public_622e5db

PROC_DECLARE(0x622e530, internal_622e530, public_622e530);
extern "C" NAKED register_t __cdecl internal_622e530()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_622e5af
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_622e5db
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
        jl public_622e597
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_622e574
        test edx, edx
        je public_622e574
        push edx
        call public_62460e0
        add esp, 4
        public_622e574 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_622e585
        xor eax, eax
        jmp public_622e58e
        public_622e585 : nop
        push eax
        call public_624612c
        add esp, 4
        public_622e58e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_622e597 : nop
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
        jmp public_622e5db
        public_622e5af : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_622e5c6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_622e5c6
        push eax
        call public_62460e0
        add esp, 4
        public_622e5c6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_622e5db : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x622e530)
    }
}

#undef public_622e574
#undef public_622e585
#undef public_622e58e
#undef public_622e597
#undef public_622e5af
#undef public_622e5c6
#undef public_622e5db
