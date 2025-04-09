#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469d20);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_46d8e0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb6e8);

#define public_469d51 _public_469d51
#define public_469d93 _public_469d93
#define public_469dac _public_469dac
#define public_469df8 _public_469df8
#define public_469e00 _public_469e00
#define public_469e20 _public_469e20

PROC_DECLARE(0x469d20, internal_469d20, public_469d20);
extern "C" NAKED register_t __cdecl internal_469d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb6e8 @0x469d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb6e8
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
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [eax]
        xor ebp, ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], ebp
        je public_469dac
        public_469d51 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        cmp esi, ebp
        je public_469d93
        mov ebp, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c860
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        push esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        call public_5b7e1d
        add esp, 8
        xor ebp, ebp
        public_469d93 : nop
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ds : [ebx+0x10], ebp
        call public_46c8c0
        mov ebx, dword ptr ss : [esp+0x10]
        cmp ebx, dword ptr ds : [edi+4]
        jne public_469d51
        public_469dac : nop
        mov esi, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edi+0x10], ebp
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_469df8
        mov ecx, eax
        cmp eax, ecx
        jne public_469df8
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, edi
        call public_46d8e0
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_469e20
        public_469df8 : nop
        cmp eax, esi
        je public_469e20
        lea esp, ss:[esp]
        public_469e00 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        jne public_469e00
        public_469e20 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+0x10], ebp
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [edi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x469d20)
    }
}

#undef public_469d51
#undef public_469d93
#undef public_469dac
#undef public_469df8
#undef public_469e00
#undef public_469e20
