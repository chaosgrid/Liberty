#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c010);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623c054 _public_623c054
#define public_623c065 _public_623c065
#define public_623c06e _public_623c06e
#define public_623c077 _public_623c077
#define public_623c08f _public_623c08f
#define public_623c0a6 _public_623c0a6
#define public_623c0bb _public_623c0bb

PROC_DECLARE(0x623c010, internal_623c010, public_623c010);
extern "C" NAKED register_t __cdecl internal_623c010()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_623c08f
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_623c0bb
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
        jl public_623c077
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_623c054
        test edx, edx
        je public_623c054
        push edx
        call public_62460e0
        add esp, 4
        public_623c054 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_623c065
        xor eax, eax
        jmp public_623c06e
        public_623c065 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623c06e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_623c077 : nop
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
        jmp public_623c0bb
        public_623c08f : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_623c0a6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_623c0a6
        push eax
        call public_62460e0
        add esp, 4
        public_623c0a6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_623c0bb : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x623c010)
    }
}

#undef public_623c054
#undef public_623c065
#undef public_623c06e
#undef public_623c077
#undef public_623c08f
#undef public_623c0a6
#undef public_623c0bb
