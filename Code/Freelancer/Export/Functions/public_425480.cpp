#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425480);

#define public_4254b0 _public_4254b0
#define public_4254f7 _public_4254f7
#define public_425500 _public_425500
#define public_425521 _public_425521
#define public_425543 _public_425543
#define public_42558a _public_42558a
#define public_425593 _public_425593
#define public_4255b3 _public_4255b3

PROC_DECLARE(0x425480, internal_425480, public_425480);
extern "C" NAKED register_t __cdecl internal_425480()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6df0]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0xC]
        xor esi, esi
        cmp eax, ebp
        jle public_425500
        nop 
        lea esp, ss:[esp]
        public_4254b0 : nop
        mov ecx, dword ptr ds : [public_5c6df0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        sub eax, esi
        dec eax
        push eax
        push ebx
        push ecx
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_5c995c @0x4254cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c995c
        mov dword ptr ss : [esp+0x1C], ebp
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x78]
        test eax, eax
        jl public_4254f7
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_4254f7 : nop
        mov eax, dword ptr ss : [esp+0xC]
        inc esi
        cmp esi, eax
        jl public_4254b0
        public_425500 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_4255b3
        push edi
        public_425521 : nop
        mov edx, dword ptr ds : [public_5c6df0]
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        xor edi, edi
        cmp eax, ebp
        jle public_425593
        public_425543 : nop
        mov ecx, dword ptr ds : [public_5c6df0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        sub eax, edi
        dec eax
        push eax
        push esi
        push ecx
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_5c995c @0x425560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c995c
        mov dword ptr ss : [esp+0x20], ebp
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x78]
        test eax, eax
        jl public_42558a
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_42558a : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc edi
        cmp edi, eax
        jl public_425543
        public_425593 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_425521
        pop edi
        public_4255b3 : nop
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x425480)
    }
}

#undef public_4254b0
#undef public_4254f7
#undef public_425500
#undef public_425521
#undef public_425543
#undef public_42558a
#undef public_425593
#undef public_4255b3
