#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201c70);

#define public_6201ca2 _public_6201ca2

PROC_DECLARE(0x6201c70, internal_6201c70, public_6201c70);
extern "C" NAKED register_t __cdecl internal_6201c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ds:[eax+eax*2]
        mov edx, dword ptr ds : [eax*4+public_62578b8]
        lea eax, ds : [eax*4+public_62578b4]
        test edx, edx
        mov dword ptr ds : [eax+4], ecx
        jne public_6201ca2
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 
        public_6201ca2 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+8], 0
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6201c70)
    }
}

#undef public_6201ca2
