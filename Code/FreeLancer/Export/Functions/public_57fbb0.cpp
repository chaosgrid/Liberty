#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fbb0);

#define public_57fbc8 _public_57fbc8
#define public_57fbe0 _public_57fbe0
#define public_57fc02 _public_57fc02

PROC_DECLARE(0x57fbb0, internal_57fbb0, public_57fbb0);
extern "C" NAKED register_t __cdecl internal_57fbb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        je public_57fc02
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ebp
        sub edi, ecx
        public_57fbc8 : nop
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], eax
        mov ax, word ptr ss : [ebp]
        mov esi, 0xFFFFFFFE
        mov word ptr ds : [ecx], ax
        lea eax, ds:[ecx+2]
        sub esi, ecx
        mov edi, edi
        public_57fbe0 : nop
        mov bl, byte ptr ds : [edi+eax]
        mov byte ptr ds : [eax], bl
        inc eax
        lea ebx, ds:[esi+eax]
        cmp ebx, 2
        jb public_57fbe0
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ecx+4], eax
        add ecx, 0xC
        sub edi, 0xC
        cmp ecx, edx
        jne public_57fbc8
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_57fc02 : nop
        ret 
        UNREACHABLE_TRAP(0x57fbb0)
    }
}

#undef public_57fbc8
#undef public_57fbe0
#undef public_57fc02
