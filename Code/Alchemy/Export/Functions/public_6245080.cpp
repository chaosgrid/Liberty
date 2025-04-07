#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_6245080);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62450c4 _public_62450c4
#define public_62450d5 _public_62450d5
#define public_62450de _public_62450de
#define public_62450e7 _public_62450e7
#define public_62450ff _public_62450ff
#define public_6245116 _public_6245116
#define public_624512b _public_624512b

PROC_DECLARE(0x6245080, internal_6245080, public_6245080);
extern "C" NAKED register_t __cdecl internal_6245080()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_62450ff
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_624512b
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
        jl public_62450e7
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_62450c4
        test edx, edx
        je public_62450c4
        push edx
        call public_62460e0
        add esp, 4
        public_62450c4 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_62450d5
        xor eax, eax
        jmp public_62450de
        public_62450d5 : nop
        push eax
        call public_624612c
        add esp, 4
        public_62450de : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_62450e7 : nop
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
        jmp public_624512b
        public_62450ff : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6245116
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6245116
        push eax
        call public_62460e0
        add esp, 4
        public_6245116 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_624512b : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6245080)
    }
}

#undef public_62450c4
#undef public_62450d5
#undef public_62450de
#undef public_62450e7
#undef public_62450ff
#undef public_6245116
#undef public_624512b
