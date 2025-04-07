#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d961b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d96200 _public_6d96200
#define public_6d96222 _public_6d96222
#define public_6d96232 _public_6d96232
#define public_6d96296 _public_6d96296
#define public_6d962b0 _public_6d962b0
#define public_6d962bd _public_6d962bd
#define public_6d962c5 _public_6d962c5
#define public_6d962cf _public_6d962cf
#define public_6d962d6 _public_6d962d6
#define public_6d962e3 _public_6d962e3
#define public_6d962ed _public_6d962ed

PROC_DECLARE(0x6d961b0, internal_6d961b0, public_6d961b0);
extern "C" NAKED register_t __cdecl internal_6d961b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov esi, ecx
/*FIXUP push offset public_6db3ed0 @0x6d961c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3ed0
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_6db31e0]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_6d962ed
/*FIXUP push offset public_6db3e40 @0x6d961de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3e40
        push ebx
        call dword ptr ds : [public_6db31e4]
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax]
        add esp, 8
        cmp edi, eax
        je public_6d962e3
        lea ebx, ds:[ebx]
        public_6d96200 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_6da16b0
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        test eax, eax
        jne public_6d96222
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d96296
        public_6d96222 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        test eax, eax
        jne public_6d96232
        mov eax, dword ptr ds : [public_6db3144]
        public_6d96232 : nop
        push eax
/*FIXUP push offset public_6db3e3c @0x6d96233*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3e3c
        push ebx
        call dword ptr ds : [public_6db31e4]
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_6db3e28 @0x6d9625f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3e28
        push ebx
        call dword ptr ds : [public_6db31e4]
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [public_6db31e4]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_6db3e1c @0x6d96280*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3e1c
        push ebx
        call esi
        add esp, 0x4C
/*FIXUP push offset public_6db3d88 @0x6d9628b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push ebx
        call esi
        add esp, 8
        public_6d96296 : nop
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6d962bd
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6d962d6
        nop 
        lea esp, ss:[esp]
        public_6d962b0 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6d962b0
        jmp public_6d962d6
        public_6d962bd : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d962cf
        public_6d962c5 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6d962c5
        public_6d962cf : nop
        cmp dword ptr ds : [edi+8], eax
        je public_6d962d6
        mov edi, eax
        public_6d962d6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [eax+0xC]
        jne public_6d96200
        public_6d962e3 : nop
        push ebx
        call dword ptr ds : [public_6db31e8]
        add esp, 4
        public_6d962ed : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d961b0)
    }
}

#undef public_6d96200
#undef public_6d96222
#undef public_6d96232
#undef public_6d96296
#undef public_6d962b0
#undef public_6d962bd
#undef public_6d962c5
#undef public_6d962cf
#undef public_6d962d6
#undef public_6d962e3
#undef public_6d962ed
