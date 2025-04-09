#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55a560);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c175b);

#define public_55d5b1 _public_55d5b1
#define public_55d5b3 _public_55d5b3
#define public_55d5f3 _public_55d5f3

PROC_DECLARE(0x55d550, internal_55d550, public_55d550);
extern "C" NAKED register_t __cdecl internal_55d550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c175b @0x55d552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c175b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x380
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_55d5b1
        mov ecx, esi
        call public_55a560
        lea eax, ds:[esi+0x378]
        mov dword ptr ds : [esi+0x37C], eax
        mov dword ptr ds : [esi], offset public_5e1834
        mov dword ptr ds : [esi+0x7C], offset public_5e1828
        mov dword ptr ds : [eax], 0
        jmp public_55d5b3
        public_55d5b1 : nop
        xor esi, esi
        public_55d5b3 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_55d5f3
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_55d5f3 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x55d550)
    }
}

#undef public_55d5b1
#undef public_55d5b3
#undef public_55d5f3
