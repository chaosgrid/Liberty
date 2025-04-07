#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa53f);

#define public_6efa58e _public_6efa58e
#define public_6efa5ad _public_6efa5ad
#define public_6efa5c0 _public_6efa5c0
#define public_6efa5c4 _public_6efa5c4

PROC_DECLARE(0x6efa53f, internal_6efa53f, public_6efa53f);
extern "C" NAKED register_t __cdecl internal_6efa53f()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6f01288], ebx
        push esi
        push edi
        jne public_6efa58e
/*FIXUP push offset public_6efc7a8 @0x6efa54c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7a8
        call dword ptr ds : [public_6efc020]
        mov edi, eax
        cmp edi, ebx
        je public_6efa5c4
        mov esi, dword ptr ds : [public_6efc0bc]
/*FIXUP push offset public_6efc79c @0x6efa563*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc79c
        push edi
        call esi
        test eax, eax
        mov dword ptr ds : [public_6f01288], eax
        je public_6efa5c4
/*FIXUP push offset public_6efc78c @0x6efa574*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc78c
        push edi
        call esi
/*FIXUP push offset public_6efc778 @0x6efa57c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc778
        push edi
        mov dword ptr ds : [public_6f0128c], eax
        call esi
        mov dword ptr ds : [public_6f01290], eax
        public_6efa58e : nop
        mov eax, dword ptr ds : [public_6f0128c]
        test eax, eax
        je public_6efa5ad
        call eax
        mov ebx, eax
        test ebx, ebx
        je public_6efa5ad
        mov eax, dword ptr ds : [public_6f01290]
        test eax, eax
        je public_6efa5ad
        push ebx
        call eax
        mov ebx, eax
        public_6efa5ad : nop
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push ebx
        call dword ptr ds : [public_6f01288]
        public_6efa5c0 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        public_6efa5c4 : nop
        xor eax, eax
        jmp public_6efa5c0
        UNREACHABLE_TRAP(0x6efa53f)
    }
}

#undef public_6efa58e
#undef public_6efa5ad
#undef public_6efa5c0
#undef public_6efa5c4
