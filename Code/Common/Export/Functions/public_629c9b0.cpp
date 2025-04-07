#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341c70);

#define public_629c9d0 _public_629c9d0
#define public_629c9f7 _public_629c9f7
#define public_629ca02 _public_629ca02
#define public_629ca0a _public_629ca0a
#define public_629ca33 _public_629ca33

PROC_DECLARE(0x629c9b0, internal_629c9b0, public_629c9b0);
extern "C" NAKED register_t __cdecl internal_629c9b0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x64]
        cmp esi, dword ptr ds : [edi+0x68]
        mov dword ptr ss : [esp+8], 0
        je public_629c9f7
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        lea esp, ss:[esp]
        public_629c9d0 : nop
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+0xC]
        add eax, 0x8C
        push eax
        push ebx
        call public_6341c70
        fadd dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x68]
        add esi, 4
        add esp, 8
        fstp dword ptr ss : [esp+0xC]
        cmp esi, eax
        jne public_629c9d0
        pop ebx
        public_629c9f7 : nop
        mov eax, dword ptr ds : [edi+0x64]
        test eax, eax
        jne public_629ca02
        xor edi, edi
        jmp public_629ca0a
        public_629ca02 : nop
        mov edi, dword ptr ds : [edi+0x68]
        sub edi, eax
        sar edi, 2
        public_629ca0a : nop
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        pop edi
        pop esi
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_629ca33
        fdivr dword ptr ss : [esp]
        add esp, 0xC
        ret 4
        public_629ca33 : nop
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x629c9b0)
    }
}

#undef public_629c9d0
#undef public_629c9f7
#undef public_629ca02
#undef public_629ca0a
#undef public_629ca33
