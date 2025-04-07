#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41fd00);

#define public_41fd67 _public_41fd67

PROC_DECLARE(0x41fd00, internal_41fd00, public_41fd00);
extern "C" NAKED register_t __cdecl internal_41fd00()
{
    __asm
    {
        sub esp, 0x24
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        xor edx, edx
        cmp ecx, 9
        mov byte ptr ds : [eax+0x1C], dl
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ss : [esp], 0xFFFFFFFF
        mov dword ptr ss : [esp+4], 0xFFFFFFFE
        mov dword ptr ss : [esp+8], 0xFFFFFFFD
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFC
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFB
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFA
        mov dword ptr ss : [esp+0x18], 0xFFFFFFF9
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFF8
        mov dword ptr ss : [esp+0x20], 0xFFFFFFF7
        jb public_41fd67
        mov dword ptr ds : [eax+4], edx
        add esp, 0x24
        ret 0xC
        public_41fd67 : nop
        mov ecx, dword ptr ss : [esp+ecx*4]
        mov dword ptr ds : [eax+4], ecx
        mov cl, byte ptr ss : [esp+0x2C]
        mov byte ptr ds : [eax+0x19], dl
        mov dl, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [eax+0x18], cl
        mov byte ptr ds : [eax+0x1A], dl
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x41fd00)
    }
}

#undef public_41fd67
