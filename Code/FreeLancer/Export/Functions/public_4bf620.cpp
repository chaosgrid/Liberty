#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b7390);
CLANG_FORWARD_PROC_SYMBOL(public_4bf620);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4bf660 _public_4bf660
#define public_4bf68f _public_4bf68f
#define public_4bf691 _public_4bf691
#define public_4bf697 _public_4bf697
#define public_4bf6b5 _public_4bf6b5
#define public_4bf6e5 _public_4bf6e5
#define public_4bf6f6 _public_4bf6f6

PROC_DECLARE(0x4bf620, internal_4bf620, public_4bf620);
extern "C" NAKED register_t __cdecl internal_4bf620()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c642c]
        push esi
        push edi
        lea esi, ds:[ecx+0x20]
        push 0
        mov dword ptr ss : [esp+0x14], ecx
        push 0
        mov ecx, esi
        call ebp
        mov ebx, eax
        test ebx, ebx
        mov eax, dword ptr ss : [esp+0x18]
        je public_4bf697
        test eax, eax
        jne public_4bf6e5
        mov ebp, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_4bf6f6
        lea ebx, ds:[ebx]
        public_4bf660 : nop
        mov ax, word ptr ds : [edi+0xA]
        cmp ax, word ptr ds : [ebx+2]
        jne public_4bf68f
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        jmp public_4bf691
        public_4bf68f : nop
        mov edi, dword ptr ds : [edi]
        public_4bf691 : nop
        cmp edi, ebp
        jne public_4bf660
        jmp public_4bf6f6
        public_4bf697 : nop
        test eax, eax
        je public_4bf6f6
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        mov ecx, ebx
        jne public_4bf6b5
        mov ecx, eax
        public_4bf6b5 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        add edx, 0x38
        mov dword ptr ds : [ecx], eax
        push edx
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
        call ebp
        mov ebx, eax
        public_4bf6e5 : nop
        test ebx, ebx
        je public_4bf6f6
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c6428]
        public_4bf6f6 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        push ecx
        lea ecx, ds:[esi+0x38]
        call dword ptr ds : [public_5c6428]
        push 0xFFFFFFFF
        mov ecx, esi
        call public_4bf850
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4bf620)
    }
}

#undef public_4bf660
#undef public_4bf68f
#undef public_4bf691
#undef public_4bf697
#undef public_4bf6b5
#undef public_4bf6e5
#undef public_4bf6f6
