#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62db7c0);

#define public_62db7f1 _public_62db7f1

PROC_DECLARE(0x62db7c0, internal_62db7c0, public_62db7c0);
extern "C" NAKED register_t __cdecl internal_62db7c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        push edi
        mov edi, ecx
        je public_62db7f1
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ds : [edi+0x26C], eax
        pop edi
        pop esi
        ret 4
        public_62db7f1 : nop
        mov dword ptr ds : [edi+0x26C], 0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62db7c0)
    }
}

#undef public_62db7f1
