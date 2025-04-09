#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44dba0);
CLANG_FORWARD_PROC_SYMBOL(public_4507a0);
CLANG_FORWARD_PROC_SYMBOL(public_450830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d4b);

#define public_44dbe6 _public_44dbe6
#define public_44dbe8 _public_44dbe8

PROC_DECLARE(0x44dba0, internal_44dba0, public_44dba0);
extern "C" NAKED register_t __cdecl internal_44dba0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9d4b @0x44dba2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x70
        mov esi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_44dbe6
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push esi
        push esi
        mov ecx, eax
        call public_4507a0
        mov edi, eax
        jmp public_44dbe8
        public_44dbe6 : nop
        xor edi, edi
        public_44dbe8 : nop
        mov edx, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [eax+0x500]
        push 0
        push edx
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_450830
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x44dba0)
    }
}

#undef public_44dbe6
#undef public_44dbe8
