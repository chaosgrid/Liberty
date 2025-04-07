#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f28df0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad3d8);

#define public_6f0ca7c _public_6f0ca7c
#define public_6f0ca90 _public_6f0ca90
#define public_6f0cab2 _public_6f0cab2

PROC_DECLARE(0x6f0ca10, internal_6f0ca10, public_6f0ca10);
extern "C" NAKED register_t __cdecl internal_6f0ca10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad3d8 @0x6f0ca12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad3d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        xor esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        push eax
        push 0x19
        mov dword ptr ss : [esp+0x24], esi
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        push esi
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6f28df0
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+0x114], esi
        mov esi, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f0ca7c
        mov edi, eax
        public_6f0ca7c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f0ca90
        mov dword ptr ds : [eax], ebx
        public_6f0ca90 : nop
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop ebx
        je public_6f0cab2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6f0cab2 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f0ca10)
    }
}

#undef public_6f0ca7c
#undef public_6f0ca90
#undef public_6f0cab2
