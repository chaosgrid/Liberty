#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4290da _public_4290da
#define public_42910f _public_42910f
#define public_429130 _public_429130

PROC_DECLARE(0x4290a0, internal_4290a0, public_4290a0);
extern "C" NAKED register_t __cdecl internal_4290a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push esi
        mov dword ptr ds : [esi], offset public_5c9fac
        call dword ptr ds : [public_5c9fc0]
        test al, al
        je public_42910f
        test byte ptr ds : [esi+0xC], 4
        je public_4290da
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        test byte ptr ds : [esi+0xC], 4
        je public_4290da
        mov ecx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x94]
        public_4290da : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov edx, dword ptr ds : [public_667c74]
        add esp, 4
        dec edx
        mov dword ptr ds : [public_667c74], edx
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [esi+0x2C], 0
        call dword ptr ds : [eax+8]
        public_42910f : nop
        mov ecx, dword ptr ds : [public_667cbc]
        mov al, byte ptr ss : [esp+8]
        dec ecx
        test al, 1
        mov dword ptr ds : [public_667cbc], ecx
        je public_429130
        push esi
        mov ecx, offset public_667a44
        call dword ptr ds : [public_5c60c4]
        public_429130 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4290a0)
    }
}

#undef public_4290da
#undef public_42910f
#undef public_429130
