#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60698);

#define public_6ceda7b _public_6ceda7b
#define public_6ceda7d _public_6ceda7d
#define public_6cedab8 _public_6cedab8
#define public_6cedb10 _public_6cedb10

PROC_DECLARE(0x6ced9d0, internal_6ced9d0, public_6ced9d0);
extern "C" NAKED register_t __cdecl internal_6ced9d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60698 @0x6ced9d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60698
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        mov al, byte ptr ss : [esp+0x6C]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebp, ecx
        mov esi, dword ptr ss : [ebp+4]
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x7C], edi
        call dword ptr ds : [edx+0x98]
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, edi
        je public_6cedb10
        mov ecx, dword ptr ss : [esp+0x18]
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x7C], edx
        je public_6cedb10
        mov ecx, dword ptr ds : [public_6d6402c]
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+8]
        mov word ptr ss : [esp+0x28], dx
        mov dword ptr ss : [esp+0x2C], edi
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, edi
        je public_6ceda7b
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6ceda7d
        public_6ceda7b : nop
        xor eax, eax
        public_6ceda7d : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_6d64340]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [ebp+4]
        mov cx, word ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        mov word ptr ss : [esp+0x28], cx
        mov dword ptr ss : [esp+0x7C], eax
        je public_6cedb10
        public_6cedab8 : nop
        mov edx, ebx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x38], edx
        lea esi, ds:[ebx+0xC]
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov eax, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [esp+0x64], ecx
        mov edx, dword ptr ds : [ebx+0x38]
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x68], edx
        mov ecx, dword ptr ds : [ecx+0x28]
        push eax
        call public_6d08ef0
        mov eax, dword ptr ss : [esp+0x7C]
        add ebx, 0x44
        cmp ebx, eax
        jne public_6cedab8
        mov ebx, dword ptr ss : [esp+0x14]
        public_6cedb10 : nop
        push ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x70]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 4
        UNREACHABLE_TRAP(0x6ced9d0)
    }
}

#undef public_6ceda7b
#undef public_6ceda7d
#undef public_6cedab8
#undef public_6cedb10
