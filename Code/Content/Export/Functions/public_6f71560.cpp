#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6fafec9);

#define public_6f715ea _public_6f715ea
#define public_6f7160c _public_6f7160c
#define public_6f7163c _public_6f7163c

PROC_DECLARE(0x6f71560, internal_6f71560, public_6f71560);
extern "C" NAKED register_t __cdecl internal_6f71560()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafec9 @0x6f71568*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafec9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax], 1
        jne public_6f7163c
        mov esi, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6f715ea
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6f715ea
        mov ecx, dword ptr ds : [public_6fb311c]
        mov edx, dword ptr ds : [ecx]
        push edx
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6fb3118]
        mov eax, dword ptr ds : [edi+0x40]
        push 0
        push 1
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x40], 0
        call dword ptr ds : [public_6fb3114]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        public_6f715ea : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 3
        jne public_6f7163c
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [eax+0x10]
        cmp ebx, 0xFFFFFFFF
        je public_6f7160c
        mov ecx, edi
        call dword ptr ds : [public_6fb3124]
        cmp eax, ebx
        jne public_6f7163c
        public_6f7160c : nop
        mov edx, dword ptr ds : [public_6fb311c]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f7163c
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        public_6f7163c : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x6f71560)
    }
}

#undef public_6f715ea
#undef public_6f7160c
#undef public_6f7163c
