#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b7390);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c2700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4c2740 _public_4c2740
#define public_4c2773 _public_4c2773
#define public_4c2775 _public_4c2775
#define public_4c277b _public_4c277b
#define public_4c2799 _public_4c2799
#define public_4c27c9 _public_4c27c9
#define public_4c27da _public_4c27da

PROC_DECLARE(0x4c2700, internal_4c2700, public_4c2700);
extern "C" NAKED register_t __cdecl internal_4c2700()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+0x330]
        push esi
        push edi
        push 0
        lea esi, ss:[ebp+0x20]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c642c]
        mov ebx, eax
        test ebx, ebx
        mov eax, dword ptr ss : [esp+0x18]
        je public_4c277b
        test eax, eax
        jne public_4c27c9
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_4c27da
        lea ecx, ds:[ecx]
        public_4c2740 : nop
        mov cx, word ptr ds : [edi+0xA]
        cmp cx, word ptr ds : [ebx+2]
        jne public_4c2773
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_4c2775
        public_4c2773 : nop
        mov edi, dword ptr ds : [edi]
        public_4c2775 : nop
        cmp edi, eax
        jne public_4c2740
        jmp public_4c27da
        public_4c277b : nop
        test eax, eax
        je public_4c27da
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        mov ecx, ebx
        jne public_4c2799
        mov ecx, eax
        public_4c2799 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[ebp+0x38]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_4b7390
        mov edx, dword ptr ds : [esi+8]
        add esp, 8
        push 0
        inc edx
        push 0
        mov ecx, esi
        mov dword ptr ds : [esi+8], edx
        call dword ptr ds : [public_5c642c]
        mov ebx, eax
        public_4c27c9 : nop
        test ebx, ebx
        je public_4c27da
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_5c6428]
        public_4c27da : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[ebp+0x38]
        call dword ptr ds : [public_5c6428]
        push 0xFFFFFFFF
        mov ecx, ebp
        call public_4bf850
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4c2700)
    }
}

#undef public_4c2740
#undef public_4c2773
#undef public_4c2775
#undef public_4c277b
#undef public_4c2799
#undef public_4c27c9
#undef public_4c27da
