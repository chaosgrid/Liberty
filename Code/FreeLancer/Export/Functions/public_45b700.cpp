#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b700);
CLANG_FORWARD_PROC_SYMBOL(public_55dec0);
CLANG_FORWARD_PROC_SYMBOL(public_55e340);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba314);

PROC_DECLARE(0x45b700, internal_45b700, public_45b700);
extern "C" NAKED register_t __cdecl internal_45b700()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba314 @0x45b702*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba314
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
        mov dword ptr ss : [esp+0x10], esi
        call public_59f860
        xor ebx, ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        lea edi, ds:[esi+0x330]
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 1
        call public_55dec0
        lea ebp, ds:[esi+0x350]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x28], 2
        call public_55e340
        mov ecx, ebx
        lea eax, ds:[esi+0x518]
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [esi+0x3A8], ebx
        mov dword ptr ds : [esi+0x50C], ebx
        mov dword ptr ds : [esi+0x3AC], ebx
        mov dword ptr ds : [esi+0x510], ebx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x508], ebx
        mov dword ptr ds : [esi+0x524], ebx
        mov byte ptr ds : [esi+0x52C], bl
        mov byte ptr ds : [esi+0x52D], bl
        mov byte ptr ds : [esi+0x52E], bl
        mov dword ptr ds : [esi], offset public_5cea44
        mov dword ptr ds : [esi+0x7C], offset public_5cea38
        mov dword ptr ds : [esi+0x32C], offset public_5cea30
        mov dword ptr ds : [edi], offset public_5cea24
        mov dword ptr ss : [ebp], offset public_5cea18
        pop edi
        mov dword ptr ds : [public_66d3f0], esi
        mov byte ptr ds : [esi+0x52F], bl
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x45b700)
    }
}
