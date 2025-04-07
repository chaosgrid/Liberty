#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d09c80);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d613cb);

#define public_6d09cc2 _public_6d09cc2
#define public_6d09cc4 _public_6d09cc4
#define public_6d09cea _public_6d09cea
#define public_6d09cf4 _public_6d09cf4
#define public_6d09d14 _public_6d09d14
#define public_6d09d1a _public_6d09d1a

PROC_DECLARE(0x6d09c80, internal_6d09c80, public_6d09c80);
extern "C" NAKED register_t __cdecl internal_6d09c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d613cb @0x6d09c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d613cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x88
        mov esi, ecx
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_6d09cc2
        mov ecx, eax
        call public_6d04c70
        mov edi, eax
        jmp public_6d09cc4
        public_6d09cc2 : nop
        xor edi, edi
        public_6d09cc4 : nop
        mov al, byte ptr ds : [esi+0xCC]
        test al, al
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_6d09cea
        mov eax, dword ptr ds : [esi+0xD0]
        test eax, eax
        je public_6d09cea
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0xD0], ecx
        jmp public_6d09cf4
        public_6d09cea : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d09cf4 : nop
        mov edx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+0xC8]
        test ecx, ecx
        je public_6d09d14
        mov dword ptr ds : [ecx], eax
        jmp public_6d09d1a
        public_6d09d14 : nop
        mov dword ptr ds : [esi+0xC4], eax
        public_6d09d1a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0xC8], eax
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x168]
        mov edx, dword ptr ds : [edi]
        push 0
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x170]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d09c80)
    }
}

#undef public_6d09cc2
#undef public_6d09cc4
#undef public_6d09cea
#undef public_6d09cf4
#undef public_6d09d14
#undef public_6d09d1a
