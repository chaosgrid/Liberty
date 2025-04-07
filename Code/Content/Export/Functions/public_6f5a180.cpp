#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a180);

#define public_6f5a1a7 _public_6f5a1a7

PROC_DECLARE(0x6f5a180, internal_6f5a180, public_6f5a180);
extern "C" NAKED register_t __cdecl internal_6f5a180()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f5a1a7
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [edx]
        push esi
        push edi
        mov byte ptr ds : [eax], cl
        lea esi, ds:[edx+4]
        lea edi, ds:[eax+4]
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [edx+0x34]
        pop edi
        mov dword ptr ds : [eax+0x34], edx
        pop esi
        public_6f5a1a7 : nop
        ret 
        UNREACHABLE_TRAP(0x6f5a180)
    }
}

#undef public_6f5a1a7
