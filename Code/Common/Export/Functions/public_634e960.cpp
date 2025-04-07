#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e960);

#define public_634e98a _public_634e98a
#define public_634e9a0 _public_634e9a0
#define public_634e9c0 _public_634e9c0

PROC_DECLARE(0x634e960, internal_634e960, public_634e960);
extern "C" NAKED register_t __cdecl internal_634e960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x14]
        and edx, 0xFFCBFFFF
        or edx, 0x80000
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ds : [ecx+0x14]
        test edx, edx
        mov dword ptr ds : [eax+0x74], edx
        mov dword ptr ds : [eax+0x78], 0
        je public_634e98a
        mov dword ptr ds : [edx+0x78], eax
        public_634e98a : nop
        mov dword ptr ds : [ecx+0x14], eax
        mov edx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edx+0x24]
        test edx, edx
        lea ecx, ds:[eax+0x18]
        mov dword ptr ds : [ecx+8], edx
        je public_634e9a0
        mov dword ptr ds : [edx+0xC], ecx
        public_634e9a0 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0xC], 0
        add eax, 0x34
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0x24]
        test ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        je public_634e9c0
        mov dword ptr ds : [ecx+0xC], eax
        public_634e9c0 : nop
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [edx+0x24], eax
        ret 4
        UNREACHABLE_TRAP(0x634e960)
    }
}

#undef public_634e98a
#undef public_634e9a0
#undef public_634e9c0
