#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a9600);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bce42);

PROC_DECLARE(0x4a9600, internal_4a9600, public_4a9600);
extern "C" NAKED register_t __cdecl internal_4a9600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bce42 @0x4a9602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bce42
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x820]
        push eax
        mov dword ptr ss : [esp+0x1C], 3
        call public_5b7e1d
        xor ebx, ebx
        mov dword ptr ds : [esi+0x820], ebx
        mov dword ptr ds : [esi+0x824], ebx
        mov dword ptr ds : [esi+0x828], ebx
        mov eax, dword ptr ds : [esi+0x810]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x810], ebx
        mov dword ptr ds : [esi+0x814], ebx
        mov dword ptr ds : [esi+0x818], ebx
        mov eax, dword ptr ds : [esi+0x800]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x800], ebx
        mov dword ptr ds : [esi+0x804], ebx
        mov dword ptr ds : [esi+0x808], ebx
        mov eax, dword ptr ds : [esi+0x558]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x558], ebx
        mov dword ptr ds : [esi+0x55C], ebx
        mov dword ptr ds : [esi+0x560], ebx
        mov eax, dword ptr ds : [esi+0x548]
        push eax
        call public_5b7e1d
        lea edi, ds:[esi+0x534]
        mov dword ptr ds : [esi+0x548], ebx
        mov dword ptr ds : [esi+0x54C], ebx
        mov dword ptr ds : [esi+0x550], ebx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        add esp, 0x14
        push eax
        push ecx
        mov ecx, edi
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov edx, dword ptr ds : [esi+0x52C]
        mov eax, dword ptr ds : [esi+0x528]
        lea edi, ds:[esi+0x524]
        add esp, 4
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 2
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov ecx, dword ptr ds : [esi+0x51C]
        mov edx, dword ptr ds : [esi+0x518]
        lea edi, ds:[esi+0x514]
        add esp, 4
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi+0x504]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x18], bl
        call public_4de730
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4a9600)
    }
}
