#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de817);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);

#define public_65de82a _public_65de82a
#define public_65de850 _public_65de850
#define public_65de860 _public_65de860
#define public_65de87d _public_65de87d

PROC_DECLARE(0x65de817, internal_65de817, public_65de817);
extern "C" NAKED register_t __cdecl internal_65de817()
{
    __asm
    {
        push esi
        call public_65de893
        mov ecx, dword ptr ss : [esp+8]
        xor esi, esi
        mov dword ptr ds : [eax], ecx
        mov eax, offset public_65e5d50
        public_65de82a : nop
        cmp ecx, dword ptr ds : [eax]
        je public_65de850
        add eax, 8
        inc esi
        cmp eax, offset public_65e5eb8
        jl public_65de82a
        cmp ecx, 0x13
        jb public_65de860
        cmp ecx, 0x24
        ja public_65de860
        call public_65de88a
        mov dword ptr ds : [eax], 0xD
        pop esi
        ret 
        public_65de850 : nop
        call public_65de88a
        mov ecx, dword ptr ds : [esi*8+public_65e5d54]
        pop esi
        mov dword ptr ds : [eax], ecx
        ret 
        public_65de860 : nop
        cmp ecx, 0xBC
        jb public_65de87d
        cmp ecx, 0xCA
        ja public_65de87d
        call public_65de88a
        mov dword ptr ds : [eax], 8
        pop esi
        ret 
        public_65de87d : nop
        call public_65de88a
        mov dword ptr ds : [eax], 0x16
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65de817)
    }
}

#undef public_65de82a
#undef public_65de850
#undef public_65de860
#undef public_65de87d
