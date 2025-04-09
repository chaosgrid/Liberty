#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_5909c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c48ba);

#define public_590a20 _public_590a20
#define public_590a3b _public_590a3b
#define public_590a71 _public_590a71
#define public_590a8c _public_590a8c
#define public_590a98 _public_590a98

PROC_DECLARE(0x5909c0, internal_5909c0, public_5909c0);
extern "C" NAKED register_t __cdecl internal_5909c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c48ba @0x5909c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c48ba
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xC], edi
        xor esi, esi
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_590a98
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        mov al, byte ptr ss : [ebp]
        push 0xC
        mov byte ptr ds : [edi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], esi
        mov ebx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_590a3b
        nop 
        public_590a20 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+8]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_46c800
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_590a20
        public_590a3b : nop
        mov dl, byte ptr ss : [ebp+0xC]
        lea ebx, ds:[edi+0xC]
        push 0xC
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [ebx], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ebp, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_590a8c
        public_590a71 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+8]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        call public_46c800
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_590a71
        public_590a8c : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dl, byte ptr ds : [ecx+0x18]
        pop ebp
        mov byte ptr ds : [edi+0x18], dl
        pop ebx
        public_590a98 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5909c0)
    }
}

#undef public_590a20
#undef public_590a3b
#undef public_590a71
#undef public_590a8c
#undef public_590a98
