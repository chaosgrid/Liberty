#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a9e0);

#define public_42a9f7 _public_42a9f7
#define public_42aa13 _public_42aa13
#define public_42aa17 _public_42aa17
#define public_42aa39 _public_42aa39
#define public_42aa41 _public_42aa41
#define public_42aa47 _public_42aa47
#define public_42aa54 _public_42aa54
#define public_42aa57 _public_42aa57
#define public_42aa60 _public_42aa60

PROC_DECLARE(0x42a9e0, internal_42a9e0, public_42a9e0);
extern "C" NAKED register_t __cdecl internal_42a9e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        je public_42aa60
        lea ebx, ss:[ebp+4]
        cmp ebx, ecx
        je public_42aa60
        push esi
        push edi
        public_42a9f7 : nop
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        je public_42aa13
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_42aa13
        fld dword ptr ds : [esi+0x28]
        fld dword ptr ds : [eax+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_42aa41
        public_42aa13 : nop
        mov edi, ebx
        mov edx, ebx
        public_42aa17 : nop
        sub edx, 4
        test esi, esi
        je public_42aa39
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_42aa39
        fld dword ptr ds : [esi+0x28]
        fld dword ptr ds : [ecx+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_42aa39
        mov dword ptr ds : [edi], ecx
        mov edi, edx
        jmp public_42aa17
        public_42aa39 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], esi
        jmp public_42aa57
        public_42aa41 : nop
        cmp ebp, ebx
        mov eax, ebx
        je public_42aa54
        public_42aa47 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_42aa47
        public_42aa54 : nop
        mov dword ptr ss : [ebp], esi
        public_42aa57 : nop
        add ebx, 4
        cmp ebx, ecx
        jne public_42a9f7
        pop edi
        pop esi
        public_42aa60 : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x42a9e0)
    }
}

#undef public_42a9f7
#undef public_42aa13
#undef public_42aa17
#undef public_42aa39
#undef public_42aa41
#undef public_42aa47
#undef public_42aa54
#undef public_42aa57
#undef public_42aa60
