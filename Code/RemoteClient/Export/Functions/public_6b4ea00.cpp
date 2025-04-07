#include "RemoteClient-PCH.h"


#define public_6b4ea2b _public_6b4ea2b
#define public_6b4ea5e _public_6b4ea5e

PROC_DECLARE(0x6b4ea00, internal_6b4ea00, public_6b4ea00);
extern "C" NAKED register_t __cdecl internal_6b4ea00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push ebp
        push esi
        mov esi, dword ptr ds : [edx]
        add esi, 2
        mov eax, esi
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+0x1C]
        cmp eax, esi
        push edi
        jb public_6b4ea2b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0x10
        public_6b4ea2b : nop
        mov ebp, dword ptr ss : [esp+0x18]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        xor eax, eax
        mov ax, cx
        mov word ptr ds : [ebx], cx
        mov edi, dword ptr ds : [edx]
        add ebx, 2
        add edi, eax
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [edx], edi
        jb public_6b4ea5e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0x10
        public_6b4ea5e : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        add eax, ebx
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6b4ea00)
    }
}

#undef public_6b4ea2b
#undef public_6b4ea5e
