#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6620);
CLANG_FORWARD_PROC_SYMBOL(public_6d00e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60eda);

PROC_DECLARE(0x6d00e80, internal_6d00e80, public_6d00e80);
extern "C" NAKED register_t __cdecl internal_6d00e80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60eda @0x6d00e82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60eda
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        call public_6ce6620
        mov al, byte ptr ss : [esp+0xB]
        xor ebx, ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], ebx
        mov byte ptr ds : [esi+0x98], bl
        mov dword ptr ds : [esi+0x9C], ebx
        push 0x28
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0xA0], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xA8], ebx
        lea ecx, ds:[esi+0xC4]
        mov byte ptr ss : [esp+0x18], 1
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov byte ptr ds : [esi+0xB8], bl
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        call dword ptr ds : [public_6d643c4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], offset public_6d6711c
        mov dword ptr ds : [esi+4], offset public_6d6709c
        mov dword ptr ds : [esi+0xC], offset public_6d67094
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d00e80)
    }
}
