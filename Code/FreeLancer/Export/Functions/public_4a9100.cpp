#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcd71);

#define public_4a919c _public_4a919c
#define public_4a91df _public_4a91df
#define public_4a91e1 _public_4a91e1
#define public_4a9227 _public_4a9227

PROC_DECLARE(0x4a9100, internal_4a9100, public_4a9100);
extern "C" NAKED register_t __cdecl internal_4a9100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcd71 @0x4a9102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcd71
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push 0x428
        mov dword ptr ss : [esp+0xC], ecx
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebp
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_4a91df
        push esi
        push edi
        mov ecx, ebp
        call public_59f860
        mov al, byte ptr ss : [esp+0x40]
        mov byte ptr ss : [ebp+0x40C], al
        mov dword ptr ss : [ebp+0x410], ebx
        mov dword ptr ss : [ebp+0x414], ebx
        mov dword ptr ss : [ebp+0x418], ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d4848
        mov dword ptr ss : [ebp], offset public_5d4794
        mov dword ptr ss : [ebp+0x7C], offset public_5d4788
        mov dword ptr ss : [ebp+0x420], ebx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x10
        mov byte ptr ss : [esp+0x34], 2
        mov byte ptr ss : [esp+0x1C], bl
        jb public_4a919c
        mov eax, 0xF
        public_4a919c : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d4848
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x1C], bl
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c62a0]
        push 1
        push 0x41
        push eax
        call public_4c4e00
        add esp, 0x10
        pop edi
        mov dword ptr ds : [public_6721bc], ebp
        pop esi
        jmp public_4a91e1
        public_4a91df : nop
        xor ebp, ebp
        public_4a91e1 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [ebp]
        add ecx, 0xC
        mov dword ptr ss : [ebp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_4a9227
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        pop ebp
        mov eax, ebx
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        public_4a9227 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x4a9100)
    }
}

#undef public_4a919c
#undef public_4a91df
#undef public_4a91e1
#undef public_4a9227
