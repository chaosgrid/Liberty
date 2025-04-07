#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c9b0);

#define public_6f3c9d8 _public_6f3c9d8
#define public_6f3c9fe _public_6f3c9fe
#define public_6f3ca38 _public_6f3ca38
#define public_6f3ca6a _public_6f3ca6a
#define public_6f3ca81 _public_6f3ca81
#define public_6f3ca98 _public_6f3ca98
#define public_6f3caaf _public_6f3caaf
#define public_6f3cac6 _public_6f3cac6

PROC_DECLARE(0x6f3c9b0, internal_6f3c9b0, public_6f3c9b0);
extern "C" NAKED register_t __cdecl internal_6f3c9b0()
{
    __asm
    {
        cmp dword ptr ss : [esp+0xC], 0xC
        je public_6f3cac6
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, edi
        call dword ptr ds : [public_6fb31bc]
        mov ebp, dword ptr ds : [public_6fb3048]
        xor ebx, ebx
        mov esi, offset public_6fb95e8
        public_6f3c9d8 : nop
        push esi
        push 0
        mov ecx, edi
        call ebp
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f3c9fe
        add esi, 0x24
        inc ebx
        cmp esi, offset public_6fb9798
        jl public_6f3c9d8
        jmp public_6f3caaf
        public_6f3c9fe : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+eax*4+0x10]
        lea edx, ds:[ebx+ebx*8]
        mov eax, dword ptr ds : [edx*4+public_6fb9608]
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+4]
        push 2
        mov ecx, edi
        mov dword ptr ds : [esi+8], 0
        call ebp
        mov ecx, offset public_6fd0ab8
        public_6f3ca38 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [ecx], dl
        inc ecx
        test dl, dl
        jne public_6f3ca38
/*FIXUP push offset public_6fd0ab8 @0x6f3ca42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0ab8
        call dword ptr ds : [public_6fb335c]
        mov edi, dword ptr ds : [public_6fb3364]
/*FIXUP push offset public_6fbad94 @0x6f3ca53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad94
/*FIXUP push offset public_6fd0ab8 @0x6f3ca58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0ab8
        call edi
        add esp, 0xC
        test eax, eax
        je public_6f3ca6a
        or dword ptr ds : [esi+8], 1
/*FIXUP public_6f3ca6a : nop
        push offset public_6fbad8c @0x6f3ca6a*/
  FIXUP public_6f3ca6a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad8c
/*FIXUP push offset public_6fd0ab8 @0x6f3ca6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0ab8
        call edi
        add esp, 8
        test eax, eax
        je public_6f3ca81
        or dword ptr ds : [esi+8], 2
/*FIXUP public_6f3ca81 : nop
        push offset public_6fbad80 @0x6f3ca81*/
  FIXUP public_6f3ca81 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad80
/*FIXUP push offset public_6fd0ab8 @0x6f3ca86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0ab8
        call edi
        add esp, 8
        test eax, eax
        je public_6f3ca98
        or dword ptr ds : [esi+8], 4
/*FIXUP public_6f3ca98 : nop
        push offset public_6fbad78 @0x6f3ca98*/
  FIXUP public_6f3ca98 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad78
/*FIXUP push offset public_6fd0ab8 @0x6f3ca9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0ab8
        call edi
        add esp, 8
        test eax, eax
        je public_6f3caaf
        or dword ptr ds : [esi+8], 8
        public_6f3caaf : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        lea ecx, ds:[eax+eax*2]
        pop ebp
        mov dword ptr ds : [edx+ecx*4+0x1C], 0xC
        pop ebx
        public_6f3cac6 : nop
        ret 
        UNREACHABLE_TRAP(0x6f3c9b0)
    }
}

#undef public_6f3c9d8
#undef public_6f3c9fe
#undef public_6f3ca38
#undef public_6f3ca6a
#undef public_6f3ca81
#undef public_6f3ca98
#undef public_6f3caaf
#undef public_6f3cac6
