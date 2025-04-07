#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d505a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5aef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6368a);

#define public_6d505e0 _public_6d505e0
#define public_6d50634 _public_6d50634
#define public_6d50658 _public_6d50658
#define public_6d506ce _public_6d506ce
#define public_6d506f8 _public_6d506f8
#define public_6d5071a _public_6d5071a

PROC_DECLARE(0x6d505a0, internal_6d505a0, public_6d505a0);
extern "C" NAKED register_t __cdecl internal_6d505a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d6368a @0x6d505a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6368a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax]
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        push edi
        jne public_6d50634
        mov eax, dword ptr ss : [ebp+0x394]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6d5071a
        mov edi, edi
        public_6d505e0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push ebx
        lea ecx, ds:[esi+8]
        call public_6d5aef0
        push esi
        call public_6d5ffb0
        mov ecx, dword ptr ss : [ebp+0x398]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp edi, eax
        mov dword ptr ss : [ebp+0x398], ecx
        jne public_6d505e0
        jmp public_6d5071a
        public_6d50634 : nop
        cmp ecx, 1
        jne public_6d5071a
        sub dword ptr ss : [esp+0x48], 8
        mov ecx, dword ptr ds : [eax+4]
        add eax, 8
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x44], eax
        jle public_6d5071a
        mov dword ptr ss : [esp+0x10], ecx
        public_6d50658 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x48], ebx
        call dword ptr ds : [public_6d64960]
        mov eax, dword ptr ss : [ebp+0x394]
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [esi+4]
        push 0x20
        call public_6d60012
        add esp, 0x10
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_6d506ce
        mov edi, eax
        public_6d506ce : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], ecx
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x3C], 1
        je public_6d506f8
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_6d64894]
        public_6d506f8 : nop
        inc dword ptr ss : [ebp+0x398]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_6d64694]
        dec dword ptr ss : [esp+0x10]
        jne public_6d50658
        public_6d5071a : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6d505a0)
    }
}

#undef public_6d505e0
#undef public_6d50634
#undef public_6d50658
#undef public_6d506ce
#undef public_6d506f8
#undef public_6d5071a
