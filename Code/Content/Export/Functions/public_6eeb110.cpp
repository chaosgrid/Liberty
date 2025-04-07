#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);

#define public_6eeb147 _public_6eeb147
#define public_6eeb169 _public_6eeb169
#define public_6eeb188 _public_6eeb188

PROC_DECLARE(0x6eeb110, internal_6eeb110, public_6eeb110);
extern "C" NAKED register_t __cdecl internal_6eeb110()
{
    __asm
    {
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov esi, 0xFFFFFFFC
        call public_6eac0c0
        add esp, 4
        test eax, eax
        je public_6eeb188
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov esi, eax
        add esi, 4
        jne public_6eeb147
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        xor eax, eax
        pop esi
        ret 
        public_6eeb147 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ds:[ebx+4]
        jb public_6eeb169
        mov eax, 0x3F
        public_6eeb169 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        pop ebp
        mov dword ptr ds : [ebx], eax
        pop ebx
        xor eax, eax
        pop esi
        ret 
        public_6eeb188 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eeb110)
    }
}

#undef public_6eeb147
#undef public_6eeb169
#undef public_6eeb188
