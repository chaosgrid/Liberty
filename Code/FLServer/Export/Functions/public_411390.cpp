#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411390);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4113a2 _public_4113a2
#define public_4113c1 _public_4113c1

PROC_DECLARE(0x411390, internal_411390, public_411390);
extern "C" NAKED register_t __cdecl internal_411390()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_4113c1
        public_4113a2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_411390
        mov esi, dword ptr ds : [esi]
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4113a2
        public_4113c1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x411390)
    }
}

#undef public_4113a2
#undef public_4113c1
