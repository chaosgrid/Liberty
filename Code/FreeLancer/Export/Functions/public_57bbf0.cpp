#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_57bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_57f1e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3ea2);

#define public_57bc46 _public_57bc46

PROC_DECLARE(0x57bbf0, internal_57bbf0, public_57bbf0);
extern "C" NAKED register_t __cdecl internal_57bbf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3ea2 @0x57bbf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3ea2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, ds:[esi+0x498]
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5e4844
        mov dword ptr ds : [esi+0x7C], offset public_5e4838
        mov dword ptr ss : [ebp], offset public_5e4830
        mov ecx, dword ptr ds : [esi+0x52C]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], 6
        je public_57bc46
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_57bc46 : nop
        mov eax, dword ptr ds : [esi+0x518]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x514]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 5
        call public_57f1e0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x500]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x4FC]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 4
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x4EC]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x4E8]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 3
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x4E0]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x4DC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 2
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x4C8]
        push eax
        call public_5b7e1d
        add esp, 8
        mov ecx, ebp
        mov dword ptr ds : [esi+0x4C8], ebx
        mov dword ptr ds : [esi+0x4CC], ebx
        mov dword ptr ds : [esi+0x4D0], ebx
        mov byte ptr ss : [esp+0x24], bl
        call public_576010
        mov dword ptr ds : [esi], offset public_5e476c
        mov dword ptr ds : [esi+0x7C], offset public_5e4760
        mov dword ptr ss : [esp+0x24], 7
        mov eax, dword ptr ds : [esi+0x48C]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x488]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_579620
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x57bbf0)
    }
}

#undef public_57bc46
