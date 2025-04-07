#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62141c0);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6244f90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62480fb);

#define public_621425e _public_621425e
#define public_6214260 _public_6214260

PROC_DECLARE(0x62141c0, internal_62141c0, public_62141c0);
extern "C" NAKED register_t __cdecl internal_62141c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62480fb @0x62141c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62480fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xC0
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_621425e
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], al
        mov dword ptr ds : [esi], offset public_624c9f0
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624c948
        mov dword ptr ds : [esi], offset public_624c8e8
        mov dword ptr ds : [edi+0xBC], eax
        jmp public_6214260
        public_621425e : nop
        xor edi, edi
        public_6214260 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        lea esi, ds:[edi+4]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6244f90
        mov eax, dword ptr ds : [ebx+0x9C]
        add ebx, 0xAC
        mov dword ptr ds : [esi+0x9C], eax
        add esi, 0xAC
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62141c0)
    }
}

#undef public_621425e
#undef public_6214260
