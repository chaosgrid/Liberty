#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62842e0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_62842fd _public_62842fd
#define public_6284314 _public_6284314
#define public_6284322 _public_6284322
#define public_6284346 _public_6284346
#define public_6284360 _public_6284360

PROC_DECLARE(0x62842e0, internal_62842e0, public_62842e0);
extern "C" NAKED register_t __cdecl internal_62842e0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_6284360
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_62842fd
        mov al, 1
        pop esi
        add esp, 0x14
        ret 
        public_62842fd : nop
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, 2
        je public_6284322
        dec ecx
        je public_6284314
        mov dword ptr ds : [0], 0
        jmp public_6284346
        public_6284314 : nop
        lea ecx, ds:[eax+0x30]
        call public_6347e60
        fstp dword ptr ss : [esp+0x1C]
        jmp public_6284346
        public_6284322 : nop
        mov ecx, dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+8]
        public_6284346 : nop
        mov eax, dword ptr ds : [esi+0x54]
        fld dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x1C]
        mov al, 1
        pop esi
        fstp dword ptr ds : [ecx]
        add esp, 0x14
        ret 
        public_6284360 : nop
        xor al, al
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62842e0)
    }
}

#undef public_62842fd
#undef public_6284314
#undef public_6284322
#undef public_6284346
#undef public_6284360
