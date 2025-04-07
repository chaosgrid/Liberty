#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403c10);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_414000);
CLANG_FORWARD_PROC_SYMBOL(public_41890c);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418abc);
CLANG_FORWARD_JUMP_SYMBOL(public_419bf2);

#define public_403a55 _public_403a55
#define public_403a57 _public_403a57
#define public_403a7f _public_403a7f
#define public_403a92 _public_403a92
#define public_403abc _public_403abc
#define public_403ac8 _public_403ac8
#define public_403ad4 _public_403ad4

PROC_DECLARE(0x4039a0, internal_4039a0, public_4039a0);
extern "C" NAKED register_t __cdecl internal_4039a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_419bf2 @0x4039a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419bf2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        xor ebx, ebx
        push ebx
        push ebx
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x84]
        push 0x188
        push eax
        call dword ptr ds : [public_41bbe8]
        cmp eax, 0xFFFFFFFF
        jle public_403ad4
        mov cl, byte ptr ss : [esp+0xB]
        push esi
        push edi
        mov byte ptr ss : [esp+0x18], cl
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov edx, dword ptr ss : [ebp+0x60]
        lea esi, ss:[esp+0x18]
        lea ecx, ss:[ebp+0x60]
        push esi
        push eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+4]
        call public_40cdc0
        mov ecx, dword ptr ds : [public_41baf8]
        lea eax, ss:[esp+0x18]
        push eax
        call public_41890c
        cmp eax, ebx
        je public_403a92
        lea edi, ds:[eax+4]
        push edi
        call public_414000
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        jne public_403a7f
        push 0x130
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x30], 1
        je public_403a55
        push ebx
        mov ecx, eax
        call public_413df0
        mov esi, eax
        jmp public_403a57
        public_403a55 : nop
        xor esi, esi
        public_403a57 : nop
        push 0xFFFFFFFF
        push ebx
        push edi
        lea ecx, ds:[esi+0x60]
        mov byte ptr ss : [esp+0x3C], bl
        call public_403c10
        push ebx
        push 0x94
        mov ecx, esi
        call public_418abc
        push 5
        mov ecx, esi
        call public_418ab6
        jmp public_403a92
        public_403a7f : nop
        push 5
        mov ecx, esi
        call public_418ab6
        mov ecx, dword ptr ds : [esi+0x20]
        push ecx
        call dword ptr ds : [public_41bbec]
        public_403a92 : nop
        call public_40ce70
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        pop edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        pop esi
        je public_403ac8
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_403abc
        cmp cl, 0xFF
        je public_403abc
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_403ac8
        public_403abc : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_403ac8 : nop
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        public_403ad4 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x60]
        mov ecx, dword ptr ss : [esp+0x20]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x4039a0)
    }
}

#undef public_403a55
#undef public_403a57
#undef public_403a7f
#undef public_403a92
#undef public_403abc
#undef public_403ac8
#undef public_403ad4
