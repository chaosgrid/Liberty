#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d420);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6ef08c5 _public_6ef08c5
#define public_6ef08e3 _public_6ef08e3
#define public_6ef092d _public_6ef092d
#define public_6ef0960 _public_6ef0960
#define public_6ef096b _public_6ef096b
#define public_6ef096d _public_6ef096d
#define public_6ef0990 _public_6ef0990
#define public_6ef09a1 _public_6ef09a1
#define public_6ef09b9 _public_6ef09b9

PROC_DECLARE(0x6ef0890, internal_6ef0890, public_6ef0890);
extern "C" NAKED register_t __cdecl internal_6ef0890()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        call public_6f4d420
        mov ebx, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb7800 @0x6ef08a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7800
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef08c5
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6ef08c5 : nop
        push offset public_6fb77f4 @0x6ef08c5*/
  FIXUP public_6ef08c5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb77f4
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef08e3
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6ef08e3 : nop
        push offset public_6fb77e4 @0x6ef08e3*/
  FIXUP public_6ef08e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb77e4
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef092d
        mov ebx, dword ptr ds : [public_6fb3020]
        push 0
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        push 1
        mov ecx, esi
        fstp dword ptr ds : [edi+0x54]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        push 2
        mov ecx, esi
        fstp dword ptr ds : [edi+0x58]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edi+0x5C]
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6ef092d : nop
        push offset public_6fb77d4 @0x6ef092d*/
  FIXUP public_6ef092d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb77d4
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef09a1
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x60], eax
        mov esi, dword ptr ds : [public_6fcf258]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edx
        je public_6ef096b
        nop 
        lea esp, ss:[esp]
        public_6ef0960 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef096d
        add eax, 4
        cmp eax, ecx
        jne public_6ef0960
        public_6ef096b : nop
        mov eax, ecx
        public_6ef096d : nop
        cmp eax, ecx
        jne public_6ef09b9
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6ef09b9
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_6ef0990 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6ef09b9
        add eax, 4
        cmp eax, esi
        jne public_6ef0990
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6ef09a1 : nop
        push offset public_6fb77c8 @0x6ef09a1*/
  FIXUP public_6ef09a1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb77c8
        call ebx
        test al, al
        je public_6ef09b9
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x64], eax
        public_6ef09b9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef0890)
    }
}

#undef public_6ef08c5
#undef public_6ef08e3
#undef public_6ef092d
#undef public_6ef0960
#undef public_6ef096b
#undef public_6ef096d
#undef public_6ef0990
#undef public_6ef09a1
#undef public_6ef09b9
