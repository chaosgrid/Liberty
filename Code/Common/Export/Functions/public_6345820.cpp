#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345820);

#define public_6345833 _public_6345833
#define public_6345839 _public_6345839
#define public_6345846 _public_6345846

PROC_DECLARE(0x6345820, internal_6345820, public_6345820);
extern "C" NAKED register_t __cdecl internal_6345820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0xC]
        test edx, edx
        jne public_6345833
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x1C], edx
        jmp public_6345839
        public_6345833 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        public_6345839 : nop
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6345846
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_6345846 : nop
        ret 4
        UNREACHABLE_TRAP(0x6345820)
    }
}

#undef public_6345833
#undef public_6345839
#undef public_6345846
