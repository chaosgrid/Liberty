#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4185e8);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_40aac3 _public_40aac3
#define public_40aacb _public_40aacb
#define public_40aae0 _public_40aae0

PROC_DECLARE(0x40aa90, internal_40aa90, public_40aa90);
extern "C" NAKED register_t __cdecl internal_40aa90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_40aacb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_4185e8 @0x40aaa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4185e8
        lea edi, ds:[esi-4]
        push eax
        push 0x2E8
        push esi
        call public_4192c6
        test bl, 1
        je public_40aac3
        push edi
        call public_418978
        add esp, 4
        public_40aac3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_40aacb : nop
        mov ecx, esi
        call public_4185e8
        test bl, 1
        je public_40aae0
        push esi
        call public_418978
        add esp, 4
        public_40aae0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40aa90)
    }
}

#undef public_40aac3
#undef public_40aacb
#undef public_40aae0
