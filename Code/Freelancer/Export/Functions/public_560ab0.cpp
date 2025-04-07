#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434e90);
CLANG_FORWARD_PROC_SYMBOL(public_4356c0);
CLANG_FORWARD_PROC_SYMBOL(public_560ab0);

#define public_560ad8 _public_560ad8
#define public_560b20 _public_560b20
#define public_560b30 _public_560b30
#define public_560b36 _public_560b36
#define public_560b5b _public_560b5b
#define public_560bef _public_560bef

PROC_DECLARE(0x560ab0, internal_560ab0, public_560ab0);
extern "C" NAKED register_t __cdecl internal_560ab0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        or ebp, 0xFFFFFFFF
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_560ad8
        mov ecx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x10]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x48]
        public_560ad8 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        lea edi, ds:[ebx+0x268]
        mov ecx, 0xC
        mov esi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_560bef
        cmp byte ptr ds : [esi], 0
        je public_560bef
        or edx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edx
        xor eax, eax
        lea ecx, ds:[ebx+0x254]
        public_560b20 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_560b30
        inc eax
        add ecx, 4
        cmp eax, 4
        jl public_560b20
        jmp public_560b36
        public_560b30 : nop
        mov edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_560b36 : nop
        imul edx, 0x84
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add edx, ebx
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea ebp, ds:[edx+0x48]
        jb public_560b5b
        mov eax, 0x7F
        public_560b5b : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx+0x48], 0
        mov dword ptr ds : [edx+0x44], eax
        add edx, 0x48
        push edx
        call public_4356c0
        mov ecx, eax
        call public_434e90
        mov esi, dword ptr ss : [esp+0x28]
        push 0
        mov ecx, dword ptr ds : [public_5c6d58]
        push 0xBF800000
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0x3F800000
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        lea eax, ds:[ebx+eax*4+0x254]
        push eax
        mov eax, dword ptr ds : [ebx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov ebp, eax
        test ebp, ebp
        je public_560bef
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x1F7
/*FIXUP push offset public_5d7188 @0x560bda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7188
        mov eax, 0x100002
/*FIXUP push offset public_5d7408 @0x560be4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7408
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_560bef : nop
        pop edi
        xor eax, eax
        pop esi
        test ebp, ebp
        pop ebp
        sete al
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x560ab0)
    }
}

#undef public_560ad8
#undef public_560b20
#undef public_560b30
#undef public_560b36
#undef public_560b5b
#undef public_560bef
