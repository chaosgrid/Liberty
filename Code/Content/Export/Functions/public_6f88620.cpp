#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f88620);
CLANG_FORWARD_PROC_SYMBOL(public_6f89230);
CLANG_FORWARD_PROC_SYMBOL(public_6f93d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0e5c);

#define public_6f88657 _public_6f88657
#define public_6f8866c _public_6f8866c
#define public_6f886a0 _public_6f886a0
#define public_6f886d0 _public_6f886d0

PROC_DECLARE(0x6f88620, internal_6f88620, public_6f88620);
extern "C" NAKED register_t __cdecl internal_6f88620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0e5c @0x6f88622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0e5c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+0x44]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x40]
        mov dword ptr ss : [esp+0x20], 0
        je public_6f8866c
        public_6f88657 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f93d10
        cmp esi, ebp
        jne public_6f88657
        public_6f8866c : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        lea ecx, ds:[ebx+0x1C]
        mov dword ptr ss : [esp+0x20], 2
        call public_6f89230
        mov ebp, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], 1
        je public_6f886d0
        nop 
        public_6f886a0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+0x18]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0x18], ecx
        jne public_6f886a0
        public_6f886d0 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0x14], eax
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call dword ptr ds : [public_6fb325c]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f88620)
    }
}

#undef public_6f88657
#undef public_6f8866c
#undef public_6f886a0
#undef public_6f886d0
