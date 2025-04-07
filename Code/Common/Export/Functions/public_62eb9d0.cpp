#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eb9d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ebb10);

#define public_62eba28 _public_62eba28
#define public_62eba2a _public_62eba2a
#define public_62eba41 _public_62eba41
#define public_62eba57 _public_62eba57
#define public_62eba61 _public_62eba61
#define public_62eba67 _public_62eba67

PROC_DECLARE(0x62eb9d0, internal_62eb9d0, public_62eb9d0);
extern "C" NAKED register_t __cdecl internal_62eb9d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_62eba67
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_62eba67
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62eba67
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62eba61
        mov byte ptr ds : [esi+8], al
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eba28
        lea ecx, ds:[eax-8]
        jmp public_62eba2a
        public_62eba28 : nop
        xor ecx, ecx
        public_62eba2a : nop
        mov eax, dword ptr ds : [ecx]
        push edi
        push 0x40
        push 0x40
        lea edi, ds:[esi+0x10]
        push edi
        call dword ptr ds : [eax+0x114]
        test eax, eax
        jne public_62eba57
        mov ecx, edi
        public_62eba41 : nop
        cmp word ptr ds : [ecx], 0
        je public_62eba57
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        inc eax
        add ecx, 2
        cmp eax, 0x40
        mov dword ptr ds : [esi+0xC], edi
        jl public_62eba41
        public_62eba57 : nop
        push 1
        mov ecx, esi
        call public_62ebb10
        pop edi
        public_62eba61 : nop
        mov al, 1
        pop esi
        ret 4
        public_62eba67 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62eb9d0)
    }
}

#undef public_62eba28
#undef public_62eba2a
#undef public_62eba41
#undef public_62eba57
#undef public_62eba61
#undef public_62eba67
