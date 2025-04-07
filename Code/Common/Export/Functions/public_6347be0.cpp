#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344f50);
CLANG_FORWARD_PROC_SYMBOL(public_6347be0);

#define public_6347bfc _public_6347bfc
#define public_6347c0a _public_6347c0a

PROC_DECLARE(0x6347be0, internal_6347be0, public_6347be0);
extern "C" NAKED register_t __cdecl internal_6347be0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+0x114]
        xor esi, esi
        mov dword ptr ds : [edi+0x1B8], ecx
        mov si, word ptr ds : [edi+0x52]
        dec esi
        js public_6347c0a
        public_6347bfc : nop
        mov edx, dword ptr ds : [edi+0x54]
        mov ecx, dword ptr ds : [edx+esi*4]
        call public_6344f50
        dec esi
        jns public_6347bfc
        public_6347c0a : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6347be0)
    }
}

#undef public_6347bfc
#undef public_6347c0a
