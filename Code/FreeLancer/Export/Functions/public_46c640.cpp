#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c830);
CLANG_FORWARD_PROC_SYMBOL(public_46c640);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_57bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb95e);

#define public_46c750 _public_46c750
#define public_46c774 _public_46c774
#define public_46c7c1 _public_46c7c1

PROC_DECLARE(0x46c640, internal_46c640, public_46c640);
extern "C" NAKED register_t __cdecl internal_46c640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb95e @0x46c642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb95e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x5A0]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x59C]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], 5
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x594]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x590]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], 4
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x588]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x584]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], 3
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x57C]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x578]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], 2
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ds : [esi+0x570]
        mov eax, dword ptr ds : [edi]
        lea ebp, ds:[esi+0x56C]
        add esp, 4
        mov byte ptr ss : [esp+0x2C], 1
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_46c774
        mov edi, edi
        public_46c750 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        call public_46d680
        cmp dword ptr ss : [esp+0x10], edi
        jne public_46c750
        public_46c774 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        lea edi, ds:[esi+0x53C]
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        add esp, 4
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ds : [edi], offset public_5cef80
        cmp byte ptr ds : [edi+0x15], bl
        mov byte ptr ss : [esp+0x2C], 6
        je public_46c7c1
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov edx, dword ptr ds : [edi+0x18]
        push edx
        call public_41c830
        add esp, 4
        mov byte ptr ds : [edi+0x15], bl
        public_46c7c1 : nop
        push 1
        lea ecx, ds:[edi+4]
        mov byte ptr ss : [esp+0x30], bl
        call dword ptr ds : [public_5c7084]
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_57bbf0
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x46c640)
    }
}

#undef public_46c750
#undef public_46c774
#undef public_46c7c1
