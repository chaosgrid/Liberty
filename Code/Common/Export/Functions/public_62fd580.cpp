#include "Common-PCH.h"


#define public_62fd59d _public_62fd59d
#define public_62fd5b7 _public_62fd5b7

PROC_DECLARE(0x62fd580, internal_62fd580, public_62fd580);
extern "C" NAKED register_t __cdecl internal_62fd580()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+4]
        test al, al
        jne public_62fd59d
        push 0
        push 0
        push 0
        push 0
        call dword ptr ds : [public_6399140]
        mov dword ptr ds : [esi+8], eax
        public_62fd59d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        mov al, byte ptr ds : [esi+4]
        test al, al
        je public_62fd5b7
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov al, 1
        pop esi
        ret 
        public_62fd5b7 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [public_63990cc]
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62fd580)
    }
}

#undef public_62fd59d
#undef public_62fd5b7
