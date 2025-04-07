#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620be90);
CLANG_FORWARD_PROC_SYMBOL(public_623ec90);

#define public_620bee2 _public_620bee2
#define public_620bee4 _public_620bee4
#define public_620bef8 _public_620bef8
#define public_620bf04 _public_620bf04

PROC_DECLARE(0x620be90, internal_620be90, public_620be90);
extern "C" NAKED register_t __cdecl internal_620be90()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        call public_623ec90
        test eax, eax
        je public_620bee2
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0x28]
        push esi
        push edi
        lea edi, ds:[eax+0xC]
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+0x30], ecx
        pop edi
        pop esi
        fstp dword ptr ds : [eax+0x2C]
        inc dword ptr ds : [edx+0xB4]
        jmp public_620bee4
        public_620bee2 : nop
        xor eax, eax
        public_620bee4 : nop
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx]
        test ecx, ecx
        je public_620bef8
        mov dword ptr ds : [ecx+4], eax
        public_620bef8 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx], eax
        test ecx, ecx
        jne public_620bf04
        mov dword ptr ds : [ebx+4], eax
        public_620bf04 : nop
        pop ebx
        ret 0x28
        UNREACHABLE_TRAP(0x620be90)
    }
}

#undef public_620bee2
#undef public_620bee4
#undef public_620bef8
#undef public_620bf04
