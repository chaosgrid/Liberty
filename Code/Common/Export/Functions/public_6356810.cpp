#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356740);
CLANG_FORWARD_PROC_SYMBOL(public_6356810);

#define public_635685a _public_635685a
#define public_635688e _public_635688e

PROC_DECLARE(0x6356810, internal_6356810, public_6356810);
extern "C" NAKED register_t __cdecl internal_6356810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+8]
        lea esi, ds:[eax+0x18]
        lea ebx, ds:[ecx+0x1C]
        mov ecx, dword ptr ds : [esi+0x10]
        lea ebp, ds:[eax+0x34]
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ecx
        jne public_635685a
        mov ecx, dword ptr ds : [ebx+8]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jne public_635685a
        push esi
        mov ecx, edi
        call public_6356740
        test eax, eax
        je public_635685a
        push ebp
        mov ecx, ebx
        call public_6356740
        test eax, eax
        je public_635685a
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 4
        public_635685a : nop
        mov edx, dword ptr ds : [ebx+8]
        cmp edx, dword ptr ds : [esi+0x10]
        jne public_635688e
        mov eax, dword ptr ds : [edi+8]
        cmp eax, dword ptr ss : [ebp+0x10]
        jne public_635688e
        push esi
        mov ecx, ebx
        call public_6356740
        test eax, eax
        je public_635688e
        push ebp
        mov ecx, edi
        call public_6356740
        test eax, eax
        je public_635688e
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 4
        public_635688e : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6356810)
    }
}

#undef public_635685a
#undef public_635688e
