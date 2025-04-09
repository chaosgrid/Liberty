#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_488c20);

#define public_488c32 _public_488c32
#define public_488c70 _public_488c70
#define public_488c80 _public_488c80
#define public_488c8e _public_488c8e

PROC_DECLARE(0x488c20, internal_488c20, public_488c20);
extern "C" NAKED register_t __cdecl internal_488c20()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, ebx
        cmp esi, ebx
        push edi
        mov edi, dword ptr ss : [ebp+4]
        je public_488c70
        public_488c32 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+4]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[esi+0x14]
        push eax
        lea ecx, ds:[edi+0x14]
        call dword ptr ds : [public_5c7060]
        add esi, 0x24
        add edi, 0x24
        cmp esi, ebx
        jne public_488c32
        public_488c70 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edi, ebx
        mov esi, edi
        je public_488c8e
        lea esp, ss:[esp]
        public_488c80 : nop
        mov ecx, esi
        call public_487c30
        add esi, 0x24
        cmp esi, ebx
        jne public_488c80
        public_488c8e : nop
        mov dword ptr ss : [ebp+8], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x488c20)
    }
}

#undef public_488c32
#undef public_488c70
#undef public_488c80
#undef public_488c8e
