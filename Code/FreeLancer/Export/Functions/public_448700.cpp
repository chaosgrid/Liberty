#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_443770);
CLANG_FORWARD_PROC_SYMBOL(public_4437d0);
CLANG_FORWARD_PROC_SYMBOL(public_448700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9a53);

#define public_4487bb _public_4487bb
#define public_4487bd _public_4487bd

PROC_DECLARE(0x448700, internal_448700, public_448700);
extern "C" NAKED register_t __cdecl internal_448700()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9a53 @0x448702*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9a53
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0xC]
        call public_443770
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ds:[eax+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ecx
        lea esi, ds:[eax+0x10]
        mov ecx, 9
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov edi, dword ptr ds : [public_5c6088]
        mov byte ptr ss : [esp+0x40], 1
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x48], edx
        call edi
        mov esi, eax
        mov eax, dword ptr ds : [esi+0x90]
        push eax
        call edi
        mov ecx, dword ptr ds : [eax+0x54]
        push ecx
        call dword ptr ds : [public_5c61fc]
        add esi, 0x94
        push 0x64
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x58], esi
        call public_5b7e84
        add esp, 0x10
        mov dword ptr ss : [esp+0x5C], eax
        test eax, eax
        mov byte ptr ss : [esp+0x54], 1
        je public_4487bb
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0xC]
        push edx
        push ecx
        mov ecx, eax
        call public_4437d0
        jmp public_4487bd
        public_4487bb : nop
        xor eax, eax
        public_4487bd : nop
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_401e90
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x448700)
    }
}

#undef public_4487bb
#undef public_4487bd
