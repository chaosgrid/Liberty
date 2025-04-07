#include "Common-PCH.h"


#define public_62987cf _public_62987cf
#define public_62987d1 _public_62987d1
#define public_62987f5 _public_62987f5
#define public_62987f7 _public_62987f7
#define public_629881b _public_629881b
#define public_629882d _public_629882d
#define public_629882f _public_629882f
#define public_629884d _public_629884d
#define public_6298857 _public_6298857

PROC_DECLARE(0x6298750, internal_6298750, public_6298750);
extern "C" NAKED register_t __cdecl internal_6298750()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_6298857
        add eax, 0xFFFFFF64
        test eax, eax
        je public_6298857
        mov dx, word ptr ds : [esi+0x258]
        cmp dx, word ptr ds : [public_63a4aa4]
        push edi
        je public_629881b
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_629881b
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629881b
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_629881b
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_62987cf
        lea ecx, ds:[eax-0x9C]
        test ecx, ecx
        je public_62987cf
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_62987d1
        public_62987cf : nop
        xor ecx, ecx
        public_62987d1 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        call dword ptr ds : [eax+0xE0]
        test al, al
        jne public_629884d
        mov esi, dword ptr ds : [esi+0x250]
        test esi, esi
        je public_62987f5
        lea ecx, ds:[esi-0x9C]
        jmp public_62987f7
        public_62987f5 : nop
        xor ecx, ecx
        public_62987f7 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_629881b : nop
        mov esi, dword ptr ds : [esi+0x250]
        test esi, esi
        je public_629882d
        lea ecx, ds:[esi-0x9C]
        jmp public_629882f
        public_629882d : nop
        xor ecx, ecx
        public_629882f : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x68]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_629884d : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_6298857 : nop
        xor al, al
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6298750)
    }
}

#undef public_62987cf
#undef public_62987d1
#undef public_62987f5
#undef public_62987f7
#undef public_629881b
#undef public_629882d
#undef public_629882f
#undef public_629884d
#undef public_6298857
