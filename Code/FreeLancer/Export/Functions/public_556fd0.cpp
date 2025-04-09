#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ca0);
CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_410f60);
CLANG_FORWARD_PROC_SYMBOL(public_411120);
CLANG_FORWARD_PROC_SYMBOL(public_556fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c14de);

#define public_557009 _public_557009
#define public_55700b _public_55700b
#define public_557036 _public_557036
#define public_557038 _public_557038
#define public_557077 _public_557077
#define public_5570a7 _public_5570a7

PROC_DECLARE(0x556fd0, internal_556fd0, public_556fd0);
extern "C" NAKED register_t __cdecl internal_556fd0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c14de @0x556fd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c14de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA8
        push ebp
        push esi
        push 8
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_557009
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov ebp, eax
        jmp public_55700b
        public_557009 : nop
        xor ebp, ebp
        public_55700b : nop
        push 0xC8
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov dword ptr ss : [esp+0xB8], 0
        je public_557036
        push 0xFFFFFFFF
        mov ecx, eax
        call public_410ca0
        jmp public_557038
        public_557036 : nop
        xor eax, eax
        public_557038 : nop
        mov esi, dword ptr ss : [esp+0xC4]
        push edi
        mov dword ptr ss : [ebp], eax
        mov ecx, 0x1A
        lea edi, ss:[esp+0x4C]
        rep movsd
        cmp dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0xBC], 0xFFFFFFFF
        pop edi
        jne public_557077
        mov dword ptr ss : [esp+0xA8], 0x40490FDB
        mov dword ptr ss : [esp+0xAC], 0x40490FDB
        public_557077 : nop
        mov ecx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x48]
        push eax
        call public_411120
        mov esi, dword ptr ss : [esp+0xC0]
        mov ecx, dword ptr ss : [ebp]
        push esi
        call public_410ef0
        mov eax, dword ptr ds : [public_6799bc]
        test eax, eax
        jne public_5570a7
        call public_5b73e0
        mov dword ptr ds : [public_6799bc], eax
        public_5570a7 : nop
        mov edx, dword ptr ss : [esp+0xC8]
        mov ecx, dword ptr ds : [eax]
        push edx
        add esi, 0xC
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+0xC], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_5c6280]
        mov ecx, dword ptr ss : [ebp]
        add esp, 8
        lea edx, ss:[esp+0x24]
        push edx
        call public_410f60
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov cl, byte ptr ss : [esp+0xCC]
        mov byte ptr ss : [ebp+4], cl
        mov ecx, dword ptr ss : [esp+0xB0]
        pop esi
        mov eax, ebp
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xB4
        ret 
        UNREACHABLE_TRAP(0x556fd0)
    }
}

#undef public_557009
#undef public_55700b
#undef public_557036
#undef public_557038
#undef public_557077
#undef public_5570a7
