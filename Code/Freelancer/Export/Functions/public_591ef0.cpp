#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5946f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4a3b);

#define public_591f34 _public_591f34
#define public_591f5e _public_591f5e
#define public_591f70 _public_591f70
#define public_591f94 _public_591f94
#define public_591fc0 _public_591fc0
#define public_591fea _public_591fea
#define public_592034 _public_592034
#define public_592058 _public_592058

PROC_DECLARE(0x591ef0, internal_591ef0, public_591ef0);
extern "C" NAKED register_t __cdecl internal_591ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4a3b @0x591ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4a3b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edi
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 1
        call public_53e430
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_591f5e
        public_591f34 : nop
        mov eax, dword ptr ds : [eax+0xC]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_591f34
        public_591f5e : nop
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp]
        xor ebx, ebx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_591f94
        mov edi, edi
        public_591f70 : nop
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_516f70
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_591f70
        public_591f94 : nop
        lea ecx, ds:[edi+0xC]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x1C], esi
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 2
        call public_53e430
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_591fea
        mov edi, edi
        public_591fc0 : nop
        mov eax, dword ptr ds : [eax+0xC]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_591fc0
        public_591fea : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], bl
        call public_5946f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        add esp, 8
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_592058
        public_592034 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_516f70
        cmp dword ptr ss : [esp+0x10], esi
        jne public_592034
        public_592058 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x591ef0)
    }
}

#undef public_591f34
#undef public_591f5e
#undef public_591f70
#undef public_591f94
#undef public_591fc0
#undef public_591fea
#undef public_592034
#undef public_592058
