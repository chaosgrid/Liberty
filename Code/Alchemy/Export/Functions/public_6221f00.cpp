#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221f00);

#define public_6221f17 _public_6221f17
#define public_6221f32 _public_6221f32
#define public_6221f47 _public_6221f47

PROC_DECLARE(0x6221f00, internal_6221f00, public_6221f00);
extern "C" NAKED register_t __cdecl internal_6221f00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6221f17
        mov dword ptr ds : [esi+4], edx
        public_6221f17 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6221f32
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6221f32 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6221f47
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6221f47 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6221f00)
    }
}

#undef public_6221f17
#undef public_6221f32
#undef public_6221f47
