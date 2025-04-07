#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

PROC_DECLARE(0x6da16c0, internal_6da16c0, public_6da16c0);
extern "C" NAKED register_t __cdecl internal_6da16c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], cl
        mov al, byte ptr ds : [edx]
        push edi
        xor ebx, ebx
        push 0x50
        mov byte ptr ds : [esi+1], al
        mov byte ptr ds : [esi+0xC], bl
        call public_6db1f8a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x49], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x48], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x49], cl
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x50
        call public_6db1f8a
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x48], bl
        mov byte ptr ds : [eax+0x49], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6da16c0)
    }
}
