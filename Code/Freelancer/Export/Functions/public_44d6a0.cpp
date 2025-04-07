#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449cd0);
CLANG_FORWARD_PROC_SYMBOL(public_44d6a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d09);

#define public_44d7b0 _public_44d7b0
#define public_44d7e0 _public_44d7e0
#define public_44d7f2 _public_44d7f2

PROC_DECLARE(0x44d6a0, internal_44d6a0, public_44d6a0);
extern "C" NAKED register_t __cdecl internal_44d6a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9d09 @0x44d6a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d09
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr ds : [eax+0x38]
        push esi
        push edi
        mov esi, ecx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5cc364
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5cc364 @0x44d6d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc364
        push ebx
        call dword ptr ds : [public_5c70e8]
        add esp, 0xC
        test eax, eax
        jne public_44d7f2
        or ecx, 0xFFFFFFFF
        mov edi, offset public_5cc364
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        lea ecx, ss:[esp+0xC]
        add edi, ebx
        call dword ptr ds : [public_5c61d4]
        mov ecx, dword ptr ds : [esi+0xA0]
        push ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x6C], 0
        call dword ptr ds : [public_5c61d0]
        push edi
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6244]
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c6240]
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [edx+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0xA4]
        push eax
        push edi
        call dword ptr ds : [public_5c623c]
        test eax, eax
        je public_44d7b0
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6238]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [edx+0xC]
        lea ecx, ss:[esp+0x30]
        lea edi, ds:[edx+0xC]
        push ecx
        push edi
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x3C]
        push eax
        push edi
        call dword ptr ds : [edx+0x10]
/*FIXUP push offset public_5cc358 @0x44d77d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc358
        push ebx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44d7e0
        mov ecx, dword ptr ds : [esi+0x30]
        call public_449cd0
        test eax, eax
        je public_44d7e0
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        jmp public_44d7e0
        lea ebx, ds:[ebx]
        public_44d7b0 : nop
        mov edx, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [esi+0xA4]
        push edi
        push ebx
        push edx
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x80
/*FIXUP push offset public_5cc32c @0x44d7cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc32c
        mov eax, 0x100001
/*FIXUP push offset public_5cc2a8 @0x44d7d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc2a8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x20
        public_44d7e0 : nop
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call dword ptr ds : [public_5c61cc]
        public_44d7f2 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x44d6a0)
    }
}

#undef public_44d7b0
#undef public_44d7e0
#undef public_44d7f2
