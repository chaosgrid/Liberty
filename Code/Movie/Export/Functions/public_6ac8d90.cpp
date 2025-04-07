#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac86a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8d90);

#define public_6ac8db4 _public_6ac8db4
#define public_6ac8dca _public_6ac8dca
#define public_6ac8ddf _public_6ac8ddf
#define public_6ac8e15 _public_6ac8e15
#define public_6ac8e19 _public_6ac8e19
#define public_6ac8e35 _public_6ac8e35

PROC_DECLARE(0x6ac8d90, internal_6ac8d90, public_6ac8d90);
extern "C" NAKED register_t __cdecl internal_6ac8d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, eax
        jbe public_6ac8db4
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6ac8dca
        public_6ac8db4 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edx
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, eax
        public_6ac8dca : nop
        test esi, esi
        jne public_6ac8ddf
        mov ecx, edi
        mov edi, dword ptr ss : [esp+0x24]
        xor eax, eax
        rep stosd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x14
        public_6ac8ddf : nop
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x18]
        push edi
        push ebx
        push eax
        push ecx
        call public_6ac86a0
        cmp esi, 1
        mov dword ptr ds : [ebx+edi*4], eax
        je public_6ac8e35
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        sub eax, ebp
        lea esi, ss:[ebp+4]
        lea ebx, ds:[ebx+edi*4+4]
        mov dword ptr ss : [esp+0x24], eax
        lea ebp, ds:[edx-1]
        jmp public_6ac8e19
        public_6ac8e15 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6ac8e19 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, esi
        push edi
        push eax
        mov eax, dword ptr ds : [esi]
        push eax
        push ecx
        call public_6ac8490
        mov dword ptr ds : [ebx], eax
        add esi, 4
        add ebx, 4
        dec ebp
        jne public_6ac8e15
        public_6ac8e35 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6ac8d90)
    }
}

#undef public_6ac8db4
#undef public_6ac8dca
#undef public_6ac8ddf
#undef public_6ac8e15
#undef public_6ac8e19
#undef public_6ac8e35
