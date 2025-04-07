#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3730);
CLANG_FORWARD_PROC_SYMBOL(public_65c41c0);
CLANG_FORWARD_PROC_SYMBOL(public_65c4300);
CLANG_FORWARD_PROC_SYMBOL(public_65c4310);
CLANG_FORWARD_PROC_SYMBOL(public_65c4320);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6e7b);

#define public_65c3a3d _public_65c3a3d

PROC_DECLARE(0x65c3a00, internal_65c3a00, public_65c3a00);
extern "C" NAKED register_t __cdecl internal_65c3a00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6e7b @0x65c3a02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6e7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov ebx, ecx
        call public_65c6a66
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_65c3a3d
        mov ecx, eax
        call public_65c41c0
        mov ebp, eax
        public_65c3a3d : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x28]
        push esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x14], eax
        call dword ptr ds : [public_65c7084]
        mov ecx, esi
        mov edx, ecx
        mov dword ptr ss : [ebp+0xC], esi
        mov esi, dword ptr ss : [esp+0x28]
        shr ecx, 2
        mov dword ptr ss : [ebp+8], eax
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        lea esi, ds:[ebx+0x10]
        add esp, 4
        mov ecx, esi
        call public_65c4300
        mov edx, dword ptr ds : [ebx+0x3C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [ebx+0x40]
        add edx, eax
        inc ecx
        mov dword ptr ds : [ebx+0x40], ecx
        push ebp
        mov ecx, esi
        mov dword ptr ds : [ebx+0x3C], edx
        call public_65c4320
        mov ecx, esi
        call public_65c4310
        mov ecx, ebx
        call public_65c3730
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x65c3a00)
    }
}

#undef public_65c3a3d
