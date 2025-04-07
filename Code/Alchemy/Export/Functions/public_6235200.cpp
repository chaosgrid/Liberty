#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235200);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6235244 _public_6235244
#define public_6235255 _public_6235255
#define public_623525e _public_623525e
#define public_6235267 _public_6235267
#define public_623527f _public_623527f
#define public_6235296 _public_6235296
#define public_62352ab _public_62352ab

PROC_DECLARE(0x6235200, internal_6235200, public_6235200);
extern "C" NAKED register_t __cdecl internal_6235200()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_623527f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_62352ab
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
        jl public_6235267
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6235244
        test edx, edx
        je public_6235244
        push edx
        call public_62460e0
        add esp, 4
        public_6235244 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6235255
        xor eax, eax
        jmp public_623525e
        public_6235255 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623525e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6235267 : nop
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
        jmp public_62352ab
        public_623527f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6235296
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6235296
        push eax
        call public_62460e0
        add esp, 4
        public_6235296 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_62352ab : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6235200)
    }
}

#undef public_6235244
#undef public_6235255
#undef public_623525e
#undef public_6235267
#undef public_623527f
#undef public_6235296
#undef public_62352ab
