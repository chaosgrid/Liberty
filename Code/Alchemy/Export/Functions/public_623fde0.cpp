#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623fde0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623fe1e _public_623fe1e
#define public_623fe65 _public_623fe65
#define public_623fe76 _public_623fe76
#define public_623fe7f _public_623fe7f
#define public_623fe88 _public_623fe88
#define public_623fea3 _public_623fea3
#define public_623feba _public_623feba
#define public_623fecf _public_623fecf
#define public_623fee0 _public_623fee0

PROC_DECLARE(0x623fde0, internal_623fde0, public_623fde0);
extern "C" NAKED register_t __cdecl internal_623fde0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov ecx, edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x48]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_623fe1e
        mov ecx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_62573c4 @0x623fdfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573c4
        push 0xB3
        mov eax, 0x100002
/*FIXUP push offset public_6257368 @0x623fe09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257368
/*FIXUP push offset public_625528c @0x623fe0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_623fee0
        public_623fe1e : nop
        push ebx
        mov ebx, dword ptr ds : [edi+0x80]
        push esi
        mov esi, dword ptr ds : [eax+4]
        add ebx, 4
        test esi, esi
        je public_623fea3
        mov edx, dword ptr ds : [ebx+0x10]
        cmp esi, edx
        je public_623fecf
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x18]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x14], ecx
        jl public_623fe88
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_623fe65
        test edx, edx
        je public_623fe65
        push edx
        call public_62460e0
        add esp, 4
        public_623fe65 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [ebx+0xC], 1
        inc eax
        jne public_623fe76
        xor eax, eax
        jmp public_623fe7f
        public_623fe76 : nop
        push eax
        call public_624612c
        add esp, 4
        public_623fe7f : nop
        mov edx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [ebx+0x10], eax
        mov dword ptr ds : [ebx+0x18], edx
        public_623fe88 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ds : [ebx+0x10]
        inc ecx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x10]
        jmp public_623fecf
        public_623fea3 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_623feba
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_623feba
        push eax
        call public_62460e0
        add esp, 4
        public_623feba : nop
        mov dword ptr ds : [ebx+0x10], 0
        mov dword ptr ds : [ebx+0x18], 0
        mov dword ptr ds : [ebx+0x14], 0
        public_623fecf : nop
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        pop esi
        pop ebx
        public_623fee0 : nop
        mov ecx, dword ptr ds : [edi+0x80]
        xor eax, eax
        mov edx, dword ptr ds : [ecx+0x48]
        mov dword ptr ds : [edi+0x88], edx
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x623fde0)
    }
}

#undef public_623fe1e
#undef public_623fe65
#undef public_623fe76
#undef public_623fe7f
#undef public_623fe88
#undef public_623fea3
#undef public_623feba
#undef public_623fecf
#undef public_623fee0
