#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ece0);

#define public_6f4ed0f _public_6f4ed0f
#define public_6f4ed26 _public_6f4ed26
#define public_6f4ed2e _public_6f4ed2e
#define public_6f4ed32 _public_6f4ed32

PROC_DECLARE(0x6f4ece0, internal_6f4ece0, public_6f4ece0);
extern "C" NAKED register_t __cdecl internal_6f4ece0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x18]
        jge public_6f4ed0f
        cmp ecx, edx
        jl public_6f4ed2e
        cmp eax, edx
        lea ecx, ss:[esp+0x18]
        jl public_6f4ed32
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ss:[esp+8]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        ret 
        public_6f4ed0f : nop
        cmp eax, edx
        jge public_6f4ed26
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ss:[esp+8]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        ret 
        public_6f4ed26 : nop
        cmp ecx, edx
        lea ecx, ss:[esp+0x18]
        jl public_6f4ed32
        public_6f4ed2e : nop
        lea ecx, ss:[esp+0x10]
        public_6f4ed32 : nop
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4ece0)
    }
}

#undef public_6f4ed0f
#undef public_6f4ed26
#undef public_6f4ed2e
#undef public_6f4ed32
