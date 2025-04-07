#include "THORN-PCH.h"


#define public_6f45f2a _public_6f45f2a
#define public_6f45f52 _public_6f45f52
#define public_6f45f71 _public_6f45f71

PROC_DECLARE(0x6f45ef0, internal_6f45ef0, public_6f45ef0);
extern "C" NAKED register_t __cdecl internal_6f45ef0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x40]
        xor esi, esi
        cmp ecx, esi
        push edi
        mov dword ptr ss : [esp+8], ecx
        je public_6f45f71
        mov ecx, dword ptr ds : [eax+0x4C]
        cmp ecx, esi
        je public_6f45f52
        mov edx, dword ptr ds : [eax+0x50]
        cmp edx, esi
        jle public_6f45f2a
        mov edi, dword ptr ds : [eax+0x2C]
        mov esi, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        sub edx, edi
        push edx
        call dword ptr ds : [esi+0x30]
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        public_6f45f2a : nop
        mov edi, dword ptr ss : [esp+0x18]
        sub edi, dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], esi
        fild qword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fidiv dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0xC]
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        public_6f45f52 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        sub ecx, dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], ecx
        fild qword ptr ss : [esp+0xC]
        pop edi
        pop esi
        fidiv dword ptr ss : [esp]
        add esp, 0xC
        ret 8
        public_6f45f71 : nop
        fld dword ptr ds : [public_6f5a1b8]
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f45ef0)
    }
}

#undef public_6f45f2a
#undef public_6f45f52
#undef public_6f45f71
