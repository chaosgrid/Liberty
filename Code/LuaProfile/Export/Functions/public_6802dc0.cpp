#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802dc0);

#define public_6802de4 _public_6802de4
#define public_6802dea _public_6802dea
#define public_6802dfd _public_6802dfd

PROC_DECLARE(0x6802dc0, internal_6802dc0, public_6802dc0);
extern "C" NAKED register_t __cdecl internal_6802dc0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx]
        push edi
        sub eax, dword ptr ds : [ecx+4]
        sub eax, 0x10
        sar eax, 4
        js public_6802dfd
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, eax
        shl esi, 4
        lea edi, ds:[eax+1]
        jmp public_6802dea
        public_6802de4 : nop
        mov ecx, dword ptr ds : [public_680e604]
        public_6802dea : nop
        mov eax, dword ptr ds : [ecx+4]
        add eax, esi
        push eax
        call ebx
        add esp, 4
        sub esi, 0x10
        dec edi
        jne public_6802de4
        pop esi
        pop ebx
        public_6802dfd : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6802dc0)
    }
}

#undef public_6802de4
#undef public_6802dea
#undef public_6802dfd
