#include "DALib-PCH.h"


#define public_65c16d5 _public_65c16d5
#define public_65c16f1 _public_65c16f1
#define public_65c170b _public_65c170b
#define public_65c1725 _public_65c1725
#define public_65c173f _public_65c173f
#define public_65c1759 _public_65c1759
#define public_65c1773 _public_65c1773
#define public_65c178d _public_65c178d
#define public_65c17a7 _public_65c17a7
#define public_65c17d4 _public_65c17d4
#define public_65c17ee _public_65c17ee
#define public_65c1808 _public_65c1808
#define public_65c1822 _public_65c1822
#define public_65c1856 _public_65c1856
#define public_65c1870 _public_65c1870
#define public_65c1899 _public_65c1899
#define public_65c18b3 _public_65c18b3
#define public_65c18df _public_65c18df
#define public_65c18f9 _public_65c18f9
#define public_65c1913 _public_65c1913
#define public_65c192d _public_65c192d
#define public_65c1956 _public_65c1956
#define public_65c1964 _public_65c1964
#define public_65c1994 _public_65c1994
#define public_65c19aa _public_65c19aa

PROC_DECLARE(0x65c16b0, internal_65c16b0, public_65c16b0);
extern "C" NAKED register_t __cdecl internal_65c16b0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ds : [public_65c7010]
        push esi
/*FIXUP push offset public_65c742c @0x65c16b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c742c
        call ebp
        mov eax, dword ptr ds : [public_65ca11c]
        xor esi, esi
        cmp eax, esi
        je public_65c16d5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [public_65ca11c]
        public_65c16d5 : nop
        cmp eax, esi
        push ebx
        mov ebx, dword ptr ds : [public_65ca0e0]
        je public_65c16f1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca11c], esi
        public_65c16f1 : nop
        mov eax, dword ptr ds : [public_65ca0d0]
        cmp eax, esi
        je public_65c170b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0d0], esi
        public_65c170b : nop
        mov eax, dword ptr ds : [public_65ca0cc]
        cmp eax, esi
        je public_65c1725
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0cc], esi
        public_65c1725 : nop
        mov eax, dword ptr ds : [public_65ca0d4]
        cmp eax, esi
        je public_65c173f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0d4], esi
        public_65c173f : nop
        mov eax, dword ptr ds : [public_65ca0d8]
        cmp eax, esi
        je public_65c1759
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0d8], esi
        public_65c1759 : nop
        mov eax, dword ptr ds : [public_65ca0fc]
        cmp eax, esi
        je public_65c1773
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0fc], esi
        public_65c1773 : nop
        mov eax, dword ptr ds : [public_65ca0c0]
        cmp eax, esi
        je public_65c178d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0c0], esi
        public_65c178d : nop
        mov eax, dword ptr ds : [public_65ca0c4]
        cmp eax, esi
        je public_65c17a7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0c4], esi
        public_65c17a7 : nop
        cmp dword ptr ds : [public_65ca0bc], esi
        je public_65c17d4
        mov edx, dword ptr ds : [public_65c7004]
/*FIXUP push offset public_65c740c @0x65c17b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c740c
        push 0x14E
/*FIXUP push offset public_65c73e4 @0x65c17bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c73e4
        mov eax, 0x100002
/*FIXUP push offset public_65c73c8 @0x65c17c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c73c8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_65c17d4 : nop
        mov eax, dword ptr ds : [public_65ca0dc]
        cmp eax, esi
        je public_65c17ee
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0dc], esi
        public_65c17ee : nop
        mov eax, dword ptr ds : [public_65ca104]
        cmp eax, esi
        je public_65c1808
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca104], esi
        public_65c1808 : nop
        mov eax, dword ptr ds : [public_65ca100]
        cmp eax, esi
        je public_65c1822
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca100], esi
        public_65c1822 : nop
        mov eax, dword ptr ds : [public_65ca114]
        cmp eax, esi
        je public_65c1856
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ds : [public_65ca114]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ds : [public_65ca114]
        cmp eax, esi
        je public_65c1856
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca114], esi
        public_65c1856 : nop
        mov eax, dword ptr ds : [public_65ca118]
        cmp eax, esi
        je public_65c1870
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca118], esi
        public_65c1870 : nop
        mov eax, dword ptr ds : [public_65ca110]
        cmp eax, esi
        je public_65c1899
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [public_65ca110]
        cmp eax, esi
        je public_65c1899
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca110], esi
        public_65c1899 : nop
        mov eax, dword ptr ds : [public_65ca0c8]
        cmp eax, esi
        je public_65c18b3
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0c8], esi
        public_65c18b3 : nop
        mov eax, dword ptr ds : [public_65ca0f8]
        cmp eax, esi
        je public_65c18df
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xA8]
        mov eax, dword ptr ds : [public_65ca0f8]
        cmp eax, esi
        je public_65c18df
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0f8], esi
        public_65c18df : nop
        mov eax, dword ptr ds : [public_65ca0e4]
        cmp eax, esi
        je public_65c18f9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0e4], esi
        public_65c18f9 : nop
        mov eax, dword ptr ds : [public_65ca0e8]
        cmp eax, esi
        je public_65c1913
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0e8], esi
        public_65c1913 : nop
        mov eax, dword ptr ds : [public_65ca0ec]
        cmp eax, esi
        je public_65c192d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0ec], esi
        public_65c192d : nop
        mov eax, dword ptr ds : [public_65ca0e0]
        cmp eax, esi
        je public_65c1956
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [public_65ca0e0]
        cmp eax, esi
        je public_65c1956
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0e0], esi
        public_65c1956 : nop
        cmp dword ptr ds : [public_65ca0bc], esi
        je public_65c1994
        push edi
        mov edi, 0x100002
        public_65c1964 : nop
        mov edx, dword ptr ds : [public_65c7004]
/*FIXUP push offset public_65c7398 @0x65c196a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7398
        push 0x178
/*FIXUP push offset public_65c73e4 @0x65c1974*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c73e4
/*FIXUP push offset public_65c73c8 @0x65c1979*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c73c8
        push edi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x14
        push ebx
        call dword ptr ds : [eax+8]
        cmp eax, esi
        mov dword ptr ds : [public_65ca0bc], eax
        jne public_65c1964
        pop edi
        public_65c1994 : nop
        mov eax, dword ptr ds : [public_65ca0f4]
        cmp eax, esi
        pop ebx
        je public_65c19aa
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [public_65ca0f4], esi
/*FIXUP public_65c19aa : nop
        push offset public_65c737c @0x65c19aa*/
  FIXUP public_65c19aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c737c
        call ebp
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65c16b0)
    }
}

#undef public_65c16d5
#undef public_65c16f1
#undef public_65c170b
#undef public_65c1725
#undef public_65c173f
#undef public_65c1759
#undef public_65c1773
#undef public_65c178d
#undef public_65c17a7
#undef public_65c17d4
#undef public_65c17ee
#undef public_65c1808
#undef public_65c1822
#undef public_65c1856
#undef public_65c1870
#undef public_65c1899
#undef public_65c18b3
#undef public_65c18df
#undef public_65c18f9
#undef public_65c1913
#undef public_65c192d
#undef public_65c1956
#undef public_65c1964
#undef public_65c1994
#undef public_65c19aa
