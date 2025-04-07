#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced840);

#define public_6cee02d _public_6cee02d
#define public_6cee034 _public_6cee034

PROC_DECLARE(0x6cee000, internal_6cee000, public_6cee000);
extern "C" NAKED register_t __cdecl internal_6cee000()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_6ced840
        test al, al
        je public_6cee034
        mov ecx, dword ptr ds : [esi+4]
        call dword ptr ds : [public_6d641b8]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        je public_6cee02d
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        public_6cee02d : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6cee034 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cee000)
    }
}

#undef public_6cee02d
#undef public_6cee034
