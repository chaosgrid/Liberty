#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4291c0);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);

#define public_4291f0 _public_4291f0
#define public_429221 _public_429221
#define public_4292b4 _public_4292b4
#define public_429324 _public_429324

PROC_DECLARE(0x4291c0, internal_4291c0, public_4291c0);
extern "C" NAKED register_t __cdecl internal_4291c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test al, al
        mov edi, dword ptr ss : [esp+0xC]
        je public_429221
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [edi+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_4291f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x64]
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_4291f0 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov ebx, 0x100002
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x557
/*FIXUP push offset public_5c9ec8 @0x429210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ec8
/*FIXUP push offset public_5ca1cc @0x429215*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca1cc
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop ebx
        public_429221 : nop
        test edi, edi
        je public_429324
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x30]
        test eax, eax
        mov dword ptr ds : [esi+0x18], eax
        je public_429324
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov cl, byte ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        and cl, 0xE7
        mov dword ptr ds : [esi+0x14], eax
        mov al, cl
        test al, 4
        mov byte ptr ds : [esi+0xC], cl
        jne public_4292b4
        mov dword ptr ss : [esp+0x10], esi
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [public_667c70]
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, offset public_667c6c
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [public_667c74]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        inc eax
        mov dword ptr ds : [public_667c74], eax
        mov eax, dword ptr ds : [public_667c70]
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [edx+0x2C], ecx
        mov al, 1
        pop esi
        ret 8
        public_4292b4 : nop
        mov eax, dword ptr ds : [public_5c6d44]
        cmp dword ptr ds : [eax], 0
        je public_429324
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_429324
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [public_667c70]
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push esi
        mov ecx, offset public_667c6c
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [public_667c74]
        mov edx, dword ptr ds : [public_667c70]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        inc eax
        mov dword ptr ds : [public_667c74], eax
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov dword ptr ds : [ecx+0x2C], eax
        mov al, 1
        pop esi
        ret 8
        public_429324 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4291c0)
    }
}

#undef public_4291f0
#undef public_429221
#undef public_4292b4
#undef public_429324
