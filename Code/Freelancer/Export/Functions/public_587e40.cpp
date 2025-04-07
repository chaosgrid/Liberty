#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f150);
CLANG_FORWARD_PROC_SYMBOL(public_587e40);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4458);

PROC_DECLARE(0x587e40, internal_587e40, public_587e40);
extern "C" NAKED register_t __cdecl internal_587e40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4458 @0x587e42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4458
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        call public_59f860
        xor ebx, ebx
        lea ecx, ds:[esi+0x350]
        mov dword ptr ss : [esp+0x20], ebx
        call public_40f150
        mov byte ptr ds : [esi+0x413], bl
        mov byte ptr ds : [esi+0x412], bl
        mov byte ptr ds : [esi+0x411], bl
        mov byte ptr ds : [esi+0x410], bl
        mov byte ptr ds : [esi+0x417], bl
        mov byte ptr ds : [esi+0x416], bl
        mov byte ptr ds : [esi+0x415], bl
        mov byte ptr ds : [esi+0x414], bl
        mov ecx, ebx
        lea eax, ds:[esi+0x338]
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x344], bl
        mov byte ptr ds : [esi+0x345], bl
        mov byte ptr ds : [esi+0x346], bl
        mov byte ptr ds : [esi+0x347], bl
        mov dword ptr ds : [esi+0x418], ebx
        mov byte ptr ds : [esi+0x348], bl
        mov byte ptr ds : [esi+0x34B], bl
        mov dword ptr ds : [esi+0x32C], ebx
        mov dword ptr ds : [esi+0x330], ebx
        mov dword ptr ds : [esi+0x334], ebx
        mov byte ptr ds : [esi+0x349], bl
        mov dword ptr ds : [esi+0x41C], ebx
        mov byte ptr ds : [esi+0x34C], bl
        mov dword ptr ds : [esi], offset public_5e4d7c
        mov dword ptr ds : [esi+0x7C], offset public_5e4d70
        mov byte ptr ds : [esi+0x34A], 1
        mov eax, esi
        pop esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x587e40)
    }
}
