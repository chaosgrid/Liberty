#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62406f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6240743 _public_6240743
#define public_6240754 _public_6240754
#define public_624075d _public_624075d
#define public_6240766 _public_6240766
#define public_624077e _public_624077e
#define public_6240795 _public_6240795
#define public_62407aa _public_62407aa
#define public_62407c0 _public_62407c0
#define public_62407ee _public_62407ee

PROC_DECLARE(0x62406f0, internal_62406f0, public_62406f0);
extern "C" NAKED register_t __cdecl internal_62406f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xEFA8CE01
        jne public_62407c0
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_624077e
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_62407aa
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
        jl public_6240766
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6240743
        test edx, edx
        je public_6240743
        push edx
        call public_62460e0
        add esp, 4
        public_6240743 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6240754
        xor eax, eax
        jmp public_624075d
        public_6240754 : nop
        push eax
        call public_624612c
        add esp, 4
        public_624075d : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6240766 : nop
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
        jmp public_62407aa
        public_624077e : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6240795
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6240795
        push eax
        call public_62460e0
        add esp, 4
        public_6240795 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_62407aa : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 0xC
        public_62407c0 : nop
        cmp eax, 0xF54EF296
        jne public_62407ee
/*FIXUP push offset public_62573a8 @0x62407c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573a8
        push 0x65
        mov eax, 0x100002
/*FIXUP push offset public_6257368 @0x62407d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257368
/*FIXUP push offset public_625528c @0x62407d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 0xC
        public_62407ee : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62406f0)
    }
}

#undef public_6240743
#undef public_6240754
#undef public_624075d
#undef public_6240766
#undef public_624077e
#undef public_6240795
#undef public_62407aa
#undef public_62407c0
#undef public_62407ee
