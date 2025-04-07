#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7260);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33500);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faead5);

PROC_DECLARE(0x6f33500, internal_6f33500, public_6f33500);
extern "C" NAKED register_t __cdecl internal_6f33500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faead5 @0x6f33502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faead5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        call public_6eb7260
        lea eax, ss:[esp+0xF]
        xor ebx, ebx
        or edi, 0xFFFFFFFF
        lea ecx, ds:[esi+0x50]
        push eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        call public_6ead6a0
        lea ecx, ds:[esi+0x60]
        mov byte ptr ss : [esp+0x1C], 1
        call public_6f1d4c0
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ds : [esi+0x78], bl
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi+0x80], cl
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], edi
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ds : [esi+0xFC], ebx
        lea ecx, ds:[esi+0x100]
        mov byte ptr ss : [esp+0x1C], 4
        call dword ptr ds : [public_6fb3030]
        mov edx, dword ptr ds : [public_6fb956c]
        mov al, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [esi+0x104], edx
        mov dword ptr ds : [esi+0x108], 0x41C00000
        mov dword ptr ds : [esi+0x10C], 0x43FA0000
        mov dword ptr ds : [esi+0x110], edi
        mov dword ptr ds : [esi+0x114], ebx
        push 0xC
        mov byte ptr ds : [esi+0x118], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x11C], eax
        mov dword ptr ds : [esi+0x120], ebx
        lea ecx, ds:[esi+0x124]
        mov byte ptr ss : [esp+0x1C], 5
        call dword ptr ds : [public_6fb309c]
        mov dword ptr ds : [esi+0x4FC], 2
        mov dword ptr ds : [esi+0x500], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0x90], eax
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0x98], ebx
        mov dword ptr ds : [esi+0x94], ebx
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f33500)
    }
}
