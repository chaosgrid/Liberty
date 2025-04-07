#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d24a62 _public_6d24a62
#define public_6d24a64 _public_6d24a64
#define public_6d24a6b _public_6d24a6b
#define public_6d24a79 _public_6d24a79
#define public_6d24aa9 _public_6d24aa9
#define public_6d24aab _public_6d24aab
#define public_6d24ab2 _public_6d24ab2
#define public_6d24ac7 _public_6d24ac7

PROC_DECLARE(0x6d24a00, internal_6d24a00, public_6d24a00);
extern "C" NAKED register_t __cdecl internal_6d24a00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        mov eax, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [eax]
        je public_6d24a79
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        mov edx, dword ptr ds : [esi+0x30]
        sar eax, 5
        cmp edx, eax
        jae public_6d24a79
        mov ecx, dword ptr ds : [ecx+4]
        shl edx, 5
        mov al, byte ptr ds : [edx+ecx+8]
        test al, al
        je public_6d24a79
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+4]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d24a62
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d24a64
        public_6d24a62 : nop
        mov eax, edx
        public_6d24a64 : nop
        test eax, eax
        je public_6d24a6b
        mov byte ptr ds : [eax], 1
        public_6d24a6b : nop
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6d24a79 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        push ebp
        mov ebp, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+4]
        cmp eax, ebp
        mov dword ptr ds : [ecx+0x1008], eax
        pop ebp
        jbe public_6d24aa9
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d24aab
        public_6d24aa9 : nop
        mov eax, edx
        public_6d24aab : nop
        test eax, eax
        je public_6d24ab2
        mov byte ptr ds : [eax], 0
        public_6d24ab2 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6d24ac7
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6d24ac7 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d24a00)
    }
}

#undef public_6d24a62
#undef public_6d24a64
#undef public_6d24a6b
#undef public_6d24a79
#undef public_6d24aa9
#undef public_6d24aab
#undef public_6d24ab2
#undef public_6d24ac7
