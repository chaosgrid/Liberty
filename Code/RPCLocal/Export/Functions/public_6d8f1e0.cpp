#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d95e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d9ace0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9f100);

#define public_6d8f248 _public_6d8f248
#define public_6d8f26a _public_6d8f26a
#define public_6d8f2ed _public_6d8f2ed
#define public_6d8f2ef _public_6d8f2ef

PROC_DECLARE(0x6d8f1e0, internal_6d8f1e0, public_6d8f1e0);
extern "C" NAKED register_t __cdecl internal_6d8f1e0()
{
    __asm
    {
        sub esp, 0x214
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x224]
        push edi
        push 0x104
        push esi
/*FIXUP push offset public_6dbbbc0 @0x6d8f1f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6dbbbc0
        mov ebp, ecx
        xor bl, bl
        call dword ptr ds : [public_6db3204]
        add esp, 0xC
/*FIXUP push offset public_6db3c48 @0x6d8f209*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3c48
        call dword ptr ds : [public_6db3134]
        test eax, eax
        mov dword ptr ds : [public_6dbbd64], eax
        je public_6d8f248
        mov edi, dword ptr ds : [public_6db3130]
/*FIXUP push offset public_6db3c34 @0x6d8f223*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3c34
        push eax
        call edi
        call eax
        mov dword ptr ds : [public_6dbbd5c], eax
        mov eax, dword ptr ds : [public_6dbbd64]
/*FIXUP push offset public_6db3c1c @0x6d8f237*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3c1c
        push eax
        call edi
        call eax
        mov dword ptr ds : [public_6dbbd60], eax
        jmp public_6d8f26a
        public_6d8f248 : nop
        mov ecx, dword ptr ds : [public_6db311c]
/*FIXUP push offset public_6db3c48 @0x6d8f24e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3c48
        push 0x3E
/*FIXUP push offset public_6db3bf0 @0x6d8f255*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3bf0
        mov eax, 0x100001
/*FIXUP push offset public_6db3bb4 @0x6d8f25f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3bb4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d8f26a : nop
        mov eax, dword ptr ds : [public_6dbbd5c]
        test eax, eax
        je public_6d8f2ed
        mov eax, dword ptr ds : [public_6dbbccc]
        push 0x104
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, 0x85
        lea edi, ss:[esp+0x18]
        push eax
        rep movsd
        call dword ptr ds : [public_6db313c]
        mov ecx, dword ptr ds : [public_6dbbd5c]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x24]
        mov bl, al
        test bl, bl
        je public_6d8f2ed
        mov ecx, dword ptr ds : [public_6dbbd5c]
        mov edx, dword ptr ds : [public_6dbbd60]
        mov dword ptr ds : [public_6dbbd24], ecx
        mov dword ptr ds : [public_6dbbd20], edx
        call public_6d95e50
        test eax, eax
        mov dword ptr ss : [ebp+8], eax
        je public_6d8f2ed
        push eax
        call public_6d9f100
        add esp, 4
        test eax, eax
        jne public_6d8f2ed
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d9ace0
        add esp, 4
        test eax, eax
        mov al, 1
        je public_6d8f2ef
        public_6d8f2ed : nop
        mov al, bl
        public_6d8f2ef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x214
        ret 4
        UNREACHABLE_TRAP(0x6d8f1e0)
    }
}

#undef public_6d8f248
#undef public_6d8f26a
#undef public_6d8f2ed
#undef public_6d8f2ef
