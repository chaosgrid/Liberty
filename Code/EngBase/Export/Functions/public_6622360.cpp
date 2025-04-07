#include "EngBase-PCH.h"


#define public_662236e _public_662236e
#define public_662237f _public_662237f
#define public_66223a3 _public_66223a3

PROC_DECLARE(0x6622360, internal_6622360, public_6622360);
extern "C" NAKED register_t __cdecl internal_6622360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        jne public_662236e
        or eax, eax
        ret 0x10
        public_662236e : nop
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+0x2C]
        push edi
        mov edi, dword ptr ds : [eax+0x30]
        cmp esi, edi
        je public_66223a3
        mov ebx, dword ptr ss : [esp+0x1C]
        public_662237f : nop
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[esi+8]
        push ebx
        push eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+0x44]
        push edx
        mov ecx, dword ptr ds : [eax+0x44]
        push ecx
        call dword ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        je public_66223a3
        add esi, 0x64
        cmp esi, edi
        jne public_662237f
        public_66223a3 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6622360)
    }
}

#undef public_662236e
#undef public_662237f
#undef public_66223a3
