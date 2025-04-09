#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509b80);
CLANG_FORWARD_PROC_SYMBOL(public_509f60);
CLANG_FORWARD_PROC_SYMBOL(public_54bd50);
CLANG_FORWARD_PROC_SYMBOL(public_5553a0);

#define public_509ba3 _public_509ba3
#define public_509bb2 _public_509bb2

PROC_DECLARE(0x509b80, internal_509b80, public_509b80);
extern "C" NAKED register_t __cdecl internal_509b80()
{
    __asm
    {
        push ebx
        push esi
        push edi
        call public_54bd50
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_6132dc], eax
        call public_5553a0
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov ebx, dword ptr ss : [esp+0x10]
        je public_509bb2
        public_509ba3 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0x54]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_509ba3
        public_509bb2 : nop
        push ebx
        call public_509f60
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x509b80)
    }
}

#undef public_509ba3
#undef public_509bb2
