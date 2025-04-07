#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7590);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee75e1 _public_6ee75e1

PROC_DECLARE(0x6ee7590, internal_6ee7590, public_6ee7590);
extern "C" NAKED register_t __cdecl internal_6ee7590()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ee11a0
        cmp dword ptr ds : [public_6eeaf48], 0x7FFFFFFF
        jge public_6ee75e1
        mov ecx, dword ptr ds : [public_6eeaf3c]
        mov dword ptr ds : [esi], ecx
        inc dword ptr ds : [public_6eeaf48]
        mov dword ptr ds : [public_6eeaf3c], esi
        dec dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        public_6ee75e1 : nop
        push esi
        call public_6ee8ddc
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ee7590)
    }
}

#undef public_6ee75e1
