#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b4c0);

#define public_6f6b4d7 _public_6f6b4d7
#define public_6f6b500 _public_6f6b500
#define public_6f6b518 _public_6f6b518
#define public_6f6b520 _public_6f6b520
#define public_6f6b526 _public_6f6b526
#define public_6f6b533 _public_6f6b533
#define public_6f6b536 _public_6f6b536
#define public_6f6b53f _public_6f6b53f

PROC_DECLARE(0x6f6b4c0, internal_6f6b4c0, public_6f6b4c0);
extern "C" NAKED register_t __cdecl internal_6f6b4c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        cmp ebp, ecx
        push esi
        je public_6f6b53f
        lea esi, ss:[ebp+4]
        cmp esi, ecx
        je public_6f6b53f
        push ebx
        push edi
        public_6f6b4d7 : nop
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [edi+0x14C]
        cmp ebx, dword ptr ds : [eax+0x14C]
        jl public_6f6b520
        mov ecx, dword ptr ds : [esi-4]
        cmp ebx, dword ptr ds : [ecx+0x14C]
        lea eax, ds:[esi-4]
        mov edx, esi
        jge public_6f6b518
        lea ebx, ds:[ebx]
        public_6f6b500 : nop
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax-4]
        mov ebx, dword ptr ds : [edi+0x14C]
        mov edx, eax
        sub eax, 4
        cmp ebx, dword ptr ds : [ecx+0x14C]
        jl public_6f6b500
        public_6f6b518 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        jmp public_6f6b536
        public_6f6b520 : nop
        cmp ebp, esi
        mov eax, esi
        je public_6f6b533
        public_6f6b526 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_6f6b526
        public_6f6b533 : nop
        mov dword ptr ss : [ebp], edi
        public_6f6b536 : nop
        add esi, 4
        cmp esi, ecx
        jne public_6f6b4d7
        pop edi
        pop ebx
        public_6f6b53f : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f6b4c0)
    }
}

#undef public_6f6b4d7
#undef public_6f6b500
#undef public_6f6b518
#undef public_6f6b520
#undef public_6f6b526
#undef public_6f6b533
#undef public_6f6b536
#undef public_6f6b53f
