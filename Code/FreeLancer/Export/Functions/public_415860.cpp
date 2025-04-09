#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415860);

#define public_41587d _public_41587d
#define public_415886 _public_415886
#define public_4158d0 _public_4158d0
#define public_4158e4 _public_4158e4
#define public_4158f0 _public_4158f0
#define public_4158fc _public_4158fc
#define public_415903 _public_415903
#define public_415911 _public_415911
#define public_415943 _public_415943
#define public_415957 _public_415957
#define public_41595a _public_41595a
#define public_41597e _public_41597e
#define public_41598f _public_41598f
#define public_415998 _public_415998

PROC_DECLARE(0x415860, internal_415860, public_415860);
extern "C" NAKED register_t __cdecl internal_415860()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_415998
        test ebx, ebx
        mov ecx, ebx
        jne public_41587d
        mov ecx, offset public_5c8ce0
        public_41587d : nop
        test eax, eax
        jne public_415886
        mov eax, offset public_5c8ce0
        public_415886 : nop
        push eax
        push ecx
        call dword ptr ds : [public_5c71d4]
        add esp, 8
        test eax, eax
        setne al
        test al, al
        je public_415998
        mov eax, dword ptr ds : [esi]
        test eax, eax
        push ebp
        push edi
        je public_415911
        cmp word ptr ds : [eax], 0
        je public_415911
        push eax
        call dword ptr ds : [public_5c71d8]
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov ecx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, ecx
        add esp, 4
        cmp eax, ecx
        je public_4158e4
        nop 
        public_4158d0 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        add eax, 8
        add edi, 8
        cmp eax, ecx
        jne public_4158d0
        public_4158e4 : nop
        mov ebx, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov ebp, edi
        je public_415903
        lea ecx, ds:[ecx]
        public_4158f0 : nop
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        je public_4158fc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4158fc : nop
        add ebp, 8
        cmp ebp, ebx
        jne public_4158f0
        public_415903 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x28], 0
        public_415911 : nop
        test ebx, ebx
        je public_41597e
        push ebx
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ss:[ebp+1]
        add esp, 4
        cmp edi, eax
        jbe public_41595a
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_415943
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_415957
        public_415943 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_415957 : nop
        mov dword ptr ds : [esi+4], edi
        public_41595a : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        push ebx
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        pop edi
        mov word ptr ds : [ecx+ebp*2], 0
        pop ebp
        mov dword ptr ds : [esi+0x28], 0
        pop esi
        pop ebx
        ret 4
        public_41597e : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_41598f
        cmp word ptr ds : [eax], 0
        je public_41598f
        mov word ptr ds : [eax], 0
        public_41598f : nop
        pop edi
        mov dword ptr ds : [esi+0x28], 0
        pop ebp
        public_415998 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x415860)
    }
}

#undef public_41587d
#undef public_415886
#undef public_4158d0
#undef public_4158e4
#undef public_4158f0
#undef public_4158fc
#undef public_415903
#undef public_415911
#undef public_415943
#undef public_415957
#undef public_41595a
#undef public_41597e
#undef public_41598f
#undef public_415998
