#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c50bb);

#define public_5a47a4 _public_5a47a4
#define public_5a47b7 _public_5a47b7
#define public_5a47e8 _public_5a47e8
#define public_5a47f6 _public_5a47f6

PROC_DECLARE(0x5a46c0, internal_5a46c0, public_5a46c0);
extern "C" NAKED register_t __cdecl internal_5a46c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c50bb @0x5a46c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c50bb
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
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x54], edi
        call public_414280
        mov eax, dword ptr ds : [esi+0xCC]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x38C]
        lea edx, ds:[esi+0x350]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x5C], eax
        add esi, 0xB4
        mov eax, dword ptr ds : [esi]
        mov ecx, 1
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x7C], ecx
        mov byte ptr ss : [esp+0x70], cl
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x70], eax
        call public_4be370
        add esp, 4
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x7C], 2
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x7C], 4
        call public_4144f0
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, eax
        mov byte ptr ss : [esp+0x7C], 3
        mov ebx, eax
        je public_5a47b7
        public_5a47a4 : nop
        push edi
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, ebx
        jne public_5a47a4
        mov esi, dword ptr ss : [esp+0x30]
        public_5a47b7 : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [public_5c71d8]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        je public_5a47e8
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        public_5a47e8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_5a47f6
        push eax
        call esi
        add esp, 4
        public_5a47f6 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x5a46c0)
    }
}

#undef public_5a47a4
#undef public_5a47b7
#undef public_5a47e8
#undef public_5a47f6
