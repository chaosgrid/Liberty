#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805cd0);

#define public_6805ce2 _public_6805ce2
#define public_6805cf5 _public_6805cf5
#define public_6805cfa _public_6805cfa

PROC_DECLARE(0x6805cd0, internal_6805cd0, public_6805cd0);
extern "C" NAKED register_t __cdecl internal_6805cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push esi
        mov esi, dword ptr ds : [eax+0x58]
        test esi, esi
        push edi
        je public_6805cf5
        mov edi, dword ptr ss : [esp+0xC]
        public_6805ce2 : nop
        lea ecx, ds:[esi+0x10]
        push ecx
        call edi
        add esp, 4
        test eax, eax
        jne public_6805cfa
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6805ce2
        public_6805cf5 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6805cfa : nop
        pop edi
        lea eax, ds:[esi+0x28]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805cd0)
    }
}

#undef public_6805ce2
#undef public_6805cf5
#undef public_6805cfa
