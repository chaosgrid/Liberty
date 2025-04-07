#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d35648 _public_6d35648
#define public_6d35674 _public_6d35674
#define public_6d35684 _public_6d35684
#define public_6d356a6 _public_6d356a6
#define public_6d356b2 _public_6d356b2
#define public_6d356b7 _public_6d356b7
#define public_6d356c7 _public_6d356c7
#define public_6d356c9 _public_6d356c9
#define public_6d356d2 _public_6d356d2

PROC_DECLARE(0x6d35610, internal_6d35610, public_6d35610);
extern "C" NAKED register_t __cdecl internal_6d35610()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        xor ebx, ebx
        mov eax, ebp
        mov dword ptr ds : [esi+0x18], ecx
        cmp word ptr ds : [eax], bx
        je public_6d356b7
        add eax, 2
        mov edx, eax
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d35674
        mov ebx, dword ptr ds : [edi+0x10]
        public_6d35648 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d356c7
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d356c9
        public_6d35674 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d356b2
        mov ebx, 1
        cmp eax, ebx
        jbe public_6d35648
        public_6d35684 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [esi+0x10]
        cmp word ptr ds : [eax], 0
        je public_6d356a6
        add eax, 2
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebx, eax
        jb public_6d35684
        jmp public_6d35648
        public_6d356a6 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d356b2 : nop
        mov dword ptr ds : [esi+0x10], ebp
        jmp public_6d35648
        public_6d356b7 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d35648
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d356c7 : nop
        mov eax, edx
        public_6d356c9 : nop
        test eax, eax
        je public_6d356d2
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d356d2 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d35610)
    }
}

#undef public_6d35648
#undef public_6d35674
#undef public_6d35684
#undef public_6d356a6
#undef public_6d356b2
#undef public_6d356b7
#undef public_6d356c7
#undef public_6d356c9
#undef public_6d356d2
