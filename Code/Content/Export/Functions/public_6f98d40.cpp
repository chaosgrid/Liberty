#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98d40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4160);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f98d51 _public_6f98d51
#define public_6f98d6b _public_6f98d6b
#define public_6f98d71 _public_6f98d71
#define public_6f98d8b _public_6f98d8b
#define public_6f98dac _public_6f98dac

PROC_DECLARE(0x6f98d40, internal_6f98d40, public_6f98d40);
extern "C" NAKED register_t __cdecl internal_6f98d40()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_6f98d71
        public_6f98d51 : nop
        fld dword ptr ss : [ebp+4]
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_6f98d6b
        fld dword ptr ss : [ebp+8]
        fcomp dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_6f98dac
        public_6f98d6b : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f98d51
        public_6f98d71 : nop
        push ebx
        push esi
        mov esi, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [esi+4]
        push 0x14
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f98d8b
        mov ebx, eax
        public_6f98d8b : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6fa4160
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 8
        inc eax
        pop esi
        mov dword ptr ds : [edi+0xC], eax
        pop ebx
        public_6f98dac : nop
        pop edi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f98d40)
    }
}

#undef public_6f98d51
#undef public_6f98d6b
#undef public_6f98d71
#undef public_6f98d8b
#undef public_6f98dac
