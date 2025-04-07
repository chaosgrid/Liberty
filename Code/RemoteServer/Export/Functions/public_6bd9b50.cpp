#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09918);
CLANG_FORWARD_PROC_SYMBOL(public_6c0991e);
CLANG_FORWARD_PROC_SYMBOL(public_6c09924);

#define public_6bd9bd0 _public_6bd9bd0
#define public_6bd9c14 _public_6bd9c14
#define public_6bd9c4f _public_6bd9c4f

PROC_DECLARE(0x6bd9b50, internal_6bd9b50, public_6bd9b50);
extern "C" NAKED register_t __cdecl internal_6bd9b50()
{
    __asm
    {
        sub esp, 0x814
        mov eax, dword ptr ds : [public_6c0b7c8]
        mov edx, dword ptr ds : [public_6c0b7d0]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ds : [public_6c0b7cc]
        mov dword ptr ss : [esp+0x10], ecx
        push edi
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_6c0b7d4]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6c09924
        mov edx, dword ptr ss : [esp+0x824]
        push edx
        call dword ptr ds : [public_6c0b22c]
        mov ebx, dword ptr ds : [public_6c0b1d4]
        mov edi, eax
        push 0x3A
        push edi
        mov dword ptr ss : [esp+0x18], edi
        call ebx
        add esp, 0xC
        test eax, eax
        je public_6bd9c4f
        push esi
        lea esi, ds:[eax+1]
        push 0x2C
        push esi
        mov byte ptr ds : [eax], 0
        add edi, 7
        call ebx
        add esp, 8
        test eax, eax
        je public_6bd9c14
        mov edi, edi
        public_6bd9bd0 : nop
        mov byte ptr ds : [eax], 0
        inc eax
        push eax
        call dword ptr ds : [public_6c0b1fc]
        movzx eax, ax
        push eax
        push edi
        lea ecx, ss:[esp+0x30]
/*FIXUP push offset public_6c0ba60 @0x6bd9be4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0ba60
        push ecx
        call dword ptr ds : [public_6c0b208]
        mov edx, dword ptr ss : [esp+0x840]
        mov ecx, dword ptr ss : [ebp+0xC]
        add esp, 0x14
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_6c0991e
        push 0x2C
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6bd9bd0
        public_6bd9c14 : nop
        push esi
        call dword ptr ds : [public_6c0b1fc]
        xor ecx, ecx
        mov cx, ax
        lea edx, ss:[esp+0x28]
        push ecx
        push edi
/*FIXUP push offset public_6c0ba60 @0x6bd9c26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0ba60
        push edx
        call dword ptr ds : [public_6c0b208]
        mov eax, dword ptr ss : [esp+0x840]
        add esp, 0x14
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        call public_6c0991e
        mov edi, dword ptr ss : [esp+0x10]
        pop esi
        public_6bd9c4f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        call public_6c09918
        push edi
        call dword ptr ds : [public_6c0b20c]
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        add esp, 0x814
        ret 8
        UNREACHABLE_TRAP(0x6bd9b50)
    }
}

#undef public_6bd9bd0
#undef public_6bd9c14
#undef public_6bd9c4f
