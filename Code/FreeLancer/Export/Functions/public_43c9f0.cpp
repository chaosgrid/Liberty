#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c9f0);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b949b);

#define public_43ca15 _public_43ca15
#define public_43ca1e _public_43ca1e
#define public_43ca20 _public_43ca20
#define public_43ca2d _public_43ca2d
#define public_43ca4d _public_43ca4d
#define public_43ca59 _public_43ca59
#define public_43ca7f _public_43ca7f
#define public_43ca81 _public_43ca81
#define public_43caa7 _public_43caa7
#define public_43cab1 _public_43cab1
#define public_43cacb _public_43cacb
#define public_43cace _public_43cace

PROC_DECLARE(0x43c9f0, internal_43c9f0, public_43c9f0);
extern "C" NAKED register_t __cdecl internal_43c9f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b949b @0x43c9f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b949b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        xor eax, eax
        public_43ca15 : nop
        test eax, eax
        jne public_43ca1e
        mov eax, dword ptr ds : [esi+4]
        jmp public_43ca20
        public_43ca1e : nop
        mov eax, dword ptr ds : [eax]
        public_43ca20 : nop
        test eax, eax
        je public_43ca2d
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], edx
        jne public_43ca15
        mov edi, eax
        public_43ca2d : nop
        test edi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_43ca59
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        je public_43ca4d
        mov ecx, edi
        call dword ptr ds : [public_5c6124]
        push edi
        call public_5b7e1d
        add esp, 4
        public_43ca4d : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_43cf80
        public_43ca59 : nop
        push 0x14
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_43ca7f
        mov ecx, eax
        call dword ptr ds : [public_5c612c]
        mov edi, eax
        jmp public_43ca81
        public_43ca7f : nop
        xor edi, edi
        public_43ca81 : nop
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c617c]
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_43caa7
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_43caa7
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_43cab1
        public_43caa7 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_43cab1 : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_43cacb
        mov dword ptr ds : [ecx], eax
        jmp public_43cace
        public_43cacb : nop
        mov dword ptr ds : [esi+4], eax
        public_43cace : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x43c9f0)
    }
}

#undef public_43ca15
#undef public_43ca1e
#undef public_43ca20
#undef public_43ca2d
#undef public_43ca4d
#undef public_43ca59
#undef public_43ca7f
#undef public_43ca81
#undef public_43caa7
#undef public_43cab1
#undef public_43cacb
#undef public_43cace
