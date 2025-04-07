#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6329682 _public_6329682

PROC_DECLARE(0x6329640, internal_6329640, public_6329640);
extern "C" NAKED register_t __cdecl internal_6329640()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_6329682
        fld dword ptr ds : [public_63ed66c]
        push esi
        fmul dword ptr ds : [eax+4]
        call public_6391dae
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], eax
        fld dword ptr ds : [public_63ed66c]
        mov eax, dword ptr ds : [edi+4]
        fmul dword ptr ds : [eax+8]
        call public_6391dae
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop edi
        pop ebx
        ret 8
        public_6329682 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6329640)
    }
}

#undef public_6329682
