#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7b0);

#define public_6f4c7d4 _public_6f4c7d4
#define public_6f4c7da _public_6f4c7da
#define public_6f4c7ed _public_6f4c7ed

PROC_DECLARE(0x6f4c7b0, internal_6f4c7b0, public_6f4c7b0);
extern "C" NAKED register_t __cdecl internal_6f4c7b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx]
        push edi
        sub eax, dword ptr ds : [ecx+4]
        sub eax, 0x10
        sar eax, 4
        js public_6f4c7ed
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, eax
        shl esi, 4
        lea edi, ds:[eax+1]
        jmp public_6f4c7da
        public_6f4c7d4 : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        public_6f4c7da : nop
        mov eax, dword ptr ds : [ecx+4]
        add eax, esi
        push eax
        call ebx
        add esp, 4
        sub esi, 0x10
        dec edi
        jne public_6f4c7d4
        pop esi
        pop ebx
        public_6f4c7ed : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4c7b0)
    }
}

#undef public_6f4c7d4
#undef public_6f4c7da
#undef public_6f4c7ed
