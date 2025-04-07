#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f153a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f227c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f153c0 _public_6f153c0
#define public_6f153d0 _public_6f153d0
#define public_6f153e0 _public_6f153e0
#define public_6f153eb _public_6f153eb
#define public_6f153f3 _public_6f153f3
#define public_6f15441 _public_6f15441
#define public_6f15454 _public_6f15454
#define public_6f15469 _public_6f15469
#define public_6f15470 _public_6f15470
#define public_6f15486 _public_6f15486

PROC_DECLARE(0x6f153a0, internal_6f153a0, public_6f153a0);
extern "C" NAKED register_t __cdecl internal_6f153a0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0x9C]
        push ebp
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6f15486
        push ebx
        push esi
        push edi
        nop 
        lea esp, ss:[esp]
        public_6f153c0 : nop
        mov edi, dword ptr ss : [ebp+0x3C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f15441
        lea esp, ss:[esp]
        public_6f153d0 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f153eb
        mov edx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edx]
        nop 
        public_6f153e0 : nop
        cmp edx, dword ptr ds : [eax+8]
        je public_6f153f3
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f153e0
        public_6f153eb : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6f153d0
        jmp public_6f15441
        public_6f153f3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0x1C]
        add esp, 4
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+0x1C], ecx
        jne public_6f15441
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6f227c0
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+0x40]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x40], eax
        public_6f15441 : nop
        mov eax, dword ptr ss : [ebp+0x40]
        test eax, eax
        jne public_6f15470
        mov edi, dword ptr ss : [ebp+0x3C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        lea ebx, ss:[ebp+0x38]
        je public_6f15469
        public_6f15454 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6f1dcd0
        cmp esi, edi
        jne public_6f15454
        public_6f15469 : nop
        mov dword ptr ss : [ebp+0x34], 0
        public_6f15470 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edx+0x9C]
        jne public_6f153c0
        pop edi
        pop esi
        pop ebx
        public_6f15486 : nop
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f153a0)
    }
}

#undef public_6f153c0
#undef public_6f153d0
#undef public_6f153e0
#undef public_6f153eb
#undef public_6f153f3
#undef public_6f15441
#undef public_6f15454
#undef public_6f15469
#undef public_6f15470
#undef public_6f15486
