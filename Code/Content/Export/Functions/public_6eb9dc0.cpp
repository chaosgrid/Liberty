#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8a20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c7c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa5a8);

#define public_6eb9df0 _public_6eb9df0
#define public_6eb9e04 _public_6eb9e04
#define public_6eb9e0e _public_6eb9e0e
#define public_6eb9e23 _public_6eb9e23
#define public_6eb9e71 _public_6eb9e71
#define public_6eb9e7c _public_6eb9e7c
#define public_6eb9ea6 _public_6eb9ea6
#define public_6eb9eaa _public_6eb9eaa
#define public_6eb9eb7 _public_6eb9eb7

PROC_DECLARE(0x6eb9dc0, internal_6eb9dc0, public_6eb9dc0);
extern "C" NAKED register_t __cdecl internal_6eb9dc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faa5a8 @0x6eb9dc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa5a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x2F4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb9e0e
        lea esp, ss:[esp]
        public_6eb9df0 : nop
        cmp dword ptr ds : [esi+0x8C], 0xFFFFFFFF
        jne public_6eb9e04
        lea eax, ds:[esi+8]
        push eax
        mov ecx, edi
        call public_6eb8a20
        public_6eb9e04 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x2F4]
        jne public_6eb9df0
        public_6eb9e0e : nop
        mov eax, dword ptr ds : [edi+0x314]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        je public_6eb9e7c
        push ebp
        mov ebp, dword ptr ds : [public_6fb3648]
        public_6eb9e23 : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [esi+0x94]
        cmp ecx, dword ptr ds : [edx]
        jne public_6eb9e71
        mov dword ptr ss : [esp+0x18], 1
        mov eax, dword ptr ds : [esi+0x90]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        lea ecx, ds:[esi+0xC]
        push eax
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ss : [esp+0x28], edx
        call ebp
        add esp, 4
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        public_6eb9e71 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x314]
        jne public_6eb9e23
        pop ebp
        public_6eb9e7c : nop
        mov al, byte ptr ds : [edi+0x2EC]
        cmp al, bl
        jne public_6eb9eaa
        cmp byte ptr ds : [edi+0x290], bl
        je public_6eb9ea6
        lea esi, ds:[edi+0x21C]
        mov ecx, esi
        call public_6f1c530
        push ebx
        push ebx
        mov ecx, esi
        call public_6f1c7c0
        jmp public_6eb9eb7
        public_6eb9ea6 : nop
        cmp al, bl
        je public_6eb9eb7
        public_6eb9eaa : nop
        mov ecx, edi
        call public_6f1b610
        mov byte ptr ds : [edi+0x2EC], bl
        public_6eb9eb7 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 1
        call public_6eb9af0
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6eb9dc0)
    }
}

#undef public_6eb9df0
#undef public_6eb9e04
#undef public_6eb9e0e
#undef public_6eb9e23
#undef public_6eb9e71
#undef public_6eb9e7c
#undef public_6eb9ea6
#undef public_6eb9eaa
#undef public_6eb9eb7
