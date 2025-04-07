#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e960);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4e98b _public_6b4e98b
#define public_6b4e9ae _public_6b4e9ae
#define public_6b4e9f4 _public_6b4e9f4

PROC_DECLARE(0x6b4e960, internal_6b4e960, public_6b4e960);
extern "C" NAKED register_t __cdecl internal_6b4e960()
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
        jb public_6b4e98b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0x10
        public_6b4e98b : nop
        mov si, word ptr ss : [ebp]
        xor edx, edx
        mov dx, si
        add ebp, 2
        lea ebx, ds:[edx+edx]
        add eax, ebx
        cmp eax, edi
        mov dword ptr ds : [ecx], eax
        jb public_6b4e9ae
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0x10
        public_6b4e9ae : nop
        test si, si
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], 0
        jbe public_6b4e9f4
        lea ecx, ds:[edx+edx+2]
        push ecx
        call public_6b6a134
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
        public_6b4e9f4 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6b4e960)
    }
}

#undef public_6b4e98b
#undef public_6b4e9ae
#undef public_6b4e9f4
