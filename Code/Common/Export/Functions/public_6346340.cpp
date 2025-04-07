#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63461a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346340);

#define public_6346368 _public_6346368
#define public_6346380 _public_6346380
#define public_63463a8 _public_63463a8
#define public_63463be _public_63463be

PROC_DECLARE(0x6346340, internal_6346340, public_6346340);
extern "C" NAKED register_t __cdecl internal_6346340()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [ecx]
        sub esp, 0x20
        test al, 0xC
        jne public_6346368
        mov edx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        push edx
        call public_63461a0
        jmp public_6346380
        public_6346368 : nop
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        public_6346380 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        test byte ptr ds : [ecx], 0xC
        jne public_63463a8
        mov edx, dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        push edx
        call public_63461a0
        fld dword ptr ss : [esp+0x10]
        jmp public_63463be
        public_63463a8 : nop
        fld dword ptr ds : [public_63a53d4]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        public_63463be : nop
        fld dword ptr ss : [esp]
        mov eax, dword ptr ss : [esp+0x44]
        fsub st, st(1)
        fstp dword ptr ds : [eax]
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [eax+8]
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6346340)
    }
}

#undef public_6346368
#undef public_6346380
#undef public_63463a8
#undef public_63463be
