#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53c250);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53c018 _public_53c018
#define public_53c02d _public_53c02d
#define public_53c055 _public_53c055
#define public_53c0a5 _public_53c0a5
#define public_53c150 _public_53c150
#define public_53c17e _public_53c17e
#define public_53c223 _public_53c223

PROC_DECLARE(0x53bfb0, internal_53bfb0, public_53bfb0);
extern "C" NAKED register_t __cdecl internal_53bfb0()
{
    __asm
    {
        sub esp, 0x98
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0xAC]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [esp+0x14], eax
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x38], ecx
        jle public_53c02d
        lea ecx, ss:[esp+0x18]
        public_53c018 : nop
        mov edx, dword ptr ss : [esp+eax*4+0xBC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        inc eax
        add ecx, 4
        cmp eax, edx
        jl public_53c018
        public_53c02d : nop
        mov eax, dword ptr ss : [esp+0xE0]
        push ebx
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0xEC]
        test eax, eax
        push esi
        push edi
        jle public_53c055
        mov esi, dword ptr ss : [esp+0xF0]
        mov ecx, eax
        lea edi, ss:[esp+0x50]
        rep movsd
        public_53c055 : nop
        mov ecx, dword ptr ss : [esp+0xF8]
        mov edx, dword ptr ss : [esp+0xFC]
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x9C], edx
        call public_54baf0
        mov esi, eax
        test esi, esi
        je public_53c17e
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [esp+0xC]
        je public_53c0a5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [esp+0x10]
        jne public_53c17e
        public_53c0a5 : nop
        mov eax, dword ptr ds : [public_673f48]
        cmp eax, 0x10
        jae public_53c150
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, eax
        imul ebx, 0x98
        add ebx, offset public_673f4c
        inc eax
        mov dword ptr ds : [public_673f48], eax
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ebx+4], ecx
        push edx
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [ebx], eax
        call public_53c250
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [ebx+0x40], ecx
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ss : [esp+0x94]
        lea edi, ds:[ebx+0x44]
        mov ecx, 0x10
        lea esi, ss:[esp+0x50]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x98]
        mov dword ptr ds : [ebx+0x84], edx
        mov edx, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [ebx+0x88], eax
        mov eax, dword ptr ss : [esp+0xA0]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x8C], ecx
        mov dword ptr ds : [ebx+0x90], edx
        mov dword ptr ds : [ebx+0x94], eax
        pop ebx
        add esp, 0x98
        ret 0x5C
        lea ebx, ds:[ebx]
        public_53c150 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5ded18 @0x53c156*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ded18
        push 0x7C
/*FIXUP push offset public_5decec @0x53c15d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5decec
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x53c167*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0x98
        ret 0x5C
        public_53c17e : nop
        mov eax, dword ptr ds : [public_6735c0]
        cmp eax, 0x10
        jae public_53c223
        mov edx, dword ptr ss : [esp+0xC]
        mov ebx, eax
        imul ebx, 0x98
        add ebx, offset public_6735c4
        inc eax
        mov dword ptr ds : [public_6735c0], eax
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], eax
        call public_53c250
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ebx+0x3C], edx
        mov edx, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [ebx+0x40], eax
        mov eax, dword ptr ss : [esp+0x98]
        lea edi, ds:[ebx+0x44]
        mov ecx, 0x10
        lea esi, ss:[esp+0x50]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [ebx+0x84], ecx
        mov ecx, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [ebx+0x88], edx
        mov edx, dword ptr ss : [esp+0xA0]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x8C], eax
        mov dword ptr ds : [ebx+0x90], ecx
        mov dword ptr ds : [ebx+0x94], edx
        pop ebx
        add esp, 0x98
        ret 0x5C
/*FIXUP public_53c223 : nop
        push offset public_5ded18 @0x53c223*/
  FIXUP public_53c223 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ded18
        push 0x7C
/*FIXUP push offset public_5decec @0x53c22a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5decec
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x53c234*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0x98
        ret 0x5C
        UNREACHABLE_TRAP(0x53bfb0)
    }
}

#undef public_53c018
#undef public_53c02d
#undef public_53c055
#undef public_53c0a5
#undef public_53c150
#undef public_53c17e
#undef public_53c223
