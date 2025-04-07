#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ec0fb9 _public_6ec0fb9
#define public_6ec0fdb _public_6ec0fdb
#define public_6ec0fdd _public_6ec0fdd

PROC_DECLARE(0x6ec0f90, internal_6ec0f90, public_6ec0f90);
extern "C" NAKED register_t __cdecl internal_6ec0f90()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ec0fdb
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        lea eax, ds:[esi+0xC]
        jne public_6ec0fb9
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, dword ptr ds : [esi+0x40]
        jne public_6ec0fdb
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ec0fb9 : nop
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15940
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x44], eax
        je public_6ec0fdb
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, dword ptr ds : [esi+0x40]
        jne public_6ec0fdb
        cmp dword ptr ds : [edi+8], eax
        mov al, 1
        je public_6ec0fdd
        public_6ec0fdb : nop
        mov al, bl
        public_6ec0fdd : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec0f90)
    }
}

#undef public_6ec0fb9
#undef public_6ec0fdb
#undef public_6ec0fdd
