#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be390);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62be3b2 _public_62be3b2
#define public_62be3e5 _public_62be3e5
#define public_62be3fc _public_62be3fc

PROC_DECLARE(0x62be390, internal_62be390, public_62be390);
extern "C" NAKED register_t __cdecl internal_62be390()
{
    __asm
    {
        mov cl, byte ptr ds : [public_63fc4c0]
        mov al, 1
        test al, cl
        jne public_62be3fc
        push esi
        or cl, al
        push edi
        mov edi, dword ptr ds : [public_63fc4c8]
        mov byte ptr ds : [public_63fc4c0], cl
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62be3e5
        public_62be3b2 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [public_63fc4cc]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_63fc4cc], ecx
        jne public_62be3b2
        mov edi, dword ptr ds : [public_63fc4c8]
        public_62be3e5 : nop
        push edi
        call public_6391d5a
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_63fc4c8], eax
        mov dword ptr ds : [public_63fc4cc], eax
        pop esi
        public_62be3fc : nop
        ret 
        UNREACHABLE_TRAP(0x62be390)
    }
}

#undef public_62be3b2
#undef public_62be3e5
#undef public_62be3fc
