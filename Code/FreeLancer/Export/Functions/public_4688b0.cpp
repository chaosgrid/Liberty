#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_4688b0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5556b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb519);

#define public_4688e5 _public_4688e5
#define public_46890a _public_46890a
#define public_468928 _public_468928
#define public_46896e _public_46896e
#define public_468996 _public_468996

PROC_DECLARE(0x4688b0, internal_4688b0, public_4688b0);
extern "C" NAKED register_t __cdecl internal_4688b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb519 @0x4688b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb519
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp edi, eax
        mov dword ptr ss : [esp+0x28], 3
        je public_46890a
        public_4688e5 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ebp, ecx
        call public_46bb50
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [ebp+0xC], ebx
        call public_5556b0
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_4688e5
        public_46890a : nop
        mov ecx, esi
        call public_535980
        mov ecx, esi
        call public_4686e0
        mov ecx, esi
        call public_4684e0
        mov eax, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_468996
        public_468928 : nop
        mov edi, dword ptr ss : [ebp+8]
        cmp edi, ebx
        je public_46896e
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        push edi
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        call public_5b7e1d
        add esp, 8
        public_46896e : nop
        mov edi, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        push ebp
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 4
        dec ecx
        mov dword ptr ds : [esi+0x14], ecx
        cmp edi, dword ptr ds : [esi+0x10]
        mov ebp, edi
        jne public_468928
        public_468996 : nop
        mov ebp, dword ptr ds : [esi+0x30]
        lea edi, ds:[esi+0x2C]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 2
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x20]
        add esp, 4
        lea edi, ds:[esi+0x1C]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 1
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0xC]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], bl
        call public_4a2f80
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_4a2f80
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4688b0)
    }
}

#undef public_4688e5
#undef public_46890a
#undef public_468928
#undef public_46896e
#undef public_468996
