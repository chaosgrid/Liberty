#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5768f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_576900 _public_576900
#define public_576933 _public_576933

PROC_DECLARE(0x5768f0, internal_5768f0, public_5768f0);
extern "C" NAKED register_t __cdecl internal_5768f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_67c264]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_576933
        mov edi, edi
        public_576900 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67c268]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_67c268], ecx
        jne public_576900
        mov edi, dword ptr ds : [public_67c264]
        public_576933 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_67c264], eax
        mov dword ptr ds : [public_67c268], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5768f0)
    }
}

#undef public_576900
#undef public_576933
