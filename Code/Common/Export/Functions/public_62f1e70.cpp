#include "Common-PCH.h"


#define public_62f1e8d _public_62f1e8d

PROC_DECLARE(0x62f1e70, internal_62f1e70, public_62f1e70);
extern "C" NAKED register_t __cdecl internal_62f1e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        test edx, edx
        jne public_62f1e8d
        mov ecx, dword ptr ds : [ecx+0x5C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        test edx, edx
        setne cl
        mov al, cl
        ret 4
        public_62f1e8d : nop
        mov edx, dword ptr ds : [edx]
        xor ecx, ecx
        test edx, edx
        setne cl
        mov dword ptr ds : [eax], edx
        mov al, cl
        ret 4
        UNREACHABLE_TRAP(0x62f1e70)
    }
}

#undef public_62f1e8d
