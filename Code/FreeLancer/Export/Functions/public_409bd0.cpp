#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_409bfc _public_409bfc
#define public_409c0a _public_409c0a
#define public_409c36 _public_409c36
#define public_409c3b _public_409c3b
#define public_409c50 _public_409c50
#define public_409c64 _public_409c64
#define public_409c6f _public_409c6f

PROC_DECLARE(0x409bd0, internal_409bd0, public_409bd0);
extern "C" NAKED register_t __cdecl internal_409bd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push edi
        mov esi, ecx
        push eax
        lea edi, ds:[esi+4]
        push edi
        call public_402500
        fld dword ptr ds : [ebx+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_409bfc
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        public_409bfc : nop
        cmp dword ptr ds : [edi], 0
        jne public_409c0a
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_409c64
        public_409c0a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_409c64
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_409c36
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_409c3b
        public_409c36 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_409c3b : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_409c50
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_409c64
        public_409c50 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_409c64 : nop
        mov eax, dword ptr ds : [ebx+0x54]
        cmp eax, dword ptr ds : [esi+0x54]
        je public_409c6f
        mov dword ptr ds : [esi+0x54], eax
        public_409c6f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x409bd0)
    }
}

#undef public_409bfc
#undef public_409c0a
#undef public_409c36
#undef public_409c3b
#undef public_409c50
#undef public_409c64
#undef public_409c6f
