#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bec1c9 _public_6bec1c9
#define public_6bec1e8 _public_6bec1e8
#define public_6bec22d _public_6bec22d

PROC_DECLARE(0x6bec1a0, internal_6bec1a0, public_6bec1a0);
extern "C" NAKED register_t __cdecl internal_6bec1a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [eax]
        add esi, 2
        mov ecx, esi
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+0x1C]
        cmp ecx, esi
        jb public_6bec1c9
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0x10
        public_6bec1c9 : nop
        mov dx, word ptr ss : [ebp]
        xor ebx, ebx
        mov bx, dx
        add ebp, 2
        add ecx, ebx
        cmp ecx, esi
        mov dword ptr ds : [eax], ecx
        jb public_6bec1e8
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0x10
        public_6bec1e8 : nop
        test dx, dx
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], 0
        jbe public_6bec22d
        lea ecx, ds:[ebx+1]
        push edi
        push ecx
        call public_6c09d26
        mov dword ptr ds : [esi], eax
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
        add esp, 4
        mov byte ptr ds : [ebx+ecx], 0
        add ebx, ebp
        mov dword ptr ds : [edx], ebx
        pop edi
        public_6bec22d : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6bec1a0)
    }
}

#undef public_6bec1c9
#undef public_6bec1e8
#undef public_6bec22d
