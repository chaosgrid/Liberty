#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3d10);
CLANG_FORWARD_PROC_SYMBOL(public_62c50e0);

#define public_62c544d _public_62c544d
#define public_62c5457 _public_62c5457
#define public_62c5479 _public_62c5479
#define public_62c5488 _public_62c5488
#define public_62c548d _public_62c548d
#define public_62c5490 _public_62c5490
#define public_62c549d _public_62c549d

PROC_DECLARE(0x62c53f0, internal_62c53f0, public_62c53f0);
extern "C" NAKED register_t __cdecl internal_62c53f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov esi, ecx
        jne public_62c5457
        cmp dword ptr ss : [esp+0x14], 3
        je public_62c544d
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x410], ecx
        mov eax, dword ptr ds : [esi+0x2F8]
        cmp eax, ebx
        je public_62c548d
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62c548d
        cmp ecx, 0xFFFFFFFF
        je public_62c548d
        lea edi, ds:[esi-0x2C]
        mov ecx, edi
        call public_62c50e0
        test dword ptr ds : [esi+0x300], 0x840
        mov ecx, edi
        jne public_62c5479
        push 2
        call public_62c3d10
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0xC
        public_62c544d : nop
        pop edi
        mov bl, 1
        pop esi
        mov al, bl
        pop ebx
        ret 0xC
        public_62c5457 : nop
        cmp eax, 2
        jne public_62c549d
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 4
        jne public_62c5488
        cmp dword ptr ss : [esp+0x18], 0xFFFFFFFF
        lea ecx, ds:[esi-0x2C]
        je public_62c5490
        mov dword ptr ds : [esi+0x3DC], 0x41800000
        public_62c5479 : nop
        push 6
        call public_62c3d10
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0xC
        public_62c5488 : nop
        cmp eax, 1
        jne public_62c549d
        public_62c548d : nop
        lea ecx, ds:[esi-0x2C]
        public_62c5490 : nop
        push 0xD
        call public_62c3d10
        mov byte ptr ds : [esi+0x36E], bl
        public_62c549d : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62c53f0)
    }
}

#undef public_62c544d
#undef public_62c5457
#undef public_62c5479
#undef public_62c5488
#undef public_62c548d
#undef public_62c5490
#undef public_62c549d
