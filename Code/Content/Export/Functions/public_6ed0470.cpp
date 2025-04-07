#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0470);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3710);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed0482 _public_6ed0482
#define public_6ed04b2 _public_6ed04b2

PROC_DECLARE(0x6ed0470, internal_6ed0470, public_6ed0470);
extern "C" NAKED register_t __cdecl internal_6ed0470()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_6ed04b2
        push esi
        public_6ed0482 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ed3710
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6ed0482
        pop esi
        public_6ed04b2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0470)
    }
}

#undef public_6ed0482
#undef public_6ed04b2
