#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2570);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

PROC_DECLARE(0x65f2570, internal_65f2570, public_65f2570);
extern "C" NAKED register_t __cdecl internal_65f2570()
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
        mov byte ptr ds : [public_6603158], al
        mov byte ptr ds : [public_6603159], cl
        mov byte ptr ds : [public_6603164], bl
        call public_6600bb6
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [public_6603160], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [public_6603160]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [public_6603160]
        mov dword ptr ds : [eax+8], ebx
        mov esi, dword ptr ds : [public_6603160]
        push 0x18
        call public_6600bb6
        mov dword ptr ds : [eax+4], esi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [public_660315c], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_660315c]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        pop esi
        mov dword ptr ds : [public_6603168], ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65f2570)
    }
}
