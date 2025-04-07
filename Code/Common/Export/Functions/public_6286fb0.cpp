#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_6286fb0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63930bb);

#define public_6287010 _public_6287010
#define public_6287025 _public_6287025
#define public_6287055 _public_6287055
#define public_6287090 _public_6287090
#define public_62870ab _public_62870ab

PROC_DECLARE(0x6286fb0, internal_6286fb0, public_6286fb0);
extern "C" NAKED register_t __cdecl internal_6286fb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63930bb @0x6286fb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63930bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ss : [ebp+4]
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi+4], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6287055
        lea esp, ss:[esp]
        public_6287010 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6287025
        mov ebp, eax
        public_6287025 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[edi+8]
        push ecx
        add eax, 8
        push eax
        call public_630cd00
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6287010
        mov ebp, dword ptr ss : [esp+0x2C]
        public_6287055 : nop
        mov dl, byte ptr ss : [ebp+0x10]
        lea ebx, ds:[esi+0x10]
        push 0xC
        mov dword ptr ss : [esp+0x28], 0
        mov byte ptr ds : [ebx], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ebp, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_62870ab
        mov edi, edi
        public_6287090 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edi+8]
        push ecx
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_627f280
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6287090
        public_62870ab : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6286fb0)
    }
}

#undef public_6287010
#undef public_6287025
#undef public_6287055
#undef public_6287090
#undef public_62870ab
