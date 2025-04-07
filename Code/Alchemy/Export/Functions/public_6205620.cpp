#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201c70);
CLANG_FORWARD_PROC_SYMBOL(public_6205620);
CLANG_FORWARD_PROC_SYMBOL(public_6205720);
CLANG_FORWARD_PROC_SYMBOL(public_6206850);
CLANG_FORWARD_PROC_SYMBOL(public_62085b0);
CLANG_FORWARD_PROC_SYMBOL(public_62085d0);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);
CLANG_FORWARD_JUMP_SYMBOL(public_62473f8);

#define public_620568c _public_620568c
#define public_6205709 _public_6205709

PROC_DECLARE(0x6205620, internal_6205620, public_6205620);
extern "C" NAKED register_t __cdecl internal_6205620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62473f8 @0x6205622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62473f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        lea eax, ss:[esp+0xC]
        lea edi, ds:[esi+0xE4]
        push eax
        mov ecx, edi
        call public_62085b0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], 0
        push ecx
        mov ecx, edi
        call public_62085d0
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ss : [esp+0xC]
        je public_6205709
        mov al, byte ptr ds : [public_6257919]
        test al, al
        mov eax, dword ptr ds : [esi+0xAC]
        je public_620568c
        push eax
        push 3
        call public_6201c70
        add esp, 8
        jmp public_6205709
        public_620568c : nop
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xD0]
        mov eax, dword ptr ds : [esi+0xAC]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xD4]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push 4
        mov ecx, offset public_625792c
        call public_6240f50
        test al, al
        je public_6205709
        mov ecx, esi
        call public_6205720
        mov ecx, offset public_625792c
        call public_6241070
        test eax, eax
        je public_6205709
        mov eax, dword ptr ds : [public_62578e8]
        mov ecx, esi
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        call public_6206850
        mov ecx, offset public_625792c
        call public_6241180
        public_6205709 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6205620)
    }
}

#undef public_620568c
#undef public_6205709
