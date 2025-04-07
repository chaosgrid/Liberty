#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a830);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623a874 _public_623a874
#define public_623a885 _public_623a885
#define public_623a88e _public_623a88e
#define public_623a897 _public_623a897
#define public_623a8af _public_623a8af
#define public_623a8c6 _public_623a8c6
#define public_623a8db _public_623a8db

PROC_DECLARE(0x623a830, internal_623a830, public_623a830);
extern "C" NAKED register_t __cdecl internal_623a830()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_623a8af
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_623a8db
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
        jl public_623a897
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_623a874
        test edx, edx
        je public_623a874
        push edx
        call public_62460e0
        add esp, 4
        public_623a874 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_623a885
        xor eax, eax
        jmp public_623a88e
        public_623a885 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623a88e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_623a897 : nop
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
        jmp public_623a8db
        public_623a8af : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_623a8c6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_623a8c6
        push eax
        call public_62460e0
        add esp, 4
        public_623a8c6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_623a8db : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x623a830)
    }
}

#undef public_623a874
#undef public_623a885
#undef public_623a88e
#undef public_623a897
#undef public_623a8af
#undef public_623a8c6
#undef public_623a8db
