#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26150);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad3f8);

#define public_6f0cb51 _public_6f0cb51
#define public_6f0cbaa _public_6f0cbaa

PROC_DECLARE(0x6f0cad0, internal_6f0cad0, public_6f0cad0);
extern "C" NAKED register_t __cdecl internal_6f0cad0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad3f8 @0x6f0cad2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad3f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        xor esi, esi
        push edi
        mov ebx, ecx
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        push eax
        push 3
        mov dword ptr ss : [esp+0x28], esi
        call public_6f24870
        mov ecx, dword ptr ds : [public_6fb80fc]
        add esp, 8
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push 0x42480000
        lea edx, ss:[esp+0x30]
        push edx
        call public_6f26150
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+0x114], esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        mov ecx, ebp
        jne public_6f0cb51
        mov ecx, eax
        public_6f0cb51 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        mov ebp, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ebp
        mov dword ptr ds : [edi+8], ebp
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        call dword ptr ds : [public_6fb34c0]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        test ecx, ecx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        pop ebx
        je public_6f0cbaa
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f0cbaa : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6f0cad0)
    }
}

#undef public_6f0cb51
#undef public_6f0cbaa
