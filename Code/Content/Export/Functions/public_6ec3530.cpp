#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1010);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec3562 _public_6ec3562
#define public_6ec3575 _public_6ec3575
#define public_6ec3590 _public_6ec3590
#define public_6ec35b7 _public_6ec35b7
#define public_6ec35c9 _public_6ec35c9
#define public_6ec35d0 _public_6ec35d0
#define public_6ec35fb _public_6ec35fb
#define public_6ec3602 _public_6ec3602
#define public_6ec3637 _public_6ec3637

PROC_DECLARE(0x6ec3530, internal_6ec3530, public_6ec3530);
extern "C" NAKED register_t __cdecl internal_6ec3530()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+0x24]
        lea eax, ds:[ecx+0xC]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        je public_6ec3637
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp]
        cmp edx, ebp
        push ebx
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        je public_6ec35c9
        xor ecx, ecx
        public_6ec3562 : nop
        cmp ebx, eax
        je public_6ec35c9
        lea esi, ds:[ebx+0xC]
        cmp esi, ecx
        jne public_6ec3575
        mov dword ptr ds : [edx+8], ecx
        mov byte ptr ds : [edx+0xC], cl
        jmp public_6ec35b7
        public_6ec3575 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebx, ds:[edx+0xC]
        jb public_6ec3590
        mov eax, 0x2F
        public_6ec3590 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        mov ebx, dword ptr ss : [esp+0x14]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+0xC], cl
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        public_6ec35b7 : nop
        mov esi, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [edx+0x3C], esi
        mov edx, dword ptr ds : [edx]
        cmp edx, ebp
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6ec3562
        public_6ec35c9 : nop
        cmp edx, ebp
        mov esi, edx
        je public_6ec35fb
        nop 
        public_6ec35d0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebp
        mov dword ptr ds : [edi+8], ecx
        jne public_6ec35d0
        mov eax, dword ptr ss : [esp+0x10]
        public_6ec35fb : nop
        mov esi, ebx
        cmp ebx, eax
        pop ebx
        je public_6ec3637
        public_6ec3602 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        push ebp
        mov ecx, edi
        call public_6ed1010
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[esi+8]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ed2dc0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6ec3602
        public_6ec3637 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ec3530)
    }
}

#undef public_6ec3562
#undef public_6ec3575
#undef public_6ec3590
#undef public_6ec35b7
#undef public_6ec35c9
#undef public_6ec35d0
#undef public_6ec35fb
#undef public_6ec3602
#undef public_6ec3637
