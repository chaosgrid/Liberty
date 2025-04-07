#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3330);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6093b);

PROC_DECLARE(0x6cf3330, internal_6cf3330, public_6cf3330);
extern "C" NAKED register_t __cdecl internal_6cf3330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6093b @0x6cf3332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6093b
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
        mov dword ptr ds : [esi], offset public_6d662d4
        mov dword ptr ds : [esi+4], offset public_6d66254
        mov dword ptr ds : [esi+0xC], offset public_6d6624c
        xor ebx, ebx
        lea edi, ds:[esi+0x60]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_6d64438]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov byte ptr ds : [esi+0x80], bl
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [edi], offset public_6d6622c
        mov byte ptr ds : [esi+0x94], bl
        mov dword ptr ds : [esi+0x98], ebx
        pop edi
        mov dword ptr ds : [esi+0x90], 0x7F7FFFFF
        mov dword ptr ds : [esi], offset public_6d6606c
        mov dword ptr ds : [esi+4], offset public_6d65fec
        mov dword ptr ds : [esi+0xC], offset public_6d65fe4
        mov dword ptr ds : [esi+0x70], offset public_6d65fd8
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6cf3330)
    }
}
