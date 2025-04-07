#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6ef0ea0 _public_6ef0ea0
#define public_6ef0ebc _public_6ef0ebc
#define public_6ef0ec8 _public_6ef0ec8
#define public_6ef0ed3 _public_6ef0ed3
#define public_6ef0ed5 _public_6ef0ed5
#define public_6ef0ef0 _public_6ef0ef0
#define public_6ef0efb _public_6ef0efb
#define public_6ef0f09 _public_6ef0f09

PROC_DECLARE(0x6ef0e30, internal_6ef0e30, public_6ef0e30);
extern "C" NAKED register_t __cdecl internal_6ef0e30()
{
    __asm
    {
        fld dword ptr ss : [esp+0x10]
        sub esp, 0x404
        fcomp dword ptr ds : [public_6fb444c]
        push ebx
        push ebp
        fnstsw ax
        test ah, 0x41
        jne public_6ef0f09
        fld dword ptr ds : [public_6fb7608]
        mov edx, dword ptr ss : [esp+0x418]
        fmul dword ptr ss : [esp+0x41C]
        mov ebp, dword ptr ss : [esp+0x414]
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ss : [ebp+0x48]
        push 0x100
        lea ecx, ss:[esp+0x14]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x18
        xor ebx, ebx
        test eax, eax
        jbe public_6ef0f09
        push esi
        mov esi, dword ptr ss : [esp+0x424]
        push edi
        lea edi, ss:[esp+0x14]
        public_6ef0ea0 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, ebp
        call public_6f72cb0
        test eax, eax
        je public_6ef0efb
        mov cl, byte ptr ds : [eax+0x12]
        test cl, cl
        jne public_6ef0ebc
        mov cl, byte ptr ds : [eax+0x13]
        test cl, cl
        je public_6ef0efb
        public_6ef0ebc : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ef0ed3
        mov edx, dword ptr ds : [edi]
        public_6ef0ec8 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef0ed5
        add eax, 4
        cmp eax, ecx
        jne public_6ef0ec8
        public_6ef0ed3 : nop
        mov eax, ecx
        public_6ef0ed5 : nop
        cmp eax, ecx
        jne public_6ef0efb
        push edi
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ef0efb
        mov edx, dword ptr ds : [edi]
        public_6ef0ef0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef0efb
        add eax, 4
        cmp eax, ecx
        jne public_6ef0ef0
        public_6ef0efb : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        add edi, 4
        cmp ebx, eax
        jb public_6ef0ea0
        pop edi
        pop esi
        public_6ef0f09 : nop
        pop ebp
        pop ebx
        add esp, 0x404
        ret 0x14
        UNREACHABLE_TRAP(0x6ef0e30)
    }
}

#undef public_6ef0ea0
#undef public_6ef0ebc
#undef public_6ef0ec8
#undef public_6ef0ed3
#undef public_6ef0ed5
#undef public_6ef0ef0
#undef public_6ef0efb
#undef public_6ef0f09
