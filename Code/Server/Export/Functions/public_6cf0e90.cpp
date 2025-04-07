#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d508a0);

#define public_6cf0ed8 _public_6cf0ed8
#define public_6cf0ef9 _public_6cf0ef9

PROC_DECLARE(0x6cf0e90, internal_6cf0e90, public_6cf0e90);
extern "C" NAKED register_t __cdecl internal_6cf0e90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        push esi
        push edi
        jbe public_6cf0ef9
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6cf0ef9
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        je public_6cf0ef9
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [esi]
        add esi, 4
        test edi, edi
        jle public_6cf0ef9
        imul ecx, 0x418
        push ebx
        lea ebx, ds:[ecx-0x418]
        public_6cf0ed8 : nop
        mov edx, dword ptr ds : [public_6d90260]
        lea eax, ds:[esi+4]
        mov ecx, esi
        mov ecx, dword ptr ds : [ecx]
        lea esi, ds:[eax+1]
        movzx eax, byte ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ds:[ebx+edx]
        call public_6d508a0
        dec edi
        jne public_6cf0ed8
        pop ebx
        public_6cf0ef9 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6cf0e90)
    }
}

#undef public_6cf0ed8
#undef public_6cf0ef9
