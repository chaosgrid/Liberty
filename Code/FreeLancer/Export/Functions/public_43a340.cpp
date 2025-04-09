#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a340);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43a378 _public_43a378
#define public_43a380 _public_43a380
#define public_43a3a0 _public_43a3a0

PROC_DECLARE(0x43a340, internal_43a340, public_43a340);
extern "C" NAKED register_t __cdecl internal_43a340()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_43a378
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43a378
        lea eax, ss:[esp+8]
        jmp public_43a380
        public_43a378 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_43a380 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_43a3a0
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax]
        mov al, byte ptr ds : [edx+8]
        add esp, 8
        ret 4
        lea esp, ss:[esp]
        public_43a3a0 : nop
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43a3a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43a3b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        mov ecx, dword ptr ds : [eax]
        mov al, byte ptr ds : [ecx+8]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43a340)
    }
}

#undef public_43a378
#undef public_43a380
#undef public_43a3a0
