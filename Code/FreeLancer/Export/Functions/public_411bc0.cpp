#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_411be3 _public_411be3
#define public_411bf2 _public_411bf2
#define public_411c04 _public_411c04
#define public_411c11 _public_411c11
#define public_411c20 _public_411c20
#define public_411c2c _public_411c2c

PROC_DECLARE(0x411bc0, internal_411bc0, public_411bc0);
extern "C" NAKED register_t __cdecl internal_411bc0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+8]
        mov esi, ecx
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_411be3
        mov dword ptr ss : [esp+0x10], 0
        jmp public_411bf2
        public_411be3 : nop
        cmp eax, 0xFF
        jle public_411bf2
        mov dword ptr ss : [esp+0x10], 0xFF
        public_411bf2 : nop
        fld dword ptr ds : [edi+4]
        call public_5b7ec0
        mov ebx, eax
        test ebx, ebx
        jge public_411c04
        xor ebx, ebx
        jmp public_411c11
        public_411c04 : nop
        cmp ebx, 0xFF
        jle public_411c11
        mov ebx, 0xFF
        public_411c11 : nop
        fld dword ptr ds : [edi]
        call public_5b7ec0
        test eax, eax
        jge public_411c20
        xor eax, eax
        jmp public_411c2c
        public_411c20 : nop
        cmp eax, 0xFF
        jle public_411c2c
        mov eax, 0xFF
        public_411c2c : nop
        mov byte ptr ds : [esi], al
        mov al, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+2], al
        pop edi
        mov byte ptr ds : [esi+1], bl
        mov byte ptr ds : [esi+3], 0xFF
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x411bc0)
    }
}

#undef public_411be3
#undef public_411bf2
#undef public_411c04
#undef public_411c11
#undef public_411c20
#undef public_411c2c
