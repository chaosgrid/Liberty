#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63337b1 _public_63337b1
#define public_63337c1 _public_63337c1
#define public_63337db _public_63337db
#define public_63337f1 _public_63337f1
#define public_63337f4 _public_63337f4

PROC_DECLARE(0x63337a0, internal_63337a0, public_63337a0);
extern "C" NAKED register_t __cdecl internal_63337a0()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x20]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_63337f4
        mov ecx, dword ptr ss : [esp+0xC]
        public_63337b1 : nop
        cmp dword ptr ds : [edi+8], ecx
        je public_63337c1
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_63337b1
        pop edi
        pop ebp
        ret 4
        public_63337c1 : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x2C]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_63337db
        mov ebx, eax
        public_63337db : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop esi
        pop ebx
        je public_63337f1
        mov dword ptr ds : [eax], edi
        public_63337f1 : nop
        inc dword ptr ss : [ebp+0x30]
        public_63337f4 : nop
        pop edi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x63337a0)
    }
}

#undef public_63337b1
#undef public_63337c1
#undef public_63337db
#undef public_63337f1
#undef public_63337f4
