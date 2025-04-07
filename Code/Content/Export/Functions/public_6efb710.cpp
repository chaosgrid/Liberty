#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6efb710);
CLANG_FORWARD_PROC_SYMBOL(public_6efc910);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac7fe);

#define public_6efb750 _public_6efb750
#define public_6efb774 _public_6efb774
#define public_6efb7a0 _public_6efb7a0
#define public_6efb7c4 _public_6efb7c4
#define public_6efb7e7 _public_6efb7e7
#define public_6efb7fc _public_6efb7fc

PROC_DECLARE(0x6efb710, internal_6efb710, public_6efb710);
extern "C" NAKED register_t __cdecl internal_6efb710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac7fe @0x6efb712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac7fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, dword ptr ss : [ebp+0x48]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x44]
        xor ebx, ebx
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6efb774
        lea esp, ss:[esp]
        public_6efb750 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6efc910
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6efb750
        public_6efb774 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov edi, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x28]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6efb7c4
        nop 
        lea esp, ss:[esp]
        public_6efb7a0 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6efb7a0
        public_6efb7c4 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        lea edi, ss:[ebp+0x1C]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x28], bl
        je public_6efb7fc
        public_6efb7e7 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6efb7e7
        public_6efb7fc : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], offset public_6fb43f8
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6efb710)
    }
}

#undef public_6efb750
#undef public_6efb774
#undef public_6efb7a0
#undef public_6efb7c4
#undef public_6efb7e7
#undef public_6efb7fc
