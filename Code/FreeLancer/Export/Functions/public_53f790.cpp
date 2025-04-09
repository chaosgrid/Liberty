#include "FreeLancer-PCH.h"


#define public_53f7b2 _public_53f7b2
#define public_53f7b4 _public_53f7b4
#define public_53f7c6 _public_53f7c6
#define public_53f7dc _public_53f7dc
#define public_53f7de _public_53f7de
#define public_53f7f7 _public_53f7f7
#define public_53f7f9 _public_53f7f9
#define public_53f84e _public_53f84e

PROC_DECLARE(0x53f790, internal_53f790, public_53f790);
extern "C" NAKED register_t __cdecl internal_53f790()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53f7c6
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53f7b2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_53f7b4
        public_53f7b2 : nop
        xor eax, eax
        public_53f7b4 : nop
        mov edx, dword ptr ds : [eax+0xE4]
        cmp edx, dword ptr ds : [public_673378]
        jne public_53f84e
        public_53f7c6 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53f7dc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        jne public_53f7dc
        mov ecx, eax
        jmp public_53f7de
        public_53f7dc : nop
        xor ecx, ecx
        public_53f7de : nop
        test eax, eax
        mov edx, dword ptr ds : [ecx+0xE4]
        mov dword ptr ss : [esp+8], edx
        je public_53f7f7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_53f7f9
        public_53f7f7 : nop
        xor eax, eax
        public_53f7f9 : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        mov ax, word ptr ss : [esp+0x30]
        mov word ptr ss : [esp+0x10], ax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xD4]
        public_53f84e : nop
        pop esi
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x53f790)
    }
}

#undef public_53f7b2
#undef public_53f7b4
#undef public_53f7c6
#undef public_53f7dc
#undef public_53f7de
#undef public_53f7f7
#undef public_53f7f9
#undef public_53f84e
