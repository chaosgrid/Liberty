#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04a40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f04a56 _public_6f04a56
#define public_6f04a7a _public_6f04a7a
#define public_6f04a83 _public_6f04a83
#define public_6f04aaa _public_6f04aaa

PROC_DECLARE(0x6f04a40, internal_6f04a40, public_6f04a40);
extern "C" NAKED register_t __cdecl internal_6f04a40()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f04a7a
        mov ebx, dword ptr ds : [public_6fb3668]
        public_6f04a56 : nop
        lea eax, ds:[esi+8]
        push eax
        call ebx
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x14]
        jne public_6f04a56
        public_6f04a7a : nop
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6f04aaa
        public_6f04a83 : nop
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
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x18], ecx
        jne public_6f04a83
        public_6f04aaa : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f04a40)
    }
}

#undef public_6f04a56
#undef public_6f04a7a
#undef public_6f04a83
#undef public_6f04aaa
