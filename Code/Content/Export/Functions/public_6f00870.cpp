#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00870);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f01ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b050);
CLANG_FORWARD_JUMP_SYMBOL(public_6facb19);

#define public_6f008c4 _public_6f008c4
#define public_6f00961 _public_6f00961
#define public_6f0097c _public_6f0097c
#define public_6f009a5 _public_6f009a5
#define public_6f009ab _public_6f009ab
#define public_6f009ad _public_6f009ad
#define public_6f009b2 _public_6f009b2
#define public_6f009c2 _public_6f009c2
#define public_6f009e3 _public_6f009e3
#define public_6f00a04 _public_6f00a04
#define public_6f00a25 _public_6f00a25
#define public_6f00a46 _public_6f00a46
#define public_6f00a5d _public_6f00a5d
#define public_6f00a5f _public_6f00a5f
#define public_6f00a79 _public_6f00a79
#define public_6f00aa1 _public_6f00aa1
#define public_6f00ab7 _public_6f00ab7
#define public_6f00ac1 _public_6f00ac1
#define public_6f00ac9 _public_6f00ac9
#define public_6f00aee _public_6f00aee

PROC_DECLARE(0x6f00870, internal_6f00870, public_6f00870);
extern "C" NAKED register_t __cdecl internal_6f00870()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6facb19 @0x6f00878*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facb19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [ebp+0x21C], 3
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push ecx
        push 0x24
        call public_6f020c0
        xor ebx, ebx
        add esp, 0x10
        cmp eax, ebx
        je public_6f008c4
        push ebx
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f008c4 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        call public_6f487c0
        test eax, 0x3FFFFFFF
        jne public_6f00aee
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov eax, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ss:[esp+0x40]
        push ebp
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [eax+0xC]
        lea ebp, ss:[esp+0x14]
        push ebp
        push eax
        mov dword ptr ss : [esp+0x3C], ebx
        call dword ptr ds : [edx+0x1C]
        test al, al
        je public_6f00aa1
        call dword ptr ds : [public_6fb36a0]
        mov ecx, dword ptr ds : [esi+0x44]
        test al, al
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        push edi
        push ecx
        jne public_6f00961
        push 0x31
        call public_6f020c0
        mov ebp, dword ptr ss : [esp+0x4C]
        jmp public_6f009b2
        public_6f00961 : nop
        push 0x2D
        call public_6f020c0
        mov ebp, dword ptr ss : [esp+0x4C]
        add esp, 0x10
        cmp eax, ebx
        je public_6f0097c
        push ebx
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f0097c : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ss : [esp+0x44]
        push eax
        push ecx
        call public_6f4b050
        mov ecx, dword ptr ds : [esi+0x44]
        add esp, 8
        cmp eax, ebx
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        push edi
        push ecx
        jge public_6f009a5
        push 0x2E
        jmp public_6f009ad
        public_6f009a5 : nop
        jne public_6f009ab
        push 0x2F
        jmp public_6f009ad
        public_6f009ab : nop
        push 0x30
        public_6f009ad : nop
        call public_6f020c0
        public_6f009b2 : nop
        add esp, 0x10
        cmp eax, ebx
        je public_6f009c2
        push ebx
        mov ecx, ebp
        push eax
        call public_6f01ab0
        public_6f009c2 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push ecx
        push 8
        call public_6f020c0
        add esp, 0x10
        cmp eax, ebx
        je public_6f009e3
        push 1
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f009e3 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push ecx
        push 0x32
        call public_6f020c0
        add esp, 0x10
        cmp eax, ebx
        je public_6f00a04
        push 2
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f00a04 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push ecx
        push 0x39
        call public_6f020c0
        add esp, 0x10
        cmp eax, ebx
        je public_6f00a25
        push 2
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f00a25 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edi
        push ecx
        push 0x34
        call public_6f020c0
        add esp, 0x10
        cmp eax, ebx
        je public_6f00a46
        push 3
        push eax
        mov ecx, ebp
        call public_6f01ab0
        public_6f00a46 : nop
        call dword ptr ds : [public_6fb36a0]
        mov ecx, dword ptr ds : [esi+0x44]
        test al, al
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        push edi
        push ecx
        je public_6f00a5d
        push 0x3A
        jmp public_6f00a5f
        public_6f00a5d : nop
        push 0x3B
        public_6f00a5f : nop
        call public_6f020c0
        add esp, 0x10
        cmp eax, ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        je public_6f00a79
        push 3
        push eax
        mov ecx, ebx
        call public_6f01ab0
        public_6f00a79 : nop
        push 6
        push edi
        push esi
        push 0x2C
        push ebx
        call public_6f00b10
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [edx+0xC]
        add esp, 0x14
        add eax, 0x24
        push eax
        lea ecx, ds:[ebx+0x228]
        call dword ptr ds : [public_6fb3088]
        jmp public_6f00ac9
        public_6f00aa1 : nop
        mov eax, dword ptr ss : [esp+0x40]
        dec eax
        je public_6f00ab7
        dec eax
        jne public_6f00ac9
        mov ecx, dword ptr ss : [esp+0x3C]
        push ebx
        push edi
        push esi
        push 0x2A
        push ecx
        jmp public_6f00ac1
        public_6f00ab7 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        push ebx
        push edi
        push esi
        push 0x2B
        push edx
        public_6f00ac1 : nop
        call public_6f00b10
        add esp, 0x14
        public_6f00ac9 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_6f00aee : nop
        push ebx
        push edi
        push esi
        push 0x2C
        push ebp
        call public_6f00b10
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f00870)
    }
}

#undef public_6f008c4
#undef public_6f00961
#undef public_6f0097c
#undef public_6f009a5
#undef public_6f009ab
#undef public_6f009ad
#undef public_6f009b2
#undef public_6f009c2
#undef public_6f009e3
#undef public_6f00a04
#undef public_6f00a25
#undef public_6f00a46
#undef public_6f00a5d
#undef public_6f00a5f
#undef public_6f00a79
#undef public_6f00aa1
#undef public_6f00ab7
#undef public_6f00ac1
#undef public_6f00ac9
#undef public_6f00aee
