#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7140);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff24);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60b0b);

#define public_6cf7198 _public_6cf7198
#define public_6cf719a _public_6cf719a
#define public_6cf71cc _public_6cf71cc
#define public_6cf71e0 _public_6cf71e0
#define public_6cf7217 _public_6cf7217
#define public_6cf723a _public_6cf723a

PROC_DECLARE(0x6cf7140, internal_6cf7140, public_6cf7140);
extern "C" NAKED register_t __cdecl internal_6cf7140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60b0b @0x6cf7142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60b0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0x2F8
        mov dword ptr ss : [esp+0x14], edi
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x30], 0
        je public_6cf7198
        lea ecx, ds:[esi+8]
        call public_6d5ff24
        mov dword ptr ds : [esi], 0
        mov byte ptr ds : [esi+0x2F0], 0
        jmp public_6cf719a
        public_6cf7198 : nop
        xor esi, esi
        public_6cf719a : nop
        mov ebp, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov dword ptr ds : [esi], ebp
        call dword ptr ds : [public_6d641c0]
        mov byte ptr ds : [esi+0x2F0], al
        mov edi, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6cf71cc
        mov ebx, eax
        public_6cf71cc : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6cf71e0
        mov dword ptr ds : [eax], esi
        public_6cf71e0 : nop
        mov edi, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [edi+0x10]
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf723a
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov ebx, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [public_6d8d7f8]
        test eax, eax
        jne public_6cf7217
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d7f8], eax
        public_6cf7217 : nop
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [edi+0x30]
        push edx
        lea edx, ss:[esp+0x20]
        lea ecx, ds:[esi+8]
        push edx
        push ebx
        call dword ptr ds : [eax+4]
        public_6cf723a : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6cf7140)
    }
}

#undef public_6cf7198
#undef public_6cf719a
#undef public_6cf71cc
#undef public_6cf71e0
#undef public_6cf7217
#undef public_6cf723a
