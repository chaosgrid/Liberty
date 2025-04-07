#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d650);
CLANG_FORWARD_PROC_SYMBOL(public_6f75840);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4d660 _public_6f4d660
#define public_6f4d6a4 _public_6f4d6a4

PROC_DECLARE(0x6f4d650, internal_6f4d650, public_6f4d650);
extern "C" NAKED register_t __cdecl internal_6f4d650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd0c2c]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f4d6a4
        push edi
        lea ecx, ds:[ecx]
        public_6f4d660 : nop
        lea eax, ds:[esi+8]
        push eax
        call public_6f75f30
        add esp, 4
        mov ecx, eax
        call public_6f75840
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx], edi
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [edx+4], eax
        call public_6fa8fe0
        mov ecx, dword ptr ds : [public_6fd0c30]
        mov eax, dword ptr ds : [public_6fd0c2c]
        add esp, 4
        dec ecx
        cmp edi, eax
        mov dword ptr ds : [public_6fd0c30], ecx
        mov esi, edi
        jne public_6f4d660
        pop edi
        public_6f4d6a4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4d650)
    }
}

#undef public_6f4d660
#undef public_6f4d6a4
