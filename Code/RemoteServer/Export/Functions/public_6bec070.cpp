#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bec070);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bec09b _public_6bec09b
#define public_6bec0be _public_6bec0be
#define public_6bec104 _public_6bec104

PROC_DECLARE(0x6bec070, internal_6bec070, public_6bec070);
extern "C" NAKED register_t __cdecl internal_6bec070()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [ecx]
        add esi, 2
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, esi
        cmp eax, edi
        mov dword ptr ds : [ecx], esi
        jb public_6bec09b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0x10
        public_6bec09b : nop
        mov si, word ptr ss : [ebp]
        xor edx, edx
        mov dx, si
        add ebp, 2
        lea ebx, ds:[edx+edx]
        add eax, ebx
        cmp eax, edi
        mov dword ptr ds : [ecx], eax
        jb public_6bec0be
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0x10
        public_6bec0be : nop
        test si, si
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], 0
        jbe public_6bec104
        lea ecx, ds:[edx+edx+2]
        push ecx
        call public_6c09d26
        mov dword ptr ds : [edi], eax
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, ebp
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x1C]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [eax]
        mov word ptr ds : [ebx+ecx], 0
        add esp, 4
        add ebx, ebp
        mov dword ptr ds : [edx], ebx
        public_6bec104 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6bec070)
    }
}

#undef public_6bec09b
#undef public_6bec0be
#undef public_6bec104
