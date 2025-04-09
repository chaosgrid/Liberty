#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);

#define public_414942 _public_414942
#define public_41494b _public_41494b
#define public_414970 _public_414970
#define public_414975 _public_414975
#define public_4149af _public_4149af
#define public_4149e3 _public_4149e3
#define public_4149f6 _public_4149f6
#define public_4149f9 _public_4149f9
#define public_414a1e _public_414a1e
#define public_414a2d _public_414a2d
#define public_414a31 _public_414a31

PROC_DECLARE(0x414920, internal_414920, public_414920);
extern "C" NAKED register_t __cdecl internal_414920()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_414a31
        xor ebx, ebx
        cmp esi, ebx
        mov ecx, esi
        jne public_414942
        mov ecx, offset public_5c8ce0
        public_414942 : nop
        cmp eax, ebx
        jne public_41494b
        mov eax, offset public_5c8ce0
        public_41494b : nop
        push eax
        push ecx
        call dword ptr ds : [public_5c71d4]
        add esp, 8
        test eax, eax
        setne al
        cmp al, bl
        je public_414a31
        push ebp
        mov ebp, dword ptr ds : [edi+0x14]
        cmp ebp, ebx
        je public_4149af
        nop 
        lea esp, ss:[esp]
        public_414970 : nop
        mov esi, ebp
        mov ebp, dword ptr ss : [ebp+0x24]
        public_414975 : nop
        mov eax, esi
        mov dword ptr ss : [esp+0x10], eax
        mov esi, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0x24], ebx
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ds : [eax+0x20], ebx
        mov edx, dword ptr ds : [public_616648]
        push 1
        push edx
        mov ecx, offset public_616640
        call public_537260
        cmp esi, ebx
        jne public_414975
        cmp ebp, ebx
        jne public_414970
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0x14], ebx
        public_4149af : nop
        cmp esi, ebx
        je public_414a1e
        push esi
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        lea esi, ss:[ebp+1]
        add esp, 4
        cmp esi, eax
        jbe public_4149f9
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_4149e3
        lea ecx, ds:[esi+esi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [edi+4], eax
        jmp public_4149f6
        public_4149e3 : nop
        lea edx, ds:[esi+esi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [edi+4], eax
        add esp, 4
        mov word ptr ds : [eax], bx
        public_4149f6 : nop
        mov dword ptr ds : [edi+8], esi
        public_4149f9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+4]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [edi+4]
        add esp, 0xC
        mov word ptr ds : [edx+ebp*2], bx
        pop ebp
        mov dword ptr ds : [edi+0x20], ebx
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_414a1e : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_414a2d
        cmp word ptr ds : [eax], bx
        je public_414a2d
        mov word ptr ds : [eax], bx
        public_414a2d : nop
        mov dword ptr ds : [edi+0x20], ebx
        pop ebp
        public_414a31 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x414920)
    }
}

#undef public_414942
#undef public_41494b
#undef public_414970
#undef public_414975
#undef public_4149af
#undef public_4149e3
#undef public_4149f6
#undef public_4149f9
#undef public_414a1e
#undef public_414a2d
#undef public_414a31
