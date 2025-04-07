#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

PROC_DECLARE(0x6c2e5a0, internal_6c2e5a0, public_6c2e5a0);
extern "C" NAKED register_t __cdecl internal_6c2e5a0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov cl, byte ptr ss : [esp+3]
        push ebx
        push esi
        xor ebx, ebx
        push 0x18
        mov byte ptr ds : [public_6c37d28], al
        mov byte ptr ds : [public_6c37d29], cl
        mov byte ptr ds : [public_6c37d34], bl
        call public_6c34eac
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [public_6c37d30], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [public_6c37d30]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [public_6c37d30]
        mov dword ptr ds : [eax+8], ebx
        mov esi, dword ptr ds : [public_6c37d30]
        push 0x18
        call public_6c34eac
        mov dword ptr ds : [eax+4], esi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [public_6c37d2c], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6c37d2c]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        pop esi
        mov dword ptr ds : [public_6c37d38], ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c2e5a0)
    }
}
