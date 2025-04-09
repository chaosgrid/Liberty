#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446bf0);
CLANG_FORWARD_PROC_SYMBOL(public_446c50);
CLANG_FORWARD_PROC_SYMBOL(public_446ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4487f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9a73);

#define public_4488a6 _public_4488a6
#define public_4488a8 _public_4488a8

PROC_DECLARE(0x4487f0, internal_4487f0, public_4487f0);
extern "C" NAKED register_t __cdecl internal_4487f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9a73 @0x4487f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9a73
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x10]
        call public_446bf0
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ds:[eax+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea esi, ds:[eax+0x10]
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        mov byte ptr ss : [esp+0x48], 1
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [eax+0x3C]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        mov dword ptr ss : [esp+0x64], 0
        call dword ptr ds : [public_5c60cc]
        call public_4c3e10
        push eax
        call dword ptr ds : [public_5c61fc]
        mov dword ptr ss : [esp+0x1C], eax
        call public_4c4060
        push 0xB0
        mov dword ptr ss : [esp+0x60], eax
        call public_5b7e84
        add esp, 0x10
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov byte ptr ss : [esp+0x5C], 1
        je public_4488a6
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_446ef0
        jmp public_4488a8
        public_4488a6 : nop
        xor eax, eax
        public_4488a8 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        call public_446c50
        mov ecx, dword ptr ss : [esp+0x54]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x4487f0)
    }
}

#undef public_4488a6
#undef public_4488a8
