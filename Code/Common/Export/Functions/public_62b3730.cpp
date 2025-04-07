#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62961e0);
CLANG_FORWARD_PROC_SYMBOL(public_62963e0);
CLANG_FORWARD_PROC_SYMBOL(public_6296620);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_62b3730);

#define public_62b377f _public_62b377f
#define public_62b3784 _public_62b3784
#define public_62b378c _public_62b378c
#define public_62b37a3 _public_62b37a3

PROC_DECLARE(0x62b3730, internal_62b3730, public_62b3730);
extern "C" NAKED register_t __cdecl internal_62b3730()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x88]
        mov ecx, dword ptr ds : [eax+0x104]
        mov dword ptr ss : [esp+8], ecx
        push 0x20000
        lea ecx, ds:[edi+0xE4]
        call public_629b720
        push eax
        call public_6296620
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_62b378c
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_62b378c
        mov al, byte ptr ds : [esi+0x54]
        test al, al
        mov ecx, esi
        je public_62b377f
        call public_62963e0
        jmp public_62b3784
        public_62b377f : nop
        call public_62961e0
        public_62b3784 : nop
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        public_62b378c : nop
        mov ecx, dword ptr ds : [edi+0xA4]
        test ecx, ecx
        pop edi
        pop esi
        je public_62b37a3
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x58]
        fmul dword ptr ss : [esp]
        pop ecx
        ret 
        public_62b37a3 : nop
        fld dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62b3730)
    }
}

#undef public_62b377f
#undef public_62b3784
#undef public_62b378c
#undef public_62b37a3
