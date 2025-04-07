#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268444 _public_6268444
#define public_6268459 _public_6268459
#define public_6268482 _public_6268482

PROC_DECLARE(0x6268430, internal_6268430, public_6268430);
extern "C" NAKED register_t __cdecl internal_6268430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebx
        mov ebx, ecx
        jbe public_6268482
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov ebp, eax
        public_6268444 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6268459
        mov edi, eax
        public_6268459 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 8
        inc ecx
        dec ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6268444
        pop edi
        pop esi
        pop ebp
        public_6268482 : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6268430)
    }
}

#undef public_6268444
#undef public_6268459
#undef public_6268482
