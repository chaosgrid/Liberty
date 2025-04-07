#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3a0f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7dba);

#define public_6ad3a48 _public_6ad3a48
#define public_6ad3a61 _public_6ad3a61

PROC_DECLARE(0x6ad3a0f, internal_6ad3a0f, public_6ad3a0f);
extern "C" NAKED register_t __cdecl internal_6ad3a0f()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        push 0x20
        mov ebx, dword ptr ss : [esp+0x14]
        cdq 
        pop ecx
        idiv ecx
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        cdq 
        idiv ecx
        lea edi, ds:[ebx+esi*4]
        push edi
        push 0x1F
        pop ecx
        push 1
        pop eax
        sub ecx, edx
        shl eax, cl
        push eax
        push dword ptr ds : [edi]
        call public_6ad7dba
        add esp, 0xC
        dec esi
        js public_6ad3a61
        lea edi, ds:[ebx+esi*4]
        public_6ad3a48 : nop
        test eax, eax
        je public_6ad3a61
        push edi
        push 1
        push dword ptr ds : [edi]
        call public_6ad7dba
        add esp, 0xC
        dec esi
        sub edi, 4
        test esi, esi
        jge public_6ad3a48
        public_6ad3a61 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad3a0f)
    }
}

#undef public_6ad3a48
#undef public_6ad3a61
