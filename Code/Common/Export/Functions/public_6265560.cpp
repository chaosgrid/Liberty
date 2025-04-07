#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264a40);
CLANG_FORWARD_PROC_SYMBOL(public_6265560);
CLANG_FORWARD_PROC_SYMBOL(public_626a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_626aa60);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639259e);

#define public_6265595 _public_6265595
#define public_62655ac _public_62655ac
#define public_62655b3 _public_62655b3
#define public_62655c0 _public_62655c0
#define public_62655e4 _public_62655e4

PROC_DECLARE(0x6265560, internal_6265560, public_6265560);
extern "C" NAKED register_t __cdecl internal_6265560()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639259e @0x6265562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639259e
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
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], 2
        je public_62655b3
        public_6265595 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_62655ac
        mov ecx, edi
        call public_6264a40
        push edi
        call public_6391d5a
        add esp, 4
        public_62655ac : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+4]
        jne public_6265595
        public_62655b3 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_62655e4
        public_62655c0 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_6271cc0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_62655c0
        public_62655e4 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[ebp+0xC]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_626a8b0
        mov eax, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [eax]
        lea edi, ss:[ebp+0x20]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call public_626aa60
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 1
        call public_626aa60
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6391d5a
        add esp, 8
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], bl
        call public_626a8b0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_62728a0
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6265560)
    }
}

#undef public_6265595
#undef public_62655ac
#undef public_62655b3
#undef public_62655c0
#undef public_62655e4
