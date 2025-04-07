#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c630);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b949b);

#define public_43c655 _public_43c655
#define public_43c65e _public_43c65e
#define public_43c660 _public_43c660
#define public_43c66d _public_43c66d
#define public_43c68d _public_43c68d
#define public_43c699 _public_43c699
#define public_43c6bf _public_43c6bf
#define public_43c6c1 _public_43c6c1
#define public_43c6e7 _public_43c6e7
#define public_43c6f1 _public_43c6f1
#define public_43c70b _public_43c70b
#define public_43c70e _public_43c70e

PROC_DECLARE(0x43c630, internal_43c630, public_43c630);
extern "C" NAKED register_t __cdecl internal_43c630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b949b @0x43c632*/
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
        public_43c655 : nop
        test eax, eax
        jne public_43c65e
        mov eax, dword ptr ds : [esi+4]
        jmp public_43c660
        public_43c65e : nop
        mov eax, dword ptr ds : [eax]
        public_43c660 : nop
        test eax, eax
        je public_43c66d
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], edx
        jne public_43c655
        mov edi, eax
        public_43c66d : nop
        test edi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_43c699
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        je public_43c68d
        mov ecx, edi
        call dword ptr ds : [public_5c6104]
        push edi
        call public_5b7e1d
        add esp, 4
        public_43c68d : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_43cf80
        public_43c699 : nop
        push 0x64
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_43c6bf
        mov ecx, eax
        call dword ptr ds : [public_5c610c]
        mov edi, eax
        jmp public_43c6c1
        public_43c6bf : nop
        xor edi, edi
        public_43c6c1 : nop
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c60ec]
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_43c6e7
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_43c6e7
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_43c6f1
        public_43c6e7 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_43c6f1 : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_43c70b
        mov dword ptr ds : [ecx], eax
        jmp public_43c70e
        public_43c70b : nop
        mov dword ptr ds : [esi+4], eax
        public_43c70e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x43c630)
    }
}

#undef public_43c655
#undef public_43c65e
#undef public_43c660
#undef public_43c66d
#undef public_43c68d
#undef public_43c699
#undef public_43c6bf
#undef public_43c6c1
#undef public_43c6e7
#undef public_43c6f1
#undef public_43c70b
#undef public_43c70e
