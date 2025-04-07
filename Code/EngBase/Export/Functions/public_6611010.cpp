#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611010);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

PROC_DECLARE(0x6611010, internal_6611010, public_6611010);
extern "C" NAKED register_t __cdecl internal_6611010()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov cl, byte ptr ss : [esp+3]
        push ebx
        push esi
        xor ebx, ebx
        push 0x14
        mov byte ptr ds : [public_662acc4], al
        mov byte ptr ds : [public_662acc5], cl
        mov byte ptr ds : [public_662acd0], bl
        call public_66281dc
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], cl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [public_662accc], eax
        mov byte ptr ds : [eax+0x11], cl
        mov edx, dword ptr ds : [public_662accc]
        push 0x14
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [public_662accc]
        mov dword ptr ds : [eax+8], ebx
        mov esi, dword ptr ds : [public_662accc]
        call public_66281dc
        mov dword ptr ds : [eax+4], esi
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [public_662acc8], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_662acc8]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [public_662acd4], ebx
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6611010)
    }
}
