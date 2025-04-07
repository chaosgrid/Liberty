#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c1b0);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b949b);

#define public_43c1d5 _public_43c1d5
#define public_43c1de _public_43c1de
#define public_43c1e0 _public_43c1e0
#define public_43c1ed _public_43c1ed
#define public_43c20d _public_43c20d
#define public_43c219 _public_43c219
#define public_43c23f _public_43c23f
#define public_43c241 _public_43c241
#define public_43c267 _public_43c267
#define public_43c271 _public_43c271
#define public_43c28b _public_43c28b
#define public_43c28e _public_43c28e

PROC_DECLARE(0x43c1b0, internal_43c1b0, public_43c1b0);
extern "C" NAKED register_t __cdecl internal_43c1b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b949b @0x43c1b2*/
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
        public_43c1d5 : nop
        test eax, eax
        jne public_43c1de
        mov eax, dword ptr ds : [esi+4]
        jmp public_43c1e0
        public_43c1de : nop
        mov eax, dword ptr ds : [eax]
        public_43c1e0 : nop
        test eax, eax
        je public_43c1ed
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], edx
        jne public_43c1d5
        mov edi, eax
        public_43c1ed : nop
        test edi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_43c219
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        je public_43c20d
        mov ecx, edi
        call dword ptr ds : [public_5c6130]
        push edi
        call public_5b7e1d
        add esp, 4
        public_43c20d : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_43cf80
        public_43c219 : nop
        push 0x60
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_43c23f
        mov ecx, eax
        call dword ptr ds : [public_5c6138]
        mov edi, eax
        jmp public_43c241
        public_43c23f : nop
        xor edi, edi
        public_43c241 : nop
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6170]
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_43c267
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_43c267
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_43c271
        public_43c267 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_43c271 : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_43c28b
        mov dword ptr ds : [ecx], eax
        jmp public_43c28e
        public_43c28b : nop
        mov dword ptr ds : [esi+4], eax
        public_43c28e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x43c1b0)
    }
}

#undef public_43c1d5
#undef public_43c1de
#undef public_43c1e0
#undef public_43c1ed
#undef public_43c20d
#undef public_43c219
#undef public_43c23f
#undef public_43c241
#undef public_43c267
#undef public_43c271
#undef public_43c28b
#undef public_43c28e
