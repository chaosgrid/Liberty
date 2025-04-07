#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a4410);
CLANG_FORWARD_PROC_SYMBOL(public_62a4660);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393dab);

#define public_62a4453 _public_62a4453
#define public_62a4455 _public_62a4455
#define public_62a4479 _public_62a4479

PROC_DECLARE(0x62a4410, internal_62a4410, public_62a4410);
extern "C" NAKED register_t __cdecl internal_62a4410()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393dab @0x62a4412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393dab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0x80
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_62a4453
        mov ecx, eax
        call public_62a4660
        jmp public_62a4455
        public_62a4453 : nop
        xor eax, eax
        public_62a4455 : nop
        mov edi, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC], eax
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_62a4479
        mov ebx, eax
        public_62a4479 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_630cd00
        mov edx, dword ptr ds : [esi+0x10]
        add esp, 8
        inc edx
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+8]
        inc dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x40], edx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62a4410)
    }
}

#undef public_62a4453
#undef public_62a4455
#undef public_62a4479
