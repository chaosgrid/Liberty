#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44eab0);
CLANG_FORWARD_PROC_SYMBOL(public_44eb20);
CLANG_FORWARD_PROC_SYMBOL(public_44ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_44ece0);
CLANG_FORWARD_PROC_SYMBOL(public_454820);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9f1b);

#define public_454863 _public_454863
#define public_454878 _public_454878
#define public_45489e _public_45489e
#define public_4548a0 _public_4548a0

PROC_DECLARE(0x454820, internal_454820, public_454820);
extern "C" NAKED register_t __cdecl internal_454820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9f1b @0x454822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9f1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx], 0
        push esi
        push edi
        je public_454878
        lea esi, ds:[ebx+4]
        push esi
        call dword ptr ds : [public_5c6284]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        test edi, edi
        je public_454863
        mov ecx, edi
        call public_44eb20
        push edi
        call public_5b7e1d
        add esp, 4
        public_454863 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        mov dword ptr ds : [ebx], 0
        call dword ptr ds : [public_5c61e0]
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_454878 : nop
        push 0xB4
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_45489e
        mov ecx, eax
        call public_44eab0
        jmp public_4548a0
        public_45489e : nop
        xor eax, eax
        public_4548a0 : nop
        mov ecx, eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [ebx], eax
        call public_44ebf0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [ebx]
        push edx
        call public_44ece0
        mov edi, dword ptr ds : [ebx]
        lea esi, ds:[ebx+0xC]
        mov ecx, 0xC
        rep movsd
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x454820)
    }
}

#undef public_454863
#undef public_454878
#undef public_45489e
#undef public_4548a0
