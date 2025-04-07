#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e760);
CLANG_FORWARD_PROC_SYMBOL(public_418c2a);
CLANG_FORWARD_PROC_SYMBOL(public_4190fe);
CLANG_FORWARD_JUMP_SYMBOL(public_41a300);

PROC_DECLARE(0x40e760, internal_40e760, public_40e760);
extern "C" NAKED register_t __cdecl internal_40e760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a300 @0x40e762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a300
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x9C
        mov dword ptr ss : [esp+0x14], esi
        call public_4190fe
        lea ebx, ds:[esi+0x80]
        xor edi, edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], edi
        call public_418c2a
        mov dword ptr ds : [ebx], offset public_41c820
        lea ebx, ds:[esi+0xC0]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 1
        call public_418c2a
        mov dword ptr ds : [ebx], offset public_41d9d0
        lea ebx, ds:[esi+0x100]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 2
        call public_418c2a
        mov dword ptr ds : [ebx], offset public_41d908
        lea ebx, ds:[esi+0x140]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 3
        call public_418c2a
        mov dword ptr ds : [ebx], offset public_41d9d0
        lea ebx, ds:[esi+0x180]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 4
        call public_418c2a
        mov al, byte ptr ss : [esp+0xF]
        mov cl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [ebx], offset public_41d848
        mov dword ptr ds : [esi+0x1F4], edi
        mov dword ptr ds : [esi+0x1F0], offset public_41d834
        mov dword ptr ds : [esi+0x1FC], edi
        mov dword ptr ds : [esi+0x1F8], offset public_41d820
        mov byte ptr ds : [esi+0x208], al
        mov dword ptr ds : [esi+0x20C], edi
        mov dword ptr ds : [esi+0x210], edi
        mov dword ptr ds : [esi+0x214], edi
        mov dword ptr ds : [esi+0x21C], edi
        mov dword ptr ds : [esi+0x220], edi
        mov dword ptr ds : [esi+0x224], edi
        mov byte ptr ds : [esi+0x218], cl
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi], offset public_41d710
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x40e760)
    }
}
