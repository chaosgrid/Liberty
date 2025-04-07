#include "EngBase-PCH.h"


#define public_661fdb8 _public_661fdb8
#define public_661fdd1 _public_661fdd1
#define public_661fdda _public_661fdda

PROC_DECLARE(0x661fda0, internal_661fda0, public_661fda0);
extern "C" NAKED register_t __cdecl internal_661fda0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        test eax, eax
        je public_661fdda
        mov ebx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ebx+0x58]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_661fdd1
        public_661fdb8 : nop
        mov eax, dword ptr ds : [esi+0x38]
        lea ecx, ds:[esi+8]
        push eax
        push ecx
        call dword ptr ss : [esp+0x1C]
        add esp, 8
        test al, al
        je public_661fdd1
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_661fdb8
        public_661fdd1 : nop
        mov eax, dword ptr ds : [ebx+0x5C]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_661fdda : nop
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr ds : [edx+0x5C]
        ret 8
        UNREACHABLE_TRAP(0x661fda0)
    }
}

#undef public_661fdb8
#undef public_661fdd1
#undef public_661fdda
