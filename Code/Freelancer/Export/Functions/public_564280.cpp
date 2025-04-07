#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417620);
CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_564280);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1eb9);

#define public_5642b8 _public_5642b8
#define public_56431a _public_56431a
#define public_564359 _public_564359

PROC_DECLARE(0x564280, internal_564280, public_564280);
extern "C" NAKED register_t __cdecl internal_564280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1eb9 @0x564282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1eb9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ds : [public_67a4a0]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        jne public_5642b8
/*FIXUP push offset public_5e21f8 @0x5642a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21f8
        call public_4177b0
        add esp, 4
        mov dword ptr ds : [public_67a4a0], eax
        public_5642b8 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6eac]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x98], 0
        mov dword ptr ds : [esi+0x9C], 0
        mov dword ptr ds : [esi], offset public_5e2250
        call public_417620
        mov dword ptr ds : [esi+0x98], eax
        mov eax, dword ptr ds : [public_67a4a0]
        test eax, eax
        jne public_56431a
/*FIXUP push offset public_5e21f8 @0x564308*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21f8
        call public_4177b0
        add esp, 4
        mov dword ptr ds : [public_67a4a0], eax
        public_56431a : nop
        mov ecx, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x98]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x20]
        call public_417620
        mov dword ptr ds : [esi+0x9C], eax
        mov eax, dword ptr ds : [public_67a4a0]
        test eax, eax
        jne public_564359
/*FIXUP push offset public_5e21f8 @0x564347*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21f8
        call public_4177b0
        add esp, 4
        mov dword ptr ds : [public_67a4a0], eax
        public_564359 : nop
        mov ecx, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x564280)
    }
}

#undef public_5642b8
#undef public_56431a
#undef public_564359
