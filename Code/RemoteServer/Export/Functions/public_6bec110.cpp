#include "RemoteServer-PCH.h"


#define public_6bec13b _public_6bec13b
#define public_6bec16e _public_6bec16e

PROC_DECLARE(0x6bec110, internal_6bec110, public_6bec110);
extern "C" NAKED register_t __cdecl internal_6bec110()
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
        jb public_6bec13b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0x10
        public_6bec13b : nop
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
        jb public_6bec16e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0x10
        public_6bec16e : nop
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
        UNREACHABLE_TRAP(0x6bec110)
    }
}

#undef public_6bec13b
#undef public_6bec16e
