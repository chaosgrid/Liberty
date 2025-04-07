#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);

#define public_6ea1ba3 _public_6ea1ba3
#define public_6ea1bf0 _public_6ea1bf0
#define public_6ea1c10 _public_6ea1c10
#define public_6ea1c3f _public_6ea1c3f
#define public_6ea1c4b _public_6ea1c4b
#define public_6ea1c5e _public_6ea1c5e
#define public_6ea1c78 _public_6ea1c78
#define public_6ea1cde _public_6ea1cde
#define public_6ea1d1c _public_6ea1d1c

PROC_DECLARE(0x6ea1b60, internal_6ea1b60, public_6ea1b60);
extern "C" NAKED register_t __cdecl internal_6ea1b60()
{
    __asm
    {
        sub esp, 0xC08
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC14]
        mov eax, ecx
        dec eax
        push edi
        je public_6ea1cde
        sub eax, 3
        je public_6ea1c78
        dec eax
        je public_6ea1ba3
        mov eax, dword ptr ss : [esp+0xC1C]
        push eax
        push ecx
        mov ecx, esi
        call public_6eb8f50
        pop edi
        pop esi
        pop ebx
        add esp, 0xC08
        ret 8
        public_6ea1ba3 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0xC1C]
        mov edx, dword ptr ds : [ebx]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_6ea1d1c
        push ebx
        push 5
        mov ecx, esi
        call public_6eb8f50
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_6fb302c]
        mov ecx, dword ptr ds : [ebx+4]
        call dword ptr ds : [public_6fb3028]
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, edi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6ea1c5e
        mov ebx, dword ptr ds : [public_6fb3020]
        mov edi, edi
/*FIXUP public_6ea1bf0 : nop
        push offset public_6fb3960 @0x6ea1bf0*/
  FIXUP public_6ea1bf0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3960
        mov ecx, edi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6ea1c4b
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ea1c4b
        lea ecx, ds:[ecx]
/*FIXUP public_6ea1c10 : nop
        push offset public_6fb3950 @0x6ea1c10*/
  FIXUP public_6ea1c10 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3950
        mov ecx, edi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ea1c3f
        push 0
        mov ecx, edi
        call ebx
        cmp eax, 3
        mov dword ptr ds : [esi+0x2A8], eax
        mov dword ptr ds : [esi+0x2AC], eax
        je public_6ea1c3f
        mov ecx, esi
        call public_6f1b610
        public_6ea1c3f : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ea1c10
        public_6ea1c4b : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6ea1bf0
        mov ebx, dword ptr ss : [esp+0xC1C]
        public_6ea1c5e : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        call dword ptr ds : [public_6fb3010]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC08
        ret 8
        public_6ea1c78 : nop
        mov edx, dword ptr ds : [esi+8]
        mov edi, dword ptr ss : [esp+0xC1C]
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ds : [edx+0xC]
        jne public_6ea1d1c
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6ea1d1c
        push edi
        push 4
        mov ecx, esi
        call public_6eb8f50
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        mov edi, dword ptr ds : [edi+4]
        je public_6ea1d1c
        mov ebx, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb393c @0x6ea1cb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb393c
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x2A8]
        push ecx
/*FIXUP push offset public_6fb3924 @0x6ea1cc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3924
        push edi
        call ebx
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0xC08
        ret 8
        public_6ea1cde : nop
        mov edi, dword ptr ss : [esp+0xC1C]
        push edi
        push 1
        mov ecx, esi
        call public_6eb8f50
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+0xC]
        jne public_6ea1d1c
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [public_6fce968]
        jne public_6ea1d1c
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        jne public_6ea1d1c
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x32C], 1
        call dword ptr ds : [edx+0x78]
        public_6ea1d1c : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC08
        ret 8
        UNREACHABLE_TRAP(0x6ea1b60)
    }
}

#undef public_6ea1ba3
#undef public_6ea1bf0
#undef public_6ea1c10
#undef public_6ea1c3f
#undef public_6ea1c4b
#undef public_6ea1c5e
#undef public_6ea1c78
#undef public_6ea1cde
#undef public_6ea1d1c
