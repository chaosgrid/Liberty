#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fb50);

#define public_57fb64 _public_57fb64
#define public_57fb80 _public_57fb80
#define public_57fba1 _public_57fba1

PROC_DECLARE(0x57fb50, internal_57fb50, public_57fb50);
extern "C" NAKED register_t __cdecl internal_57fb50()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, edx
        je public_57fba1
        push ebx
        push ebp
        push edi
        public_57fb64 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov cx, word ptr ds : [esi]
        mov edi, esi
        mov ebp, 0xFFFFFFFE
        mov word ptr ds : [eax], cx
        sub edi, eax
        lea ecx, ds:[eax+2]
        sub ebp, eax
        lea esp, ss:[esp]
        public_57fb80 : nop
        mov bl, byte ptr ds : [edi+ecx]
        mov byte ptr ds : [ecx], bl
        inc ecx
        lea ebx, ds:[ecx+ebp]
        cmp ebx, 2
        jb public_57fb80
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        add esi, 0xC
        add eax, 0xC
        cmp esi, edx
        jne public_57fb64
        pop edi
        pop ebp
        pop ebx
        public_57fba1 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x57fb50)
    }
}

#undef public_57fb64
#undef public_57fb80
#undef public_57fba1
