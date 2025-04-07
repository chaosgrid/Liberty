#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636f610);
CLANG_FORWARD_PROC_SYMBOL(public_636f890);
CLANG_FORWARD_PROC_SYMBOL(public_636fbc0);

#define public_636fbed _public_636fbed
#define public_636fc33 _public_636fc33
#define public_636fc69 _public_636fc69
#define public_636fc77 _public_636fc77
#define public_636fc8b _public_636fc8b
#define public_636fcdd _public_636fcdd
#define public_636fcfc _public_636fcfc

PROC_DECLARE(0x636fbc0, internal_636fbc0, public_636fbc0);
extern "C" NAKED register_t __cdecl internal_636fbc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x3C]
        sub esp, 0xC
        push ebx
        xor ebx, ebx
        test eax, eax
        push esi
        je public_636fcfc
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_636fcfc
        push ebp
        push edi
        public_636fbed : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x24
        jne public_636fcdd
        mov eax, dword ptr ss : [esp+0x20]
        push 1
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        push esi
        call public_636f610
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi+0x50]
        mov edi, ecx
        xor edi, ebp
        add esp, 0x14
        and edi, 1
        test dh, 8
        jne public_636fc33
        not ecx
        public_636fc33 : nop
        and ecx, 1
        mov ebp, ecx
        push esi
        push ebp
        push eax
        call public_636f890
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        inc ecx
        mov dword ptr ds : [eax], ecx
        test dword ptr ds : [esi+0x50], 0x800000
        je public_636fc77
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        jne public_636fc69
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        je public_636fc77
        public_636fc69 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        or eax, 0x1000000
        mov dword ptr ds : [ebx+0x20], ebx
        mov dword ptr ds : [ebx+0x50], eax
        public_636fc77 : nop
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        jne public_636fc8b
        mov edx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+eax*4+4], ebx
        public_636fc8b : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_636fcdd
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+0x4C]
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi+0x50]
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        shr ecx, 0xB
        and ecx, 1
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
        mov eax, dword ptr ds : [ebx+0x4C]
        and edx, 0xFFFFFF
        push edx
        push ebp
        push eax
/*FIXUP push offset public_63ef03c @0x636fcce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef03c
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x2C
        public_636fcdd : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x18], eax
        jne public_636fbed
        pop edi
        pop ebp
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 
        public_636fcfc : nop
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x636fbc0)
    }
}

#undef public_636fbed
#undef public_636fc33
#undef public_636fc69
#undef public_636fc77
#undef public_636fc8b
#undef public_636fcdd
#undef public_636fcfc
