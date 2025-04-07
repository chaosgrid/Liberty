#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6edbf60);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab44b);

#define public_6edc020 _public_6edc020
#define public_6edc023 _public_6edc023
#define public_6edc040 _public_6edc040
#define public_6edc054 _public_6edc054
#define public_6edc085 _public_6edc085
#define public_6edc0a3 _public_6edc0a3
#define public_6edc0bb _public_6edc0bb
#define public_6edc0e1 _public_6edc0e1
#define public_6edc101 _public_6edc101

PROC_DECLARE(0x6edbf60, internal_6edbf60, public_6edbf60);
extern "C" NAKED register_t __cdecl internal_6edbf60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab44b @0x6edbf62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab44b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE0
        mov eax, dword ptr ss : [esp+0xF4]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xFC]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0xFC]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x104]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x100], edi
        mov dword ptr ds : [ebx], offset public_6fb6a2c
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        lea edx, ss:[esp+0x28]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x110]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x14
        test eax, 0x7F0000
        je public_6edc040
        cmp esi, edi
        je public_6edc020
        push 0x4000
        mov ecx, esi
        call public_6fa6e30
        test al, al
        jne public_6edc054
        public_6edc020 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edc023 : nop
        mov ecx, dword ptr ss : [esp+0xF0]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xEC
        ret 0xC
        public_6edc040 : nop
        cmp esi, edi
        je public_6edc020
        push 0x800
        mov ecx, esi
        call public_6fa6e30
        test al, al
        je public_6edc020
        public_6edc054 : nop
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edc023
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6edc085
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edc0e1
        public_6edc085 : nop
        push 4
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6edc0bb
        public_6edc0a3 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6edc0a3
        public_6edc0bb : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+4]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6edc0e1 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb6a18
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        mov byte ptr ss : [esp+0x28], 0
        jb public_6edc101
        mov eax, 0x3F
        public_6edc101 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb6a18
        lea edi, ss:[esp+0x28]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x28], 0
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6edc127*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0xB8]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x7C]
        mov ecx, 0x11
        lea edi, ss:[esp+0x78]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6edc023
        UNREACHABLE_TRAP(0x6edbf60)
    }
}

#undef public_6edc020
#undef public_6edc023
#undef public_6edc040
#undef public_6edc054
#undef public_6edc085
#undef public_6edc0a3
#undef public_6edc0bb
#undef public_6edc0e1
#undef public_6edc101
