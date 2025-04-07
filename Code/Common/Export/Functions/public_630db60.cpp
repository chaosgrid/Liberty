#include "Common-PCH.h"


#define public_630dba0 _public_630dba0
#define public_630dba8 _public_630dba8
#define public_630dbaa _public_630dbaa

PROC_DECLARE(0x630db60, internal_630db60, public_630db60);
extern "C" NAKED register_t __cdecl internal_630db60()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630dbaa
        mov cl, byte ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], 0x46
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        pop edi
        je public_630dba8
        mov edi, edi
        public_630dba0 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630dba0
        public_630dba8 : nop
        mov dword ptr ds : [ecx], eax
        public_630dbaa : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630db60)
    }
}

#undef public_630dba0
#undef public_630dba8
#undef public_630dbaa
