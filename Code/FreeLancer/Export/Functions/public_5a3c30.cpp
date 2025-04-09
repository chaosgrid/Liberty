#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5083);

#define public_5a3d20 _public_5a3d20
#define public_5a3d33 _public_5a3d33
#define public_5a3d64 _public_5a3d64
#define public_5a3d72 _public_5a3d72

PROC_DECLARE(0x5a3c30, internal_5a3c30, public_5a3c30);
extern "C" NAKED register_t __cdecl internal_5a3c30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5083 @0x5a3c32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5083
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x7C], edi
        call public_4144b0
        mov bl, 1
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x7C], bl
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x54], edi
        call public_414280
        mov eax, dword ptr ds : [esi+0xCC]
        lea ecx, ds:[esi+0x350]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x364]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x58], edx
        add esi, 0xB4
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x64], edx
        mov dword ptr ss : [esp+0x60], ecx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x80], 2
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], ecx
        mov byte ptr ss : [esp+0x74], bl
        call public_4be370
        add esp, 4
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x7C], 3
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x7C], 5
        call public_4144f0
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, eax
        mov byte ptr ss : [esp+0x7C], 4
        mov ebx, eax
        je public_5a3d33
        lea esp, ss:[esp]
        public_5a3d20 : nop
        push edi
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, ebx
        jne public_5a3d20
        mov esi, dword ptr ss : [esp+0x30]
        public_5a3d33 : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [public_5c71d8]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        je public_5a3d64
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        public_5a3d64 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_5a3d72
        push eax
        call esi
        add esp, 4
        public_5a3d72 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x5a3c30)
    }
}

#undef public_5a3d20
#undef public_5a3d33
#undef public_5a3d64
#undef public_5a3d72
