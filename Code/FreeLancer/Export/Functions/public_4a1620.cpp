#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a0a70);
CLANG_FORWARD_PROC_SYMBOL(public_4a1620);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);

#define public_4a16a0 _public_4a16a0
#define public_4a16af _public_4a16af
#define public_4a16b7 _public_4a16b7
#define public_4a16c3 _public_4a16c3
#define public_4a16ce _public_4a16ce
#define public_4a16e2 _public_4a16e2
#define public_4a16e7 _public_4a16e7
#define public_4a1700 _public_4a1700

PROC_DECLARE(0x4a1620, internal_4a1620, public_4a1620);
extern "C" NAKED register_t __cdecl internal_4a1620()
{
    __asm
    {
        sub esp, 0x28
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x330]
        call public_55e280
        test al, al
        jne public_4a1700
        mov ecx, dword ptr ds : [esi+0x900]
        mov edx, dword ptr ds : [esi+0x904]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x908]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [esi+0xAC0]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+0xAC4]
        mov byte ptr ss : [esp+4], al
        mov eax, dword ptr ds : [esi+0x8FC]
        test eax, eax
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi+0xAC8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [esi+0xACC]
        push ebx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], 0
        mov bl, 2
        je public_4a16af
        lea ecx, ss:[esp+0xC]
        public_4a16a0 : nop
        test byte ptr ds : [eax+0x6C], bl
        jne public_4a16e2
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        test eax, eax
        jne public_4a16a0
        public_4a16af : nop
        xor edx, edx
        lea eax, ds:[esi+0xAE4]
        public_4a16b7 : nop
        mov ecx, dword ptr ds : [eax-0x10]
        test ecx, ecx
        je public_4a16c3
        test byte ptr ds : [ecx+0x6C], bl
        jne public_4a16e2
        public_4a16c3 : nop
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_4a16ce
        test byte ptr ds : [ecx+0x6C], bl
        jne public_4a16e2
        public_4a16ce : nop
        inc edx
        add eax, 4
        cmp edx, 3
        jl public_4a16b7
        mov edx, dword ptr ds : [esi+0x8F4]
        test byte ptr ds : [edx+0x6C], bl
        je public_4a16e7
        public_4a16e2 : nop
        mov byte ptr ss : [esp+8], 1
        public_4a16e7 : nop
        mov al, byte ptr ss : [esp+8]
        cmp al, byte ptr ds : [esi+0xBC0]
        pop ebx
        je public_4a1700
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, esi
        call public_4a0a70
        public_4a1700 : nop
        pop esi
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4a1620)
    }
}

#undef public_4a16a0
#undef public_4a16af
#undef public_4a16b7
#undef public_4a16c3
#undef public_4a16ce
#undef public_4a16e2
#undef public_4a16e7
#undef public_4a1700
