#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623fa33 _public_623fa33
#define public_623fa44 _public_623fa44
#define public_623fa4d _public_623fa4d
#define public_623fa56 _public_623fa56
#define public_623fa6e _public_623fa6e
#define public_623fa85 _public_623fa85
#define public_623fa9a _public_623fa9a
#define public_623fab0 _public_623fab0
#define public_623fade _public_623fade

PROC_DECLARE(0x623f9e0, internal_623f9e0, public_623f9e0);
extern "C" NAKED register_t __cdecl internal_623f9e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xEFA8CE01
        jne public_623fab0
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_623fa6e
        mov edx, dword ptr ds : [ebx+0x38]
        cmp esi, edx
        je public_623fa9a
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x40]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x3C], ecx
        jl public_623fa56
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_623fa33
        test edx, edx
        je public_623fa33
        push edx
        call public_62460e0
        add esp, 4
        public_623fa33 : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [ebx+0x34], 1
        inc eax
        jne public_623fa44
        xor eax, eax
        jmp public_623fa4d
        public_623fa44 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623fa4d : nop
        mov dword ptr ds : [ebx+0x38], eax
        mov eax, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [ebx+0x40], eax
        public_623fa56 : nop
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov edi, dword ptr ds : [ebx+0x38]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_623fa9a
        public_623fa6e : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_623fa85
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_623fa85
        push eax
        call public_62460e0
        add esp, 4
        public_623fa85 : nop
        mov dword ptr ds : [ebx+0x38], 0
        mov dword ptr ds : [ebx+0x40], 0
        mov dword ptr ds : [ebx+0x3C], 0
        public_623fa9a : nop
        mov eax, dword ptr ds : [ebx+0x38]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x2C], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 0xC
        public_623fab0 : nop
        cmp eax, 0xF54EF296
        jne public_623fade
/*FIXUP push offset public_62573a8 @0x623fab7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573a8
        push 0x65
        mov eax, 0x100002
/*FIXUP push offset public_6257368 @0x623fac3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257368
/*FIXUP push offset public_625528c @0x623fac8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 0xC
        public_623fade : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623f9e0)
    }
}

#undef public_623fa33
#undef public_623fa44
#undef public_623fa4d
#undef public_623fa56
#undef public_623fa6e
#undef public_623fa85
#undef public_623fa9a
#undef public_623fab0
#undef public_623fade
