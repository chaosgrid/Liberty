#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44da40);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d09);

#define public_44db44 _public_44db44
#define public_44db6d _public_44db6d
#define public_44db7f _public_44db7f

PROC_DECLARE(0x44da40, internal_44da40, public_44da40);
extern "C" NAKED register_t __cdecl internal_44da40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9d09 @0x44da48*/
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
        mov edi, offset public_5cc3f0
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5cc3f0 @0x44da74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc3f0
        push ebx
        call dword ptr ds : [public_5c70e8]
        add esp, 0xC
        test eax, eax
        jne public_44db7f
        or ecx, 0xFFFFFFFF
        mov edi, offset public_5cc3f0
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
        call dword ptr ds : [public_5c624c]
        test eax, eax
        je public_44db44
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6238]
        mov edi, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x30]
        lea esi, ds:[edi+0xC]
        push eax
        push esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x3C]
        push edx
        push esi
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edi+0x10]
        lea esi, ds:[edi+0x10]
        mov edi, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [edi]
        push ecx
        push esi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        call dword ptr ds : [ecx+0x1C]
        jmp public_44db6d
        public_44db44 : nop
        mov ecx, dword ptr ds : [esi+0xA0]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push ebx
        push edi
        push 0x121
/*FIXUP push offset public_5cc32c @0x44db58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc32c
        mov eax, 0x100001
/*FIXUP push offset public_5cc370 @0x44db62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc370
        push eax
        call dword ptr ds : [edx]
        add esp, 0x1C
        public_44db6d : nop
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call dword ptr ds : [public_5c61cc]
        public_44db7f : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 0xC
        UNREACHABLE_TRAP(0x44da40)
    }
}

#undef public_44db44
#undef public_44db6d
#undef public_44db7f
