#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3ce0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6099b);

PROC_DECLARE(0x6cf3ce0, internal_6cf3ce0, public_6cf3ce0);
extern "C" NAKED register_t __cdecl internal_6cf3ce0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6099b @0x6cf3ce2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6099b
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
        call public_6cee360
        mov dword ptr ds : [esi], offset public_6d667ac
        mov dword ptr ds : [esi+4], offset public_6d6672c
        mov dword ptr ds : [esi+0xC], offset public_6d66720
        xor ebx, ebx
        lea edi, ds:[esi+0x60]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_6d64438]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], offset public_6d66700
        mov dword ptr ds : [esi+0x74], ebx
        mov byte ptr ds : [esi+0x78], bl
        mov dword ptr ds : [esi+0x7C], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6d6653c
        mov dword ptr ds : [esi+4], offset public_6d664bc
        mov dword ptr ds : [esi+0xC], offset public_6d664b0
        mov dword ptr ds : [esi+0x70], offset public_6d664a4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6cf3ce0)
    }
}
