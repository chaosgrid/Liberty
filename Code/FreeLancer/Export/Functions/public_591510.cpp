#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591510);
CLANG_FORWARD_PROC_SYMBOL(public_5947f0);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4943);

#define public_591550 _public_591550
#define public_59155d _public_59155d
#define public_591571 _public_591571

PROC_DECLARE(0x591510, internal_591510, public_591510);
extern "C" NAKED register_t __cdecl internal_591510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4943 @0x591512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4943
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_5e5334
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0xC], eax
        je public_591571
        mov edi, edi
        public_591550 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp ecx, ebx
        je public_59155d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_59155d : nop
        lea ecx, ss:[esp+0xC]
        call public_5948b0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        jne public_591550
        public_591571 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_5947f0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], bl
        call public_5947f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+8], ebx
        add esp, 8
        mov dword ptr ds : [edi], offset public_5e534c
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x591510)
    }
}

#undef public_591550
#undef public_59155d
#undef public_591571
