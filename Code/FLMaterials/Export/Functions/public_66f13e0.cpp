#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f14c0);
CLANG_FORWARD_PROC_SYMBOL(public_66f1fc0);
CLANG_FORWARD_PROC_SYMBOL(public_67008b0);

#define public_66f1411 _public_66f1411
#define public_66f1452 _public_66f1452
#define public_66f1493 _public_66f1493
#define public_66f14a5 _public_66f14a5

PROC_DECLARE(0x66f13e0, internal_66f13e0, public_66f13e0);
extern "C" NAKED register_t __cdecl internal_66f13e0()
{
    __asm
    {
        mov eax, 0x2008
        call public_67008b0
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2014]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x6C]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jbe public_66f14a5
        push ebx
        push edi
        xor ebx, ebx
        public_66f1411 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [ebx+edx]
        lea eax, ds:[ebx+edx]
        not cl
        test cl, 1
        je public_66f1493
        mov edx, dword ptr ss : [esp+0x2020]
        push ebp
        push eax
        push edx
        mov ecx, esi
        call public_66f1fc0
        test al, al
        jne public_66f1493
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+eax]
        shr ecx, 2
        test cl, 1
        je public_66f1493
        mov edi, dword ptr ds : [esi+0x14]
        test edi, edi
        jne public_66f1452
        mov edi, offset public_6701358
        public_66f1452 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+eax+8]
        push edi
        push ecx
        lea edx, ss:[esp+0x24]
/*FIXUP push offset public_6701328 @0x66f1468*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701328
        push edx
        call public_66f14c0
        push eax
        mov eax, dword ptr ds : [public_6701000]
        push 0xFD
/*FIXUP push offset public_670117c @0x66f147e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670117c
        mov ecx, 0x100004
/*FIXUP push offset public_6701160 @0x66f1488*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701160
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x28
        public_66f1493 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc ebp
        add ebx, 0x4C
        cmp ebp, eax
        jb public_66f1411
        pop edi
        pop ebx
        public_66f14a5 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x2008
        ret 8
        UNREACHABLE_TRAP(0x66f13e0)
    }
}

#undef public_66f1411
#undef public_66f1452
#undef public_66f1493
#undef public_66f14a5
